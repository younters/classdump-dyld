/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTextField.h>

@class NSAttributedString;

@interface SFExpandableTextField : NSTextField {

	char _minimized;
	char _isURLText;
	NSAttributedString* _fullString;

}
-(char)minimized;
-(void)setMinimized:(char)arg1 ;
-(id)_expandableAttributedString:(id)arg1 ;
-(char)_isURLString:(id)arg1 ;
-(id)_encodedURLString;
-(char)isURLText;
-(void)dealloc;
-(void)resetCursorRects;
-(void)mouseDown:(id)arg1 ;
-(void)setAttributedStringValue:(id)arg1 ;
-(void)awakeFromNib;
@end
