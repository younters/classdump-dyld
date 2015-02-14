/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPanel, NSTextField, NSImageView, NSButton, IMAccount, NSArray;

@interface ServiceErrorDialog : NSObject {

	NSPanel* _errorPanel;
	NSTextField* _errorMessageField;
	NSTextField* _errorInfoTextField;
	NSTextField* _errorTimestampField;
	NSImageView* _errorIcon;
	NSButton* _okButton;
	IMAccount* _account;
	long long _requestID;
	int _type;
	NSArray* _topLevelObjects;

}
+(void)displayDaemonDisconnectedDialog;
+(id)errorDialogsForAccount:(id)arg1 ofType:(int)arg2 ;
+(id)errorDialogsForAccount:(id)arg1 ;
+(void)closeErrorDialogsForAccount:(id)arg1 ofType:(int)arg2 ;
+(void)_displayAlertMessage:(id)arg1 infoText:(id)arg2 windowTitle:(id)arg3 forAccount:(id)arg4 ofType:(int)arg5 ;
+(id)allErrorDialogsOfType:(int)arg1 ;
+(void)closeErrorDialogsForAccount:(id)arg1 ;
+(id)allErrorDialogs;
-(void)closeErrorPanel:(id)arg1 ;
-(void)_resizePanelForField:(id)arg1 withOtherField:(id)arg2 havingYMargin:(unsigned long long)arg3 ;
-(id)initWithMessage:(id)arg1 infoText:(id)arg2 windowTitle:(id)arg3 date:(id)arg4 image:(id)arg5 associatedAccount:(id)arg6 errorType:(int)arg7 closeOnDaemonReconnect:(char)arg8 ;
-(id)associatedAccount;
-(void)showPanel:(id)arg1 ;
-(void)dealloc;
-(int)type;
@end
