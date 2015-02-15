/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/ITunesConnectFoundation.framework/ITunesConnectFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITunesConnectFoundation/MZITunesProducerServiceClient.h>

@class NSString, NSArray, MZLookupMetadataSubItemInfo;

@interface MZWebServiceLookupMetadata : MZITunesProducerServiceClient {

	NSString* _vendorId;
	NSString* _appleId;
	NSString* _genericId;
	NSArray* _knownVersions;
	char _encodingMetadata;
	MZLookupMetadataSubItemInfo* _subItemInfo;
	NSString* _metadata;
	char _coverArtFixDisabled;

}
+(int)maxNumberOfIapsAllowedForLookup;
+(void)initialize;
-(id)generateArguments;
-(id)operationMethod;
-(id)initialMessage;
-(id)runningMessage;
-(id)completedMessage;
-(id)processUncancelledSuccessfulResult:(id)arg1 ;
-(void)operationWillStart;
-(id)decodeMetadata:(id)arg1 error:(id*)arg2 ;
-(void)setGenericId:(id)arg1 ;
-(id)genericId;
-(void)setAppleId:(id)arg1 ;
-(id)appleId;
-(void)setKnownVersions:(id)arg1 ;
-(id)knownVersions;
-(void)setEncodingMetadata:(char)arg1 ;
-(char)isEncodingMetadata;
-(void)setSubItemInfo:(id)arg1 ;
-(id)subItemInfo;
-(char)isCoverArtFixDisabled;
-(char)hasTooManySubItemsErrorMessage;
-(id)metadata;
-(id)vendorId;
-(void)setVendorId:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
