/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:02:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/TextEdit.app/Contents/MacOS/TextEdit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSScrollView.h>

@interface ScalingScrollView : NSScrollView
-(void)setScaleFactor:(double)arg1 adjustPopup:(char)arg2 ;
-(void)zoomToActualSize:(id)arg1 ;
-(void)zoomOut:(id)arg1 ;
-(void)zoomIn:(id)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(char)preservesContentDuringLiveResize;
-(void)awakeFromNib;
@end
