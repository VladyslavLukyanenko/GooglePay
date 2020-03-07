#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    char root[500];
    char mkdircmd[1000];
    char rmdircmd[1000];
    strcpy(root, "script.js");
    strcpy(mkdircmd, "mkdir ");
    strcpy(rmdircmd, "rm -rf ");

    srand(time(0));
    /*const char *choices[20];
    choices[0] = "aewqet242tr";
    choices[1] = "e5geg5grh";
    choices[3] = "rgbrb";
    choices[4] = "wsrw";
    choices[5] = "ntuym67n";
    choices[6] = "erg33434";
    choices[7] = "vwg534rtd";
    choices[8] = "45gthdjh65";
    choices[9] = "eg5gehgthbrj";
    choices[10] = "srgg5g45g";
    choices[11] = "eg5re6g6";
    choices[12] = "g4r67n7j";
    choices[13] = "l9k8ky";
    choices[14] = "4444444444444";
    choices[15] = "ge5gerte";
    choices[16] = "hggndnfny";
    choices[17] = "45hgew5gs5";
    choices[18] = "h566urjt6rhr";
    choices[19] = "w4fw4g3etg3t";

    int i;
    for(i = 1; i < 10; i++)
    {
        strcat(root, choices[rand() % 20]);
        strcat(root, "\\");
    }*/

    //strcat(root, choices[rand() % 20]);
    //strcat(mkdircmd, root);
    //strcat(rmdircmd, root);
    //strcat(rmdircmd, " /s");
    //strcat(root, "\\");

    //strcat(root, "script.js");

    FILE *fp;

    //system(mkdircmd);
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
    //system(rmdircmd);

    printf("%s\n", root);

    char cmd[] = "./injector -R v8 -f com.shopify.frenzy.app -s ";
    strcat(cmd, root);
    strcat(cmd, " > temp.txt");
    printf(cmd);
    system(cmd);
    remove("temp.txt");

    return 0;
}
