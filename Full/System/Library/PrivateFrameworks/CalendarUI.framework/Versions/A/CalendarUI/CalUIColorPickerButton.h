/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSButton.h>

@class NSString, NSColor, NSImage;

@interface CalUIColorPickerButton : NSButton {

	NSString* _symbolicColor;
	NSColor* _dotColor;
	NSImage* _defaultImage;
	NSImage* _selectedImage;
	NSImage* _hoverImage;
	NSImage* _mouseDownImage;

}

@property (retain) NSString * symbolicColor;              //@synthesize symbolicColor=_symbolicColor - In the implementation block
@property (retain) NSColor * dotColor;                    //@synthesize dotColor=_dotColor - In the implementation block
@property (retain) NSImage * defaultImage;                //@synthesize defaultImage=_defaultImage - In the implementation block
@property (retain) NSImage * selectedImage;               //@synthesize selectedImage=_selectedImage - In the implementation block
@property (retain) NSImage * hoverImage;                  //@synthesize hoverImage=_hoverImage - In the implementation block
@property (retain) NSImage * mouseDownImage;              //@synthesize mouseDownImage=_mouseDownImage - In the implementation block
+(Class)cellClass;
-(id)initWithFrame:(CGRect)arg1 symbolicColor:(id)arg2 color:(id)arg3 ;
-(NSString *)symbolicColor;
-(void)setSymbolicColor:(NSString *)arg1 ;
-(void)setDotColor:(NSColor *)arg1 ;
-(id)_defaultImage;
-(id)_selectedImage;
-(void)setSelectedImage:(NSImage *)arg1 ;
-(id)_hoverImageWithMouseDown:(char)arg1 ;
-(void)setHoverImage:(NSImage *)arg1 ;
-(void)setMouseDownImage:(NSImage *)arg1 ;
-(void)resetButton;
-(NSColor *)dotColor;
-(NSImage *)selectedImage;
-(NSImage *)hoverImage;
-(NSImage *)mouseDownImage;
-(void)isHovered:(char)arg1 ;
-(void)setDefaultImage:(NSImage *)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(NSImage *)defaultImage;
@end
