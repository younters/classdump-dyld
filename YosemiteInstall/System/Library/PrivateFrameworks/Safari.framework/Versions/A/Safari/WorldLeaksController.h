/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WorldLeaksController : NSObject {

	char shouldSuppressWorldLeaksDialog;
	int javascriptGlobalObjectWorldLeakCheckExceptions;

}
+(id)sharedWorldLeaksController;
+(void)addLeakToArray:(id)arg1 count:(int)arg2 name:(id)arg3 ;
+(id)worldLeaksString:(int)arg1 ;
-(void)didCloseWebViews:(id)arg1 ;
-(char)_shouldCheckForWorldLeaks;
-(void)webViewsDidClose;
-(void)setShouldSuppressWorldLeaksDialog:(char)arg1 ;
-(void)addJavascriptGlobalObjectWorldLeakCheckException;
-(id)init;
-(void)dealloc;
@end
