/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:08:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Installation/CDIS/NetRestore.app/Contents/MacOS/NetRestore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@protocol NRPaneDelegateProtocol;
@class NSDictionary, NSViewController, NSView, NSTextField, NSImageView, NSButton;

@interface NRMainWindowController : NSWindowController {

	NSDictionary* _automationDict;
	NSDictionary* _optionsDict;
	char _skipTargetSelect;
	NSViewController*<NRPaneDelegateProtocol> _currentViewController;
	NSView* _paneViewContainerView;
	NSTextField* _paneTitle;
	NSImageView* _backgroundView;
	NSButton* _continueButton;
	NSButton* _backButton;

}

@property (retain) NSViewController*<NRPaneDelegateProtocol> currentViewController;              //@synthesize currentViewController=_currentViewController - In the implementation block
@property (assign) NSView * paneViewContainerView;                                               //@synthesize paneViewContainerView=_paneViewContainerView - In the implementation block
@property (assign) NSTextField * paneTitle;                                                      //@synthesize paneTitle=_paneTitle - In the implementation block
@property (assign) NSImageView * backgroundView;                                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign) NSButton * continueButton;                                                    //@synthesize continueButton=_continueButton - In the implementation block
@property (assign) NSButton * backButton;                                                        //@synthesize backButton=_backButton - In the implementation block
@property (retain) NSDictionary * automationDictionary;                                          //@synthesize automationDict=_automationDict - In the implementation block
@property (retain) NSDictionary * optionsDictionary;                                             //@synthesize optionsDict=_optionsDict - In the implementation block
+(char)allowQuit;
+(id)mainWindowController;
-(void)setPaneTitle:(NSTextField *)arg1 ;
-(NSViewController*<NRPaneDelegateProtocol>)currentViewController;
-(void)readAutomationFile;
-(void)readOptionsFile;
-(void)continueClicked:(id)arg1 ;
-(id)nextPaneViewController;
-(void)setCurrentViewController:(NSViewController*<NRPaneDelegateProtocol>)arg1 ;
-(NSTextField *)paneTitle;
-(id)previousPaneViewController;
-(void)setAutomationDictionary:(NSDictionary *)arg1 ;
-(char)validAutomationTarget;
-(NSDictionary *)automationDictionary;
-(void)backClicked:(id)arg1 ;
-(NSView *)paneViewContainerView;
-(void)setPaneViewContainerView:(NSView *)arg1 ;
-(void)setContinueButton:(NSButton *)arg1 ;
-(NSButton *)continueButton;
-(NSButton *)backButton;
-(void)setBackButton:(NSButton *)arg1 ;
-(NSDictionary *)optionsDictionary;
-(NSImageView *)backgroundView;
-(void)setBackgroundView:(NSImageView *)arg1 ;
-(void)windowDidBecomeKey:(id)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)awakeFromNib;
-(void)windowDidResignKey:(id)arg1 ;
-(void)setOptionsDictionary:(NSDictionary *)arg1 ;
@end
