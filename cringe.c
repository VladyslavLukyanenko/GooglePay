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

//#define CBC 1

static void phex(uint8_t* str);
static int test_encrypt_cbc(void);
static int test_decrypt_cbc(void);
void  ALARMhandler(int sig);
void delfilei();

//#include "aes.h"

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

int folderExists(char *dirname)
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

void  ALARMhandler(int sig)
{
  delfilei();
}

char globalroot[4000];

void delfilei()
{
    remove(globalroot);
    exit(0);
}

int main(int argc, char *argv[])
{
    strcpy(globalroot, "");
    char root[500];
    char rmcmd[1000];
    strcpy(rmcmd, "rm -rf ");

    const char *dirs[3];
    dirs[0] = "/data/android";
    dirs[1] = "/data/google";
    dirs[2] = "/data/kernel";

    int i;
    for(i = 0; i < 3; i++){
        if(folderExists(dirs[i]) < 0){
            //return -1;
        }
    }

    srand(time(0));
    int dirIndex = rand() % 2;

    strcpy(root, dirs[dirIndex]);
    strcat(root, "/script.js");

    strcat(rmcmd, dirs[dirIndex]);
    strcat(rmcmd, "/script.js");

    FILE *fp;

    fclose(fopen(root, "w"));
    fp = fopen(root, "a");
    fprintf(fp, "Java.perform(function(){const FeedActivity=Java.use('com.shopify.frenzy.feed.ui.FeedActivity');FeedActivity.onCreate.overload('android.os.Bundle').implementation=function(bundle){this.onCreate(bundle);const currentActivity=this;const Wallet=Java.use('com.google.android.gms.wallet.Wallet');const Builder=Java.use('com.google.android.gms.wallet.Wallet$WalletOptions$Builder');const PaymentMethodTokenizationParameters=Java.use('com.google.android.gms.wallet.PaymentMethodTokenizationParameters');const PaymentDataRequest=Java.use('com.google.android.gms.wallet.PaymentDataRequest');const PaymentData=Java.use('com.google.android.gms.wallet.PaymentData');const ShippingAddressRequirements=Java.use('com.google.android.gms.wallet.ShippingAddressRequirements');const CardRequirements=Java.use('com.google.android.gms.wallet.CardRequirements');const TransactionInfo=Java.use('com.google.android.gms.wallet.TransactionInfo');const ArrayList=Java.use('java.util.ArrayList');const AutoResolveHelper=Java.use('com.google.android.gms.wallet.AutoResolveHelper');const Integer=Java.use('java.lang.Integer');const PaymentsClient_build=Wallet.getPaymentsClient(currentActivity,Builder.$new().setEnvironment(1).build());const PaymentMethodTokenizationParameters_build=PaymentMethodTokenizationParameters.newBuilder().setPaymentMethodTokenizationType(1).addParameter('gateway','shopify').addParameter('gatewayMerchantId','");
    fprintf(fp, argv[1]);
    fprintf(fp, "').build();const TransactionInfo_build=TransactionInfo.newBuilder().setTotalPriceStatus(2).setTotalPrice('");
    fprintf(fp, argv[2]);
    fprintf(fp, "').setCurrencyCode('");
    fprintf(fp, argv[3]);
    fprintf(fp, "').build();const authMethods=ArrayList.$new();authMethods.add(Integer.valueOf('1'));authMethods.add(Integer.valueOf('5'));authMethods.add(Integer.valueOf('4'));const paymentMethods=ArrayList.$new();paymentMethods.add(Integer.valueOf('2'));paymentMethods.add(Integer.valueOf('1'));const PaymentDataRequestbuild=PaymentDataRequest.newBuilder().setPhoneNumberRequired(!1).setEmailRequired(!0).setShippingAddressRequired(!0).setShippingAddressRequirements(ShippingAddressRequirements.newBuilder().build()).setTransactionInfo(TransactionInfo_build).addAllowedPaymentMethods(paymentMethods).setCardRequirements(CardRequirements.newBuilder().addAllowedCardNetworks(authMethods).setAllowPrepaidCards(!0).setBillingAddressRequired(!0).setBillingAddressFormat(1).build()).setPaymentMethodTokenizationParameters(PaymentMethodTokenizationParameters_build).setUiRequired(!0).build();AutoResolveHelper.resolveTask(PaymentsClient_build.loadPaymentData(PaymentDataRequestbuild),currentActivity,123);FeedActivity.onActivityResult.overload('int','int','android.content.Intent').implementation=function(requestCode,resultCode,data){if(requestCode==123&&resultCode==-1){const paymentData=PaymentData.getFromIntent(data);console.log(JSON.stringify({token:paymentData.getPaymentMethodToken().getToken(),email:paymentData.getEmail(),card:paymentData.getCardInfo().getCardDetails(),address:{billing:getAddress(paymentData.getCardInfo().getBillingAddress()),shipping:getAddress(paymentData.getShippingAddress()),}}))}}}});function getAddress(address){let name=address.getName();name=name.split(' ');return{address1:address.getAddress1(),address2:address.getAddress2(),city:address.getLocality(),country_code:address.getCountryCode(),first_name:name[0],last_name:name[1],phone:address.getPhoneNumber(),province_code:address.getAdministrativeArea(),zip:address.getPostalCode()}}");
    fclose(fp);

    char cmd[] = "./injector -R v8 -f com.shopify.frenzy.app -s ";
    strcat(cmd, root);
    char temp[2000];
    strcpy(temp, "");
    strcat(temp, "rm -rf ");
    strcat(temp, root);
    strcat(globalroot, root);

    //ENCRYPTION STUFF
    /*struct AES_ctx ctx;

    uint8_t key[] = "aaaaaaaaaaaaaaaa";
    uint8_t iv[]  = "bbbbbbbbbbbbbbbb";
    uint8_t str[] = "This a sample text, Length eq 32";

    printf("\n Raw text\n");

    for (i = 0; i < 32; ++i) {
        printf("%.2x", str[i]);
    }

    AES_init_ctx_iv(&ctx, key, iv);
    AES_CBC_encrypt_buffer(&ctx, str, 32);
    printf("\n Encrypted text\n");
    for (i = 0; i < 32; ++i) {
        printf("%.2x", str[i]);
    }

    printf("\n Decrypted text\n");
    AES_init_ctx_iv(&ctx, key, iv);
    AES_CBC_decrypt_buffer(&ctx, str, 32);
    for (i = 0; i < 32; ++i) {
        printf("%.2x", str[i]);
    }

    printf("\n");*/

    //signal(SIGALRM, ALARMhandler);
    //alarm(30);
    system(cmd);
    remove(root);

    return 0;
}
