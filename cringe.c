#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    char root[500];
    strcpy(root, "");

    srand(time(0));
    const char *choices[20];
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
    }

    strcat(root, "script.js");

    FILE *fp;

    mkdir(root);
    fclose(fopen(root, "w"));
    fp = fopen(root, "a");
    fprintf(fp, "function getAddress(e){let t=e.getName();return t=t.split(' '),{address1:e.getAddress1(),address2:e.getAddress2(),city:e.getLocality(),country_code:e.getCountryCode(),first_name:t[0],last_name:t[1],phone:e.getPhoneNumber(),province_code:e.getAdministrativeArea(),zip:e.getPostalCode()}}Java.perform(function(){const e=Java.use('com.shopify.frenzy.feed.ui.FeedActivity');e.onCreate.overload('android.os.Bundle').implementation=function(t){this.onCreate(t);const a=Java.use('com.google.android.gms.wallet.Wallet'),d=Java.use('com.google.android.gms.wallet.Wallet$WalletOptions$Builder'),o=Java.use('com.google.android.gms.wallet.PaymentMethodTokenizationParameters'),n=Java.use('com.google.android.gms.wallet.PaymentDataRequest'),s=Java.use('com.google.android.gms.wallet.PaymentData'),i=Java.use('com.google.android.gms.wallet.ShippingAddressRequirements'),r=Java.use('com.google.android.gms.wallet.CardRequirements'),l=Java.use('com.google.android.gms.wallet.TransactionInfo'),g=Java.use('java.util.ArrayList'),u=Java.use('com.google.android.gms.wallet.AutoResolveHelper'),m=Java.use('java.lang.Integer'),c=a.getPaymentsClient(this,d.$new().setEnvironment(1).build()),v=o.newBuilder().setPaymentMethodTokenizationType(1).addParameter('gateway','shopify').addParameter('gatewayMerchantId','");
    //fprintf(fp, argv[3]);
    fprintf(fp, "').build(),y=l.newBuilder().setTotalPriceStatus(2).setTotalPrice('");
    //fprintf(fp, argv[1]);
    fprintf(fp, "').setCurrencyCode('");
    //fprintf(fp, argv[2]);
    fprintf(fp, "').build(),p=g.$new();p.add(m.valueOf('1')),p.add(m.valueOf('5')),p.add(m.valueOf('4'));const w=g.$new();w.add(m.valueOf('2')),w.add(m.valueOf('1'));const A=n.newBuilder().setPhoneNumberRequired(!1).setEmailRequired(!0).setShippingAddressRequired(!0).setShippingAddressRequirements(i.newBuilder().build()).setTransactionInfo(y).addAllowedPaymentMethods(w).setCardRequirements(r.newBuilder().addAllowedCardNetworks(p).setAllowPrepaidCards(!0).setBillingAddressRequired(!0).setBillingAddressFormat(1).build()).setPaymentMethodTokenizationParameters(v).setUiRequired(!0).build();u.resolveTask(c.loadPaymentData(A),this,123),e.onActivityResult.overload('int','int','android.content.Intent').implementation=function(e,t,a){if(123==e&&-1==t){const e=s.getFromIntent(a);console.log(JSON.stringify({token:e.getPaymentMethodToken().getToken(),email:e.getEmail(),card:e.getCardInfo().getCardDetails(),address:{billing:getAddress(e.getCardInfo().getBillingAddress()),shipping:getAddress(e.getShippingAddress())}}))}}}});");
    fclose(fp);
    remove(root);
    rmdir(root);

    printf("%s\n", root);

    char cmd[] = "./injector -R v8 -e -f com.shopify.frenzy.app -s ";
    strcat(cmd, root);
    printf("%s\n", cmd);
    return 0;
}
