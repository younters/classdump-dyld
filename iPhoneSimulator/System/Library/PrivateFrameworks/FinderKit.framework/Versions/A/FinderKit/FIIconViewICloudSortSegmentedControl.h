/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSSegmentedControl.h>

@class NSImage;

@interface FIIconViewICloudSortSegmentedControl : NSSegmentedControl {

	TNSRef<NSImage *> _buttonDrawCache;

}

@property (assign,nonatomic) NSImage * buttonDrawCache; 
-(NSImage *)buttonDrawCache;
-(void)setButtonDrawCache:(NSImage *)arg1 ;
-(CGRect)frameInParentIconView;
-(void)drawRect:(CGRect)arg1 ;
-(void)setNeedsDisplay:(char)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
@end

