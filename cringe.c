#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    fclose(fopen("script.js", "w"));
    fp = fopen("script.js", "a");
    fprintf(fp, "function getAddress(e){let t=e.getName();return t=t.split(' '),{address1:e.getAddress1(),address2:e.getAddress2(),city:e.getLocality(),country_code:e.getCountryCode(),first_name:t[0],last_name:t[1],phone:e.getPhoneNumber(),province_code:e.getAdministrativeArea(),zip:e.getPostalCode()}}Java.perform(function(){const e=Java.use('com.shopify.frenzy.feed.ui.FeedActivity');e.onCreate.overload('android.os.Bundle').implementation=function(t){this.onCreate(t);const a=Java.use('com.google.android.gms.wallet.Wallet'),d=Java.use('com.google.android.gms.wallet.Wallet$WalletOptions$Builder'),o=Java.use('com.google.android.gms.wallet.PaymentMethodTokenizationParameters'),n=Java.use('com.google.android.gms.wallet.PaymentDataRequest'),s=Java.use('com.google.android.gms.wallet.PaymentData'),i=Java.use('com.google.android.gms.wallet.ShippingAddressRequirements'),r=Java.use('com.google.android.gms.wallet.CardRequirements'),l=Java.use('com.google.android.gms.wallet.TransactionInfo'),g=Java.use('java.util.ArrayList'),u=Java.use('com.google.android.gms.wallet.AutoResolveHelper'),m=Java.use('java.lang.Integer'),c=a.getPaymentsClient(this,d.$new().setEnvironment(1).build()),v=o.newBuilder().setPaymentMethodTokenizationType(1).addParameter('gateway','shopify').addParameter('gatewayMerchantId','");
    fprintf(fp, argv[3]);
    fprintf(fp, "').build(),y=l.newBuilder().setTotalPriceStatus(2).setTotalPrice('");
    fprintf(fp, argv[1]);
    fprintf(fp, "').setCurrencyCode('");
    fprintf(fp, argv[2]);
    fprintf(fp, "').build(),p=g.$new();p.add(m.valueOf('1')),p.add(m.valueOf('5')),p.add(m.valueOf('4'));const w=g.$new();w.add(m.valueOf('2')),w.add(m.valueOf('1'));const A=n.newBuilder().setPhoneNumberRequired(!1).setEmailRequired(!0).setShippingAddressRequired(!0).setShippingAddressRequirements(i.newBuilder().build()).setTransactionInfo(y).addAllowedPaymentMethods(w).setCardRequirements(r.newBuilder().addAllowedCardNetworks(p).setAllowPrepaidCards(!0).setBillingAddressRequired(!0).setBillingAddressFormat(1).build()).setPaymentMethodTokenizationParameters(v).setUiRequired(!0).build();u.resolveTask(c.loadPaymentData(A),this,123),e.onActivityResult.overload('int','int','android.content.Intent').implementation=function(e,t,a){if(123==e&&-1==t){const e=s.getFromIntent(a);console.log(JSON.stringify({token:e.getPaymentMethodToken().getToken(),email:e.getEmail(),card:e.getCardInfo().getCardDetails(),address:{billing:getAddress(e.getCardInfo().getBillingAddress()),shipping:getAddress(e.getShippingAddress())}}))}}}});");
    fclose(fp);
    system("./injector -R v8 -e -f com.shopify.frenzy.app -s script.js");
    return 0;
}