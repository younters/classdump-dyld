/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/AssistantDelegate.h>

@class Assistant, NSWindow, NSView, NSButton, NSEvent, NSString;

@interface AssistantManager : NSObject <AssistantDelegate> {

	Assistant* _assistant;
	char _userWantsToQuit;
	NSWindow* _window;
	NSView* _assistantContainerView;
	NSButton* _backButton;
	NSButton* _forwardButton;
	NSButton* _cancelButton;
	NSButton* _helpButton;
	NSEvent* _libraryUpgradeCompletedEvent;
	long long _type;
	AssistantManager* _me;

}

@property (nonatomic,retain) Assistant * assistant; 
@property (assign,nonatomic,__weak) NSView * assistantContainerView;              //@synthesize assistantContainerView=_assistantContainerView - In the implementation block
@property (assign,nonatomic,__weak) NSButton * backButton;                        //@synthesize backButton=_backButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * forwardButton;                     //@synthesize forwardButton=_forwardButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * cancelButton;                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSWindow * window;                                   //@synthesize window=_window - In the implementation block
@property (assign,nonatomic,__weak) NSButton * helpButton;                        //@synthesize helpButton=_helpButton - In the implementation block
@property (nonatomic,retain) NSEvent * libraryUpgradeCompletedEvent;              //@synthesize libraryUpgradeCompletedEvent=_libraryUpgradeCompletedEvent - In the implementation block
@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char userWantsToQuit;                                //@synthesize userWantsToQuit=_userWantsToQuit - In the implementation block
@property (nonatomic,retain) AssistantManager * me;                               //@synthesize me=_me - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)openAssistantOfType:(long long)arg1 modalForWindow:(id)arg2 userWantsToQuit:(char*)arg3 ;
+(id)openAssistantOfType:(long long)arg1 modalForWindow:(id)arg2 ;
+(char)isImporting;
-(void)setUserWantsToQuit:(char)arg1 ;
-(char)userWantsToQuit;
-(NSView *)assistantContainerView;
-(void)assistantDidFinish:(id)arg1 ;
-(void)_showInWindow:(id)arg1 ;
-(Assistant *)assistant;
-(id)_newAssistantOfType:(long long)arg1 ;
-(void)setAssistant:(Assistant *)arg1 ;
-(void)setLibraryUpgradeCompletedEvent:(NSEvent *)arg1 ;
-(void)_moveWindowToFront:(id)arg1 ;
-(NSEvent *)libraryUpgradeCompletedEvent;
-(void)forward:(id)arg1 ;
-(void)setAssistantContainerView:(NSView *)arg1 ;
-(void)setForwardButton:(NSButton *)arg1 ;
-(void)back:(id)arg1 ;
-(AssistantManager *)me;
-(NSButton *)backButton;
-(void)setBackButton:(NSButton *)arg1 ;
-(NSButton *)forwardButton;
-(void)setMe:(AssistantManager *)arg1 ;
-(NSButton *)helpButton;
-(void)setHelpButton:(NSButton *)arg1 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_start;
-(NSWindow *)window;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)setWindow:(NSWindow *)arg1 ;
-(id)_initWithType:(long long)arg1 ;
-(void)_terminate;
-(NSButton *)cancelButton;
-(void)_sheetWillBegin:(id)arg1 ;
-(void)_windowDidBecomeKey:(id)arg1 ;
@end
