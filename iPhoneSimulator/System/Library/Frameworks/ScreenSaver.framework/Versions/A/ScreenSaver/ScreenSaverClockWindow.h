/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSaver/ScreenSaver-Structs.h>
#import <AppKit/NSWindow.h>
#import <ScreenSaver/NSWindowDelegate.h>

@class ScreenSaverClockView, NSTimer, NSBezierPath, NSString;

@interface ScreenSaverClockWindow : NSWindow <NSWindowDelegate> {

	ScreenSaverClockView* _clockView;
	NSTimer* _updateTimer;
	NSBezierPath* _clockPath;
	CGPoint _startingPoint;
	int _corner;
	long long _lastHour;
	long long _lastMinute;
	int _zeroPointIndex;
	id _clockDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showInSpace:(id)arg1 ;
+(CGRect)clockFrame;
+(void)hide;
+(void)show;
-(void)_constructClockPath;
-(void)_show;
-(void)_updateWindow;
-(int)_zeroPointIndexIntoClockPath;
-(CGRect)_advanceClockPath:(id)arg1 ;
-(void)_notifyClockMoved;
-(void)dealloc;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(void)_hide;
@end
