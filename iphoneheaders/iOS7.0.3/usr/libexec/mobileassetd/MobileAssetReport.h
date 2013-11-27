/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <mobileassetd/mobileassetd-Structs.h>
@class NSString, NSDate, NSCalendar;

@interface MobileAssetReport : NSObject {

	NSString* _assetType;
	long long _assetArchiveSizeBytes;
	NSDate* _downloadStartDate;
	NSDate* _verificationStartDate;
	NSDate* _unarchivingStartDate;
	NSCalendar* _calendar;

}
-(double)_processingRate:(id)arg1 ;
-(void)downloadDidStart;
-(void)verificationDidStart;
-(void)verificationDidFinish;
-(void)unarchivingDidStart;
-(void)unarchivingDidFinish;
-(void)downloadDidFinish:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithAsset:(_MobileAsset*)arg1 ;
@end
