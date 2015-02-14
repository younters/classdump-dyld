/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSScroller.h>

@class FI_TListViewController;

@interface FI_TListVerticalScroller : NSScroller {

	FI_TListViewController* _listViewController;

}

@property (nonatomic,retain) FI_TListViewController * listViewController;              //@synthesize listViewController=_listViewController - In the implementation block
+(char)isCompatibleWithResponsiveScrolling;
+(char)isCompatibleWithOverlayScrollers;
-(FI_TListViewController *)listViewController;
-(void)setListViewController:(FI_TListViewController *)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
@end
