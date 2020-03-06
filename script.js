Java.perform(function() {
	const FeedActivity = Java.use("com.shopify.frenzy.feed.ui.FeedActivity");
	FeedActivity.onCreate.overload("android.os.Bundle").implementation = function(bundle) {
		this.onCreate(bundle);
		const currentActivity = this;
		const Wallet = Java.use('com.google.android.gms.wallet.Wallet');
		const Builder = Java.use('com.google.android.gms.wallet.Wallet$WalletOptions$Builder');
		const PaymentMethodTokenizationParameters = Java.use('com.google.android.gms.wallet.PaymentMethodTokenizationParameters');
		const PaymentDataRequest = Java.use('com.google.android.gms.wallet.PaymentDataRequest');
		const PaymentData = Java.use('com.google.android.gms.wallet.PaymentData');
		const ShippingAddressRequirements = Java.use('com.google.android.gms.wallet.ShippingAddressRequirements');
		const CardRequirements = Java.use('com.google.android.gms.wallet.CardRequirements');
		const TransactionInfo = Java.use('com.google.android.gms.wallet.TransactionInfo');
		const ArrayList = Java.use('java.util.ArrayList');
		const AutoResolveHelper = Java.use('com.google.android.gms.wallet.AutoResolveHelper');
		const Integer = Java.use("java.lang.Integer");

		const PaymentsClient_build = Wallet.getPaymentsClient(currentActivity, Builder.$new().setEnvironment(1).build());
		const PaymentMethodTokenizationParameters_build = PaymentMethodTokenizationParameters.newBuilder().setPaymentMethodTokenizationType(1).addParameter("gateway", "shopify").addParameter("gatewayMerchantId", "682162").build();
		const TransactionInfo_build = TransactionInfo.newBuilder().setTotalPriceStatus(2).setTotalPrice("145.0").setCurrencyCode("CAD").build();
		const authMethods = ArrayList.$new();
		authMethods.add(Integer.valueOf("1"));
		authMethods.add(Integer.valueOf("5"));
		authMethods.add(Integer.valueOf("4"));
		const paymentMethods = ArrayList.$new();
		paymentMethods.add(Integer.valueOf("2"));
		paymentMethods.add(Integer.valueOf("1"));
		const PaymentDataRequestbuild = PaymentDataRequest.newBuilder().setPhoneNumberRequired(false).setEmailRequired(true).setShippingAddressRequired(true).setShippingAddressRequirements(ShippingAddressRequirements.newBuilder().build()).setTransactionInfo(TransactionInfo_build).addAllowedPaymentMethods(paymentMethods).setCardRequirements(CardRequirements.newBuilder().addAllowedCardNetworks(authMethods).setAllowPrepaidCards(true).setBillingAddressRequired(true).setBillingAddressFormat(1).build()).setPaymentMethodTokenizationParameters(PaymentMethodTokenizationParameters_build).setUiRequired(true).build();
		AutoResolveHelper.resolveTask(PaymentsClient_build.loadPaymentData(PaymentDataRequestbuild), currentActivity, 123);
		FeedActivity.onActivityResult.overload('int', 'int', 'android.content.Intent').implementation = function(requestCode, resultCode, data) {
			if (requestCode == 123 && resultCode == -1) {
				const paymentData = PaymentData.getFromIntent(data);
				console.log(JSON.stringify({
					token: paymentData.getPaymentMethodToken().getToken(),
					email: paymentData.getEmail(),
					google_transaction: paymentData.getGoogleTransactionId(),
					card: {
						cardDescription: paymentData.getCardInfo().getCardDescription(),
						cardDetails: paymentData.getCardInfo().getCardDetails(),
						cardNetwork: paymentData.getCardInfo().getCardNetwork(),
					},
					address: {
						billing: getAddress(paymentData.getCardInfo().getBillingAddress()),
						shipping: getAddress(paymentData.getShippingAddress()),
					}
				}))
			}
		}
	};
});

function getAddress(address) {
	let name = address.getName();
	name = name.split(' ')
	return {
		address1: address.getAddress1(),
		address2: address.getAddress2(),
		city: address.getLocality(),
		country_code: address.getCountryCode(),
		first_name: name[0],
		last_name: name[1],
		phone: address.getPhoneNumber(),
		province_code: address.getAdministrativeArea(),
		zip: address.getPostalCode()
	}
}
