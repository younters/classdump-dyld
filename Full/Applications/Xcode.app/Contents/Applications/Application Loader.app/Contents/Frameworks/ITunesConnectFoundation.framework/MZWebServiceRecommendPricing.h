/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/ITunesConnectFoundation.framework/ITunesConnectFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITunesConnectFoundation/MZITunesProducerServiceClient.h>

@class NSString, NSArray;

@interface MZWebServiceRecommendPricing : MZITunesProducerServiceClient {

	NSString* _vendorId;
	NSString* _baseCurrency;
	NSString* _physicalListPrice;
	NSString* _suggestedIBookstorePrice;
	NSString* _contentType;
	NSString* _pricingType;
	NSString* _salesStartDate;
	NSArray* _territoryPricingInfo;
	NSString* _maxForeignExchangeRateDate;

}
-(id)generateArguments;
-(id)operationMethod;
-(id)initialMessage;
-(id)runningMessage;
-(id)completedMessage;
-(id)processUncancelledSuccessfulResult:(id)arg1 ;
-(void)operationWillStart;
-(void)setBaseCurrency:(id)arg1 ;
-(id)baseCurrency;
-(void)setPhysicalListPrice:(id)arg1 ;
-(id)physicalListPrice;
-(void)setSuggestedIBookstorePrice:(id)arg1 ;
-(id)suggestedIBookstorePrice;
-(void)setPricingType:(id)arg1 ;
-(id)pricingType;
-(void)setSalesStartDate:(id)arg1 ;
-(id)salesStartDate;
-(id)territoryPricingInfo;
-(id)maxForeignExchangeRateDate;
-(void)setContentType:(id)arg1 ;
-(id)contentType;
-(id)vendorId;
-(void)setVendorId:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
