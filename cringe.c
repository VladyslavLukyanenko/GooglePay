#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>

#define IV_LEN 16
#define KEY_LEN 32
#define DATA_LEN 4096

#include "aes256cbc.h"
#include "base64.h"

void  ALARMhandler(int sig);
int folderExists(const char *dirname);
void DisplayEncryptedText(char plainText);

char script_path[4000];

void  ALARMhandler(int sig)
{
  system("pkill -f injector");
  system("pkill -f frida-inject");
  remove(script_path);
}

int folderExists(const char* dirname)
{
    DIR* dir = opendir(dirname);
    if (dir) {
        closedir(dir);
        return 1;
    }
    else {
        return -1;
    }
}

void DisplayEncryptedText(char plainText)
{
    int buffsize = strlen(plainText)+(16%strlen(plainText)); //buffsize = closest multiple of 16
    int fl = 0;
    unsigned char iv[IV_LEN] = "1283666c72eec9e4";
    unsigned char key[KEY_LEN] = "6jaaz2jwsnf0a7kw2k7dqf7k62apknua";

    struct AES_ctx ctx;
	AES256CBC_init_ctx_iv(&ctx, key, iv);
	AES256CBC_encrypt(&ctx, plainText, DATA_LEN);

    char *encchar = base64((const uint8_t *)&plainText, buffsize, &fl);
    printf("Base 64: %s\n", encchar);
}


int main(int argc, char* argv[])
{
    if(argc != 4)
    {
        return -1;
    }
    strcpy(script_path, "");

    //Directories
    const char* dirs[3];
    dirs[0] = "/data/android";
    dirs[1] = "/data/google";
    dirs[2] = "/data/kernel";

    //Check if folders exist
    int i;
    for (i = 0; i < 3; i++) {
        if (folderExists(dirs[i]) < 0) {
            return -99;
        }
    }

    srand(time(0));
    int dirIndex = rand() % 2;

    strcpy(script_path, dirs[dirIndex]);
    strcat(script_path, "/script.js");


    FILE* fp;

    fclose(fopen(script_path, "w"));
    fp = fopen(script_path, "a");
    fprintf(fp, "Java.perform(function(){const FeedActivity=Java.use('com.shopify.frenzy.feed.ui.FeedActivity');FeedActivity.onCreate.overload('android.os.Bundle').implementation=function(bundle){this.onCreate(bundle);const currentActivity=this;const Wallet=Java.use('com.google.android.gms.wallet.Wallet');const Builder=Java.use('com.google.android.gms.wallet.Wallet$WalletOptions$Builder');const PaymentMethodTokenizationParameters=Java.use('com.google.android.gms.wallet.PaymentMethodTokenizationParameters');const PaymentDataRequest=Java.use('com.google.android.gms.wallet.PaymentDataRequest');const PaymentData=Java.use('com.google.android.gms.wallet.PaymentData');const ShippingAddressRequirements=Java.use('com.google.android.gms.wallet.ShippingAddressRequirements');const CardRequirements=Java.use('com.google.android.gms.wallet.CardRequirements');const TransactionInfo=Java.use('com.google.android.gms.wallet.TransactionInfo');const ArrayList=Java.use('java.util.ArrayList');const AutoResolveHelper=Java.use('com.google.android.gms.wallet.AutoResolveHelper');const Integer=Java.use('java.lang.Integer');const PaymentsClient_build=Wallet.getPaymentsClient(currentActivity,Builder.$new().setEnvironment(1).build());const PaymentMethodTokenizationParameters_build=PaymentMethodTokenizationParameters.newBuilder().setPaymentMethodTokenizationType(1).addParameter('gateway','shopify').addParameter('gatewayMerchantId','");
    fprintf(fp, argv[1]);
    fprintf(fp, "').build();const TransactionInfo_build=TransactionInfo.newBuilder().setTotalPriceStatus(2).setTotalPrice('");
    fprintf(fp, argv[2]);
    fprintf(fp, "').setCurrencyCode('");
    fprintf(fp, argv[3]);
    fprintf(fp, "').build();const authMethods=ArrayList.$new();authMethods.add(Integer.valueOf('1'));authMethods.add(Integer.valueOf('5'));authMethods.add(Integer.valueOf('4'));const paymentMethods=ArrayList.$new();paymentMethods.add(Integer.valueOf('2'));paymentMethods.add(Integer.valueOf('1'));const PaymentDataRequestbuild=PaymentDataRequest.newBuilder().setPhoneNumberRequired(!1).setEmailRequired(!0).setShippingAddressRequired(!0).setShippingAddressRequirements(ShippingAddressRequirements.newBuilder().build()).setTransactionInfo(TransactionInfo_build).addAllowedPaymentMethods(paymentMethods).setCardRequirements(CardRequirements.newBuilder().addAllowedCardNetworks(authMethods).setAllowPrepaidCards(!0).setBillingAddressRequired(!0).setBillingAddressFormat(1).build()).setPaymentMethodTokenizationParameters(PaymentMethodTokenizationParameters_build).setUiRequired(!0).build();AutoResolveHelper.resolveTask(PaymentsClient_build.loadPaymentData(PaymentDataRequestbuild),currentActivity,123);FeedActivity.onActivityResult.overload('int','int','android.content.Intent').implementation=function(requestCode,resultCode,data){if(requestCode==123&&resultCode==-1){const paymentData=PaymentData.getFromIntent(data);console.log(JSON.stringify({token:paymentData.getPaymentMethodToken().getToken(),email:paymentData.getEmail(),card:paymentData.getCardInfo().getCardDetails(),address:{billing:getAddress(paymentData.getCardInfo().getBillingAddress()),shipping:getAddress(paymentData.getShippingAddress()),}}))}}}});function getAddress(address){let name=address.getName();name=name.split(' ');return{address1:address.getAddress1(),address2:address.getAddress2(),city:address.getLocality(),country_code:address.getCountryCode(),first_name:name[0],last_name:name[1],phone:address.getPhoneNumber(),province_code:address.getAdministrativeArea(),zip:address.getPostalCode()}}");
    if (fp != NULL)
    {
        fclose(fp);
    }
    else
    {
        printf("script.js is null\n");
    }
    //Main Command
    char cmd[4000] = "./injector -R v8 -f com.shopify.frenzy.app -s ";
    strcat(cmd, script_path);
    //strcat(cmd, " > file.txt");
    //Remove Command
    printf("Cmd: %s\n", cmd);
    signal(SIGALRM, ALARMhandler);
    alarm(20);
    char returnz[90000];
    FILE *fpz = popen(cmd, "r");
    fscanf(fpz, "%s", &returnz);
    pclose(fpz);
    printf("Returnz: %s\n", returnz);

    exit(0);

    return 0;
}
