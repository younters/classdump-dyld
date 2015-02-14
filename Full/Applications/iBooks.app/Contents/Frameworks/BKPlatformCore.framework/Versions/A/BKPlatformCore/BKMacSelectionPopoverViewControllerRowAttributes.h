/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAttributedString, NSImage, NSColor;

@interface BKMacSelectionPopoverViewControllerRowAttributes : NSObject {

	int _type;
	SEL _actionSelector;
	double _height;
	NSAttributedString* _attributedString;
	NSImage* _image;
	NSImage* _alternateImage;
	NSColor* _textColor;
	id _representedObject;

}

@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) SEL actionSelector;                               //@synthesize actionSelector=_actionSelector - In the implementation block
@property (assign,nonatomic) double height;                                    //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) NSImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSImage * alternateImage;                         //@synthesize alternateImage=_alternateImage - In the implementation block
@property (nonatomic,retain) NSColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) id representedObject;                             //@synthesize representedObject=_representedObject - In the implementation block
-(SEL)actionSelector;
-(void)setHeight:(double)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(void)setTextColor:(NSColor *)arg1 ;
-(NSColor *)textColor;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(NSImage *)alternateImage;
-(void)setAlternateImage:(NSImage *)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setActionSelector:(SEL)arg1 ;
-(double)height;
@end
