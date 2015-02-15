/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:33:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/XQuartz.app/Contents/Frameworks/Sparkle.framework/Sparkle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sparkle/SUWindowController.h>

@class SUHost, NSArray, NSTextField, NSView, NSButton, NSTableView;

@interface SUUpdatePermissionPrompt : SUWindowController {

	SUHost* host;
	NSArray* systemProfileInformationArray;
	id delegate;
	NSTextField* descriptionTextField;
	NSView* moreInfoView;
	NSButton* moreInfoButton;
	NSTableView* profileTableView;
	char isShowingMoreInfo;
	char shouldSendProfile;

}
+(void)promptWithHost:(id)arg1 systemProfile:(id)arg2 delegate:(id)arg3 ;
-(id)promptDescription;
-(void)toggleMoreInfo:(id)arg1 ;
-(void)finishPrompt:(id)arg1 ;
-(char)shouldAskAboutProfile;
-(id)initWithHost:(id)arg1 systemProfile:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)icon;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(void)awakeFromNib;
@end
