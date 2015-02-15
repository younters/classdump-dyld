/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <AppKit/NSClipView.h>

@interface TAutoResizingClipView : NSClipView {

	CGSize _globalDocumentViewSize;
	BOOL _autoResizeWidth;
	BOOL _autoResizeHeight;

}

@property (assign) BOOL autoResizeWidth;               //@synthesize autoResizeWidth=_autoResizeWidth - In the implementation block
@property (assign) BOOL autoResizeHeight;              //@synthesize autoResizeHeight=_autoResizeHeight - In the implementation block
-(BOOL)autoResizeWidth;
-(void)setAutoResizeWidth:(BOOL)arg1 ;
-(BOOL)autoResizeHeight;
-(void)setAutoResizeHeight:(BOOL)arg1 ;
-(char)isFlipped;
-(void)setDocumentView:(id)arg1 ;
-(void)viewFrameChanged:(id)arg1 ;
@end
