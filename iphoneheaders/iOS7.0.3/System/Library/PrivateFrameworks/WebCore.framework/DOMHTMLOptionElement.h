/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLOptionElement : DOMHTMLElement

@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * label; 
@property (assign) BOOL defaultSelected; 
@property (assign) BOOL selected; 
@property (copy) NSString * value; 
@property (readonly) NSString * text; 
@property (readonly) int index; 
-(id)itemTitle;
-(id)createSelectedItem;
-(id)createPickerCell;
-(void)populateCell:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)text;
-(void)setSelected:(BOOL)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(int)index;
-(id)form;
-(BOOL)selected;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)defaultSelected;
-(void)setDefaultSelected:(BOOL)arg1 ;
@end
