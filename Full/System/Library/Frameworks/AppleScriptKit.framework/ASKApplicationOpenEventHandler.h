/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleScriptKit/ASKApplicationEventHandler.h>

@interface ASKApplicationOpenEventHandler : ASKApplicationEventHandler {

	long long _oldHandlerRefCon;
	/*function pointer*/void* _oldOpenEventHandlerUPP;
	/*function pointer*/void* _openEventHandlerUPP;

}
-(void)willFinishLaunching:(id)arg1 ;
-(void)handleAppleEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(void)disable;
-(void)enable;
@end
