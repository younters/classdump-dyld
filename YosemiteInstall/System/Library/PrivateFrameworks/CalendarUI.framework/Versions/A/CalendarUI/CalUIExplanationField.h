/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalUIGadget.h>

@class NSTextView, NSMutableArray;

@interface CalUIExplanationField : CalUIGadget {

	char _shown;
	NSTextView* _view;
	NSMutableArray* _requestingGadgets;

}

@property (assign) char shown;                                      //@synthesize shown=_shown - In the implementation block
@property (retain) NSTextView * view;                               //@synthesize view=_view - In the implementation block
@property (retain) NSMutableArray * requestingGadgets;              //@synthesize requestingGadgets=_requestingGadgets - In the implementation block
-(void)inspectorDidClose;
-(void)setRequestingGadgets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)requestingGadgets;
-(char)shown;
-(id)init;
-(NSTextView *)view;
-(void)sizeToFit;
-(void)setView:(NSTextView *)arg1 ;
-(id)textView;
-(void)setShown:(char)arg1 ;
@end
