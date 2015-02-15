/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storeinappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableArray, NSData, NSArray;

@interface MicroPaymentQueueResponse : NSObject {

	NSLock* _lock;
	NSMutableArray* _payments;
	NSMutableArray* _rangesToLoad;
	long long _serverPaymentCount;
	char _shouldTriggerQueueCheck;
	NSData* _receiptData;
	char _isDeferred;

}

@property (copy) NSArray * payments; 
@property (retain) NSArray * rangesToLoad; 
@property (assign) long long serverPaymentCount; 
@property (assign) char shouldTriggerQueueCheck; 
@property (getter=receiptData,retain,readonly) NSData * receiptData; 
@property (assign) char isDeferred;                                               //@synthesize isDeferred=_isDeferred - In the implementation block
-(NSArray *)rangesToLoad;
-(void)setRangesToLoad:(NSArray *)arg1 ;
-(char)loadFromPropertyList:(id)arg1 ;
-(NSArray *)payments;
-(void)appendResponse:(id)arg1 ;
-(id)_dsidFromDictionary:(id)arg1 ;
-(id)_copyPaymentsFromDictionary:(id)arg1 ;
-(char)_loadFromPropertyList:(id)arg1 ;
-(long long)serverPaymentCount;
-(void)setServerPaymentCount:(long long)arg1 ;
-(void)setPayments:(NSArray *)arg1 ;
-(void)setShouldTriggerQueueCheck:(char)arg1 ;
-(char)shouldTriggerQueueCheck;
-(void)setIsDeferred:(char)arg1 ;
-(char)isDeferred;
-(NSData *)receiptData;
@end
