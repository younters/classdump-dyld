/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@protocol DynamicErrorWindowDelegate;
@class NSTextField, NSButton, NSProgressIndicator;

@interface DynamicErrorWindowController : NSWindowController {

	id<DynamicErrorWindowDelegate> _delegate;
	NSTextField* _message;
	NSTextField* _explanation;
	NSButton* _leftButton;
	NSProgressIndicator* _progressIndicator;
	NSButton* _rightButton;
	NSButton* _helpButton;
	long long _diagnosisCode;
	double _distanceToRightEdge;
	double _distanceBetweenButtons;
	double _distanceFromProgresBarToButtons;
	double _progressIndicatorHeight;

}

@property (nonatomic,retain) id<DynamicErrorWindowDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * message;                                //@synthesize message=_message - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * explanation;                            //@synthesize explanation=_explanation - In the implementation block
@property (assign,nonatomic,__weak) NSButton * leftButton;                                //@synthesize leftButton=_leftButton - In the implementation block
@property (assign,nonatomic,__weak) NSProgressIndicator * progressIndicator;              //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (assign,nonatomic,__weak) NSButton * rightButton;                               //@synthesize rightButton=_rightButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * helpButton;                                //@synthesize helpButton=_helpButton - In the implementation block
@property (assign,nonatomic) long long diagnosisCode;                                     //@synthesize diagnosisCode=_diagnosisCode - In the implementation block
@property (assign,nonatomic) double distanceToRightEdge;                                  //@synthesize distanceToRightEdge=_distanceToRightEdge - In the implementation block
@property (assign,nonatomic) double distanceBetweenButtons;                               //@synthesize distanceBetweenButtons=_distanceBetweenButtons - In the implementation block
@property (assign,nonatomic) double distanceFromProgresBarToButtons;                      //@synthesize distanceFromProgresBarToButtons=_distanceFromProgresBarToButtons - In the implementation block
@property (assign,nonatomic) double progressIndicatorHeight;                              //@synthesize progressIndicatorHeight=_progressIndicatorHeight - In the implementation block
-(void)_updateTextFieldHeightForNewContent:(id)arg1 ;
-(void)setDistanceToRightEdge:(double)arg1 ;
-(NSButton *)leftButton;
-(void)setDistanceBetweenButtons:(double)arg1 ;
-(void)setProgressIndicatorHeight:(double)arg1 ;
-(void)setDistanceFromProgresBarToButtons:(double)arg1 ;
-(void)setDiagnosisCode:(long long)arg1 ;
-(void)collectBasicWindowMetrics;
-(NSTextField *)explanation;
-(long long)diagnosisCode;
-(void)_updateTextField:(id)arg1 withText:(id)arg2 belowControl:(id)arg3 ;
-(double)distanceToRightEdge;
-(void)relocateButton:(id)arg1 relativeTo:(double)arg2 ;
-(void)rightActionSelected:(id)arg1 ;
-(double)distanceBetweenButtons;
-(void)leftActionSelected:(id)arg1 ;
-(double)progressIndicatorHeight;
-(double)distanceFromProgresBarToButtons;
-(void)errorDiagnosedAs:(long long)arg1 ;
-(void)setExplanation:(NSTextField *)arg1 ;
-(void)setLeftButton:(NSButton *)arg1 ;
-(void)setRightButton:(NSButton *)arg1 ;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(NSButton *)helpButton;
-(void)setHelpButton:(NSButton *)arg1 ;
-(void)setDelegate:(id<DynamicErrorWindowDelegate>)arg1 ;
-(id<DynamicErrorWindowDelegate>)delegate;
-(void)awakeFromNib;
-(NSProgressIndicator *)progressIndicator;
-(NSTextField *)message;
-(void)setMessage:(NSTextField *)arg1 ;
-(NSButton *)rightButton;
-(void)updateWindowLayout;
@end
