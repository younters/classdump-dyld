/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BrowserKit/BrowserKit-Structs.h>
#import <BrowserKit/BKImageBrowserView.h>

@interface BKGridView : BKImageBrowserView {

	char _titleVisibilityUsingCellSize;
	long long _titleLineCount;
	char _hasThirdTitle;

}
-(void)setTitleVisibilityUsingCellSize:(char)arg1 ;
-(void)setCellsHaveThirdTitle:(char)arg1 ;
-(float)maximumCellSize;
-(char)cellsHaveThirdTitle;
-(long long)titleLineCount;
-(char)titleVisibilityUsingCellSize;
-(float)minimumCellSize;
-(void)drawSelectionFrame:(CGRect)arg1 ;
-(CGRect)cellMaximumSizeForCurrentBounds;
-(void)setZoomValue:(float)arg1 ;
-(float)zoomValue;
-(void)_adjustGridRowMargin;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setCellSize:(CGSize)arg1 ;
@end
