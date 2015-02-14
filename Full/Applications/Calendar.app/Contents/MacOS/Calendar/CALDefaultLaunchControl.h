/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSButton, CALApplication;

@interface CALDefaultLaunchControl : NSObject {

	id replyAlert;
	NSButton* dontshow;
	CALApplication* _calApplication;

}

@property (__weak) CALApplication * calApplication;              //@synthesize calApplication=_calApplication - In the implementation block
-(void)setCalApplication:(CALApplication *)arg1 ;
-(void)runDialog;
-(void)setDefaultOpenerForFiles:(id)arg1 toAppAtPath:(id)arg2 ;
-(void)clearDefaultOpenerForFiles:(id)arg1 ;
-(id)getOpenerForFiles:(id)arg1 ;
-(void)setDefaultOpenerForFiles:(id)arg1 ;
-(void)setDefaultOpenerForScheme:(id)arg1 ;
-(void)saveDontAskAgain;
-(void)setAsDefaultOpenerForCalendarFiles;
-(CALApplication *)calApplication;
-(void)registerAllDefaultOpener;
-(char)isDefaultForCalendarFiles;
-(char)otherICalDefaultForCalendarFiles;
-(char)dontAskAgain;
-(id)getOpenerForScheme:(id)arg1 ;
-(void)doOk:(id)arg1 ;
-(void)doCancel:(id)arg1 ;
@end
