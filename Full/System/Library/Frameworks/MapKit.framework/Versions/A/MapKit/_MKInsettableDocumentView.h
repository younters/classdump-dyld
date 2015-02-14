/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSView;

@interface _MKInsettableDocumentView : NSView {

	char _updatingFrame;
	double _topInset;
	double _bottomInset;
	NSView* _contentView;

}

@property (assign,nonatomic) double topInset;                   //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) double bottomInset;                //@synthesize bottomInset=_bottomInset - In the implementation block
@property (nonatomic,retain) NSView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(void)setTopInset:(double)arg1 ;
-(void)setBottomInset:(double)arg1 ;
-(double)topInset;
-(double)bottomInset;
-(void)dealloc;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(char)isFlipped;
-(void)_updateFrame;
@end
