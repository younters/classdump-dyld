/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <AppKit/NSView.h>

@class CalUIViewController;

@interface CalUICalendarContentView : NSView {

	CalUIViewController* _baseController;

}

@property (retain) CalUIViewController * baseController;              //@synthesize baseController=_baseController - In the implementation block
-(id)eventEditingManager;
-(CalUIViewController *)baseController;
-(void)setBaseController:(CalUIViewController *)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(char)wantsUpdateLayer;
-(char)isOpaque;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(void)delete:(id)arg1 ;
-(void)duplicate:(id)arg1 ;
@end
