/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <PowerlogLoggerSupport/PLLogger.h>

@class NSMutableDictionary, NSTimer, NSArray, UsageFeed;

@interface PLProcessNetworkLogger : PLLogger {

	NStatManagerRef statManagerRef;
	NSMutableDictionary* coalescedDictionary;
	NSMutableDictionary* processDictionary;
	NSMutableDictionary* interfaceNameDictionary;
	NSTimer* queryTimer;
	BOOL DEBUG_NSTAT;
	BOOL enableNetConnLogging;
	NSArray* netConnectProcesses;
	UsageFeed* feed;

}
-(void)removeSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)log;
-(void)setupSource:(NStatSourceRef)arg1 ;
-(void)queryNetworkInfo:(id)arg1 ;
-(void)queryTriggerNotification:(id)arg1 ;
-(void)_setupAppUsage;
-(id)interfaceNameForIndex:(id)arg1 ;
-(void)logAppUsage:(BOOL)arg1 ;
-(void)insertSourceForProcess:(id)arg1 withSource:(id)arg2 ;
-(BOOL)processIsWhitelisted:(id)arg1 ;
-(id)sockaddrToNSString:(const sockaddr*)arg1 ;
-(id)stringFromTrafficClass:(unsigned)arg1 ;
-(void)coalesceSource:(id)arg1 ;
-(void)handleFlushSymptomsNotificationNotification:(id)arg1 ;
@end
