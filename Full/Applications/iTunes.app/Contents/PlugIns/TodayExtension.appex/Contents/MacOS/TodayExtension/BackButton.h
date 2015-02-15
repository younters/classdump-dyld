/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iTunes.app/Contents/PlugIns/TodayExtension.appex/Contents/MacOS/TodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TodayExtension/TwoStateButton.h>

@class TodayViewController;

@interface BackButton : TwoStateButton {

	TodayViewController* _controller;

}

@property (__weak) TodayViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)handlePeriodicEvent;
-(TodayViewController *)controller;
-(char)accessibilityPerformPress;
-(id)accessibilityLabel;
-(void)setController:(TodayViewController *)arg1 ;
@end
