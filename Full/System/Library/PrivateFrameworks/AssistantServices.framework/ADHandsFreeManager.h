/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <assistantd/assistantd-Structs.h>
@interface ADHandsFreeManager : NSObject {

	CFSetRef _observers;

}
+(id)sharedManager;
-(void)_notifyObservers:(char)arg1 ;
-(void)_listenForAudioRouteChanges;
-(void)_stopListeningForAudioRouteChanges;
-(void)_audioRouteChanged:(id)arg1 ;
-(void)addHandsFreeStateObserver:(id)arg1 ;
-(void)removeHandsFreeStateObserver:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
