/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CDD, NSMutableArray, NSObject;

@interface CDDPools : NSObject {

	CDD* cdd;
	NSMutableArray* pooltable;
	int poolNotificationToken;
	NSObject*<OS_dispatch_queue> poolQueue;

}

@property (nonatomic,retain) CDD * cdd; 
-(id)initWithCDDinstance:(id)arg1 ;
-(CDD *)cdd;
-(void)setCdd:(CDD *)arg1 ;
-(long long)persistentPoolReadWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 delete:(char)arg3 ;
-(void)persistentPoolWriteWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 value:(long long)arg3 ;
-(void)doAllocPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 value:(long long)arg3 parentIntegerId:(unsigned long long)arg4 maxFraction:(double)arg5 modulationType:(long long)arg6 ;
-(void)doDecrementPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 decrementValue:(long long)arg3 sync:(char)arg4 ;
-(char)isPoolAndItsParentPositive:(unsigned long long)arg1 cliendId:(unsigned long long)arg2 ;
-(char)isPoolDescendentOfBudgetType:(unsigned long long)arg1 clientId:(unsigned long long)arg2 budgetType:(long long)arg3 ;
-(id)doSearchPoolName:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(void)doIncrementPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 incrementValue:(long long)arg3 sync:(char)arg4 ;
-(unsigned long long)findParentsDailyBudget:(id)arg1 ;
-(void)allocPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 value:(long long)arg3 parentIntegerId:(unsigned long long)arg4 maxFraction:(double)arg5 modulationType:(int)arg6 ;
-(void)deletePoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(void)changePoolParentWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 parentIntegerId:(unsigned long long)arg3 ;
-(void)cachePoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 parentIntegerId:(unsigned long long)arg3 maxFraction:(double)arg4 modulationType:(int)arg5 ;
-(long long)readPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(unsigned long long)compareAndSwapPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 compareValue:(long long)arg3 swapValue:(long long)arg4 ;
-(void)decrementPoolWithIntegerIdWB:(unsigned long long)arg1 clientId:(unsigned long long)arg2 decrementValue:(long long)arg3 ;
-(void)decrementPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 decrementValue:(long long)arg3 ;
-(char)isPoolDescentdentOfVariantName:(unsigned long long)arg1 clientId:(unsigned long long)arg2 clientVariantName:(id)arg3 ;
-(void)incrementPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 incrementValue:(long long)arg3 ;
-(void)refillPoolsOfModulationType:(int)arg1 forSlotNumber:(int)arg2 ;
-(void)dumpLight;
-(void)dumpAll;
@end
