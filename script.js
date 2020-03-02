Java.perform(function() {
	var FeedActivity = Java.use("com.shopify.frenzy.feed.ui.FeedActivity");
	FeedActivity.onCreate.overload("android.os.Bundle").implementation = function(bundle) {
		this.onCreate(bundle);
		var currentActivity = this;
		var Wallet = Java.use('com.google.android.gms.wallet.Wallet');
		var Builder = Java.use('com.google.android.gms.wallet.Wallet$WalletOptions$Builder');
		var PaymentMethodTokenizationParameters = Java.use('com.google.android.gms.wallet.PaymentMethodTokenizationParameters');
		var PaymentDataRequest = Java.use('com.google.android.gms.wallet.PaymentDataRequest');
		var PaymentData = Java.use('com.google.android.gms.wallet.PaymentData');
		var ShippingAddressRequirements = Java.use('com.google.android.gms.wallet.ShippingAddressRequirements');
		var CardRequirements = Java.use('com.google.android.gms.wallet.CardRequirements');
		var TransactionInfo = Java.use('com.google.android.gms.wallet.TransactionInfo');
		var ArrayList = Java.use('java.util.ArrayList');
		var AutoResolveHelper = Java.use('com.google.android.gms.wallet.AutoResolveHelper');
		var Integer = Java.use("java.lang.Integer");

		var PaymentsClient_build = Wallet.getPaymentsClient(currentActivity, Builder.$new().setEnvironment(1).build());
		var PaymentMethodTokenizationParameters_build = PaymentMethodTokenizationParameters.newBuilder().setPaymentMethodTokenizationType(1).addParameter("gateway", "shopify").addParameter("gatewayMerchantId", "682162").build();
		var TransactionInfo_build = TransactionInfo.newBuilder().setTotalPriceStatus(2).setTotalPrice("145.0").setCurrencyCode("CAD").build();
		var authMethods = ArrayList.$new();
		authMethods.add(Integer.valueOf("1"));
		authMethods.add(Integer.valueOf("5"));
		authMethods.add(Integer.valueOf("4"));
		var paymentMethods = ArrayList.$new();
		paymentMethods.add(Integer.valueOf("2"));
		paymentMethods.add(Integer.valueOf("1"));
		var PaymentDataRequestbuild = PaymentDataRequest.newBuilder().setPhoneNumberRequired(false).setEmailRequired(true).setShippingAddressRequired(true).setShippingAddressRequirements(ShippingAddressRequirements.newBuilder().build()).setTransactionInfo(TransactionInfo_build).addAllowedPaymentMethods(paymentMethods).setCardRequirements(CardRequirements.newBuilder().addAllowedCardNetworks(authMethods).setAllowPrepaidCards(true).setBillingAddressRequired(true).setBillingAddressFormat(1).build()).setPaymentMethodTokenizationParameters(PaymentMethodTokenizationParameters_build).setUiRequired(true).build();
		AutoResolveHelper.resolveTask(PaymentsClient_build.loadPaymentData(PaymentDataRequestbuild), currentActivity, 123);
		FeedActivity.onActivityResult.overload('int', 'int', 'android.content.Intent').implementation = function(requestCode, resultCode, data) {
			var paymentData = PaymentData.getFromIntent(data);
			console.log(paymentData.getPaymentMethodToken().getToken());

		}
	};
});
