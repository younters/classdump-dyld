/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/EKUITokenField.h>

@interface EKUIAttendeesTokenField : EKUITokenField {

	char _isExpanded;
	CGSize _intrinsicContentSize;

}

@property (assign) CGSize intrinsicContentSize;              //@synthesize intrinsicContentSize=_intrinsicContentSize - In the implementation block
@property (assign) char isExpanded;                          //@synthesize isExpanded=_isExpanded - In the implementation block
-(char)areAttendeesEditable;
-(void)setIntrinsicContentSize:(CGSize)arg1 ;
-(id)attendeesViewController;
-(CGSize)intrinsicContentSize;
-(id)hitTest:(CGPoint)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)becomeFirstResponder;
-(char)isExpanded;
-(void)setIsExpanded:(char)arg1 ;
@end
