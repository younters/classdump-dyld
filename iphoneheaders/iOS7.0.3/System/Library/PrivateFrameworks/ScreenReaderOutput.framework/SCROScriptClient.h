/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock, SCROConnection, SCRCTargetSelectorTimer;

@interface SCROScriptClient : NSObject {

	NSLock* _lock;
	SCROConnection* _connection;
	SCRCTargetSelectorTimer* _timer;
	BOOL _isReady;

}
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(void)initialize;
+(id)sharedScriptClient;
-(BOOL)_isReady;
-(oneway void)release;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)_lazyConnection;
-(void)_killConnection;
-(BOOL)runScriptFile:(id)arg1 ;
-(void)handleCallback:(id)arg1 ;
@end
