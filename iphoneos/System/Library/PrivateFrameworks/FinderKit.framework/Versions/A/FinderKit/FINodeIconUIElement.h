/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FINodeUIElement.h>

@class IKImageBrowserView;

@interface FINodeIconUIElement : FINodeUIElement {

	TNSRef<id> _controller;

}

@property (nonatomic,retain,readonly) IKImageBrowserView * containerView; 
-(void)setSelection:(BOOL)arg1 ;
-(CGRect)frame;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)setController:(id)arg1 ;
-(IKImageBrowserView *)containerView;
-(BOOL)isSelected;
@end
