/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/GFTooltipView.h>

@class QCPort, NSView, NSTimer, NSString;

@interface QCPortTooltipView : GFTooltipView {

	QCPort* _port;
	unsigned long long _timestamp;
	NSView* _extensionView;
	NSTimer* _timer;
	CGSize _baseSize;
	NSString* _valueString;

}
+(id)valueTextAttributes;
-(void)finalize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setString:(id)arg1 ;
-(id)initWithPort:(id)arg1 ;
-(void)refresh:(char)arg1 ;
-(void)_timer:(id)arg1 ;
-(void)_startRendering:(id)arg1 ;
-(void)_stopRendering:(id)arg1 ;
@end
