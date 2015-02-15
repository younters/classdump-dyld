/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <AppKit/NSProgressIndicator.h>

@protocol NVDelayedSpinnerDelegate;
@class NSDate;

@interface NVDelayedSpinner : NSProgressIndicator {

	char _startRequested;
	char _stopRequested;
	NSDate* _startAnimationDate;
	long long _trackingTag;
	id<NVDelayedSpinnerDelegate> _delegate;

}

@property (readonly) char spins; 
@property (__weak) id<NVDelayedSpinnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)spins;
-(void)startDelayedAnimation:(id)arg1 ;
-(void)stopDelayedAnimation:(id)arg1 ;
-(void)setSpins:(char)arg1 ;
-(void)stopRealAnimation;
-(void)startRealAnimation;
-(void)setDelegate:(id<NVDelayedSpinnerDelegate>)arg1 ;
-(void)setHidden:(char)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id<NVDelayedSpinnerDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
@end
