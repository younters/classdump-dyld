/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <AppKit/NSView.h>

@class NSButton;

@interface CreateAccountView : NSView {

	NSButton* _backButton;
	NSButton* _nextButton;

}

@property (assign,nonatomic,__weak) NSButton * backButton;              //@synthesize backButton=_backButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * nextButton;              //@synthesize nextButton=_nextButton - In the implementation block
-(void)setNextButton:(NSButton *)arg1 ;
-(NSButton *)backButton;
-(void)setBackButton:(NSButton *)arg1 ;
-(NSButton *)nextButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end
