/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSButton.h>

@class CALMainController;

@interface CalCalendarListButton : NSButton {

	CALMainController* _mainController;

}

@property (__weak) CALMainController * mainController;              //@synthesize mainController=_mainController - In the implementation block
-(CALMainController *)mainController;
-(void)setMainController:(CALMainController *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
@end
