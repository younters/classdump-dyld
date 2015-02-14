/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSPrintOperation, NSShadow, NSImage;

@interface NSPrintThumbnailView : NSView {

	NSPrintOperation* _operation;
	NSShadow* _paperShadow;
	NSImage* _cachedImage;
	long long _basePageNumber;

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)viewDidMoveToWindow;
-(CGSize)_paperSize;
-(void)viewDidChangeBackingProperties;
-(CGSize)_pagesLayout;
-(double)_paperAspectRatio;
-(id)_paperShadow;
-(void)invalidateContents;
-(unsigned short)_pagesDirection;
-(char)_mirrorHorizontal;
-(char)_reversePageOrientation;
-(char)_hasPagesBorder;
-(unsigned short)_pagesBorderType;
-(long long)basePageNumber;
-(long long)_pageOffsetForRow:(long long)arg1 column:(long long)arg2 ;
-(void)_drawBorderOfType:(unsigned short)arg1 withScaleFactor:(double)arg2 ;
-(void)setOperation:(id)arg1 ;
-(void)setBasePageNumber:(long long)arg1 ;
-(double)widthForHeight:(double)arg1 ;
-(double)heightForWidth:(double)arg1 ;
@end
