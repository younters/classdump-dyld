/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/FBAFollowupResponseViewController.h>
#import <Feedback Assistant/NSTextViewDelegate.h>

@class NSMatrix, FBATextViewWithPlaceHolder, NSScrollView, NSLayoutConstraint, NSString;

@interface FBAValidateResponseViewController : FBAFollowupResponseViewController <NSTextViewDelegate> {

	NSMatrix* _verifyConfirmationMatrix;
	FBATextViewWithPlaceHolder* _verifyDescription;
	NSScrollView* _verifyDecriptionScrollView;
	NSLayoutConstraint* _verifyDescriptionHeight;

}

@property (__weak) NSMatrix * verifyConfirmationMatrix;                         //@synthesize verifyConfirmationMatrix=_verifyConfirmationMatrix - In the implementation block
@property (assign) FBATextViewWithPlaceHolder * verifyDescription;              //@synthesize verifyDescription=_verifyDescription - In the implementation block
@property (__weak) NSScrollView * verifyDecriptionScrollView;                   //@synthesize verifyDecriptionScrollView=_verifyDecriptionScrollView - In the implementation block
@property (__weak) NSLayoutConstraint * verifyDescriptionHeight;                //@synthesize verifyDescriptionHeight=_verifyDescriptionHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureForSubmission;
-(void)configureForUse;
-(void)clearPendingContent;
-(char)hasPendingContent;
-(id)initWithFeedbackFollowup:(id)arg1 ;
-(id)submissionJSON;
-(NSMatrix *)verifyConfirmationMatrix;
-(void)updateVerifyExplanationDisplay;
-(void)updateVerifySubmitButton;
-(FBATextViewWithPlaceHolder *)verifyDescription;
-(unsigned long long)verifySelectedResponseTag;
-(NSLayoutConstraint *)verifyDescriptionHeight;
-(NSScrollView *)verifyDecriptionScrollView;
-(void)verifyButtonClicked:(id)arg1 ;
-(void)setVerifyConfirmationMatrix:(NSMatrix *)arg1 ;
-(void)setVerifyDescription:(FBATextViewWithPlaceHolder *)arg1 ;
-(void)setVerifyDecriptionScrollView:(NSScrollView *)arg1 ;
-(void)setVerifyDescriptionHeight:(NSLayoutConstraint *)arg1 ;
-(void)loadView;
-(void)textDidChange:(id)arg1 ;
@end
