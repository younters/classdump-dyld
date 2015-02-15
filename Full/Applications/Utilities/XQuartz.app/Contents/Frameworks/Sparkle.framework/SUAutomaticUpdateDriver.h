/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:33:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/XQuartz.app/Contents/Frameworks/Sparkle.framework/Sparkle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sparkle/SUBasicUpdateDriver.h>

@class SUAutomaticUpdateAlert;

@interface SUAutomaticUpdateDriver : SUBasicUpdateDriver {

	char postponingInstallation;
	char showErrors;
	SUAutomaticUpdateAlert* alert;

}
-(void)installWithToolAndRelaunch:(char)arg1 ;
-(char)shouldInstallSynchronously;
-(void)automaticUpdateAlert:(id)arg1 finishedWithChoice:(int)arg2 ;
-(void)abortUpdateWithError:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)unarchiverDidFinish:(id)arg1 ;
@end
