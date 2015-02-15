/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSTextStorage, NSDictionary;


@protocol AKTextAnnotationProtocol <NSObject>
@property (retain) NSTextStorage * annotationText; 
@property (copy) NSDictionary * typingAttributes; 
@property (assign) char isEditingText; 
@property (assign) char textIsFixedWidth; 
@property (assign) char textIsFixedHeight; 
@property (assign) char textIsClipped; 
@required
-(NSTextStorage *)annotationText;
-(void)setAnnotationText:(id)arg1;
-(char)isEditingText;
-(void)setIsEditingText:(char)arg1;
-(char)textIsFixedWidth;
-(void)setTextIsFixedWidth:(char)arg1;
-(char)textIsFixedHeight;
-(void)setTextIsFixedHeight:(char)arg1;
-(char)textIsClipped;
-(void)setTextIsClipped:(char)arg1;
-(NSDictionary *)typingAttributes;
-(void)setTypingAttributes:(id)arg1;

@end
