/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <AOSUI/MMWebKitControllerDelegate.h>

@protocol MMWebKitViewControllerDelegate;
@class MMWebKitController, NSWindow, NSString, NSTextField, NSProgressIndicator, NSView, NSImageView, NSMutableDictionary;

@interface MMWebKitViewController : NSObject <MMWebKitControllerDelegate> {

	id<MMWebKitViewControllerDelegate> _delegate;
	MMWebKitController* _webKitController;
	SEL _classCreationSelector;
	NSWindow* _window;
	NSString* _accountID;
	NSString* _password;
	NSTextField* _loadingText;
	NSProgressIndicator* _loadingProgress;
	NSView* _loadingView;
	NSImageView* _noNetworkErrorImageView;
	NSTextField* _noNetworkErrorTitle;
	NSView* _noNetworkErrorView;
	NSImageView* _serverErrorImageView;
	NSTextField* _serverErrorTitle;
	NSView* _serverErrorView;
	NSView* _contentView;
	unsigned long long _mmWebKitViewType;
	NSMutableDictionary* _webKitContext;
	struct {
		unsigned delegateDidCancel : 1;
		unsigned delegateDidSucceed : 1;
		unsigned delegateDidFailLoading : 1;
		unsigned delegateDidFinishLoading : 1;
		unsigned delegateDidDismiss : 1;
		unsigned padding : 3;
	}  _delegateFlags;

}

@property (assign,nonatomic) id<MMWebKitViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MMWebKitController * webKitController;                    //@synthesize webKitController=_webKitController - In the implementation block
@property (nonatomic,retain) NSWindow * window;                                        //@synthesize window=_window - In the implementation block
@property (nonatomic,copy) NSString * accountID;                                       //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * password;                                        //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSTextField * loadingText;                                //@synthesize loadingText=_loadingText - In the implementation block
@property (nonatomic,retain) NSProgressIndicator * loadingProgress;                    //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (nonatomic,retain) NSView * loadingView;                                     //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) NSImageView * noNetworkErrorImageView;                    //@synthesize noNetworkErrorImageView=_noNetworkErrorImageView - In the implementation block
@property (nonatomic,retain) NSTextField * noNetworkErrorTitle;                        //@synthesize noNetworkErrorTitle=_noNetworkErrorTitle - In the implementation block
@property (nonatomic,retain) NSView * noNetworkErrorView;                              //@synthesize noNetworkErrorView=_noNetworkErrorView - In the implementation block
@property (nonatomic,retain) NSImageView * serverErrorImageView;                       //@synthesize serverErrorImageView=_serverErrorImageView - In the implementation block
@property (nonatomic,retain) NSTextField * serverErrorTitle;                           //@synthesize serverErrorTitle=_serverErrorTitle - In the implementation block
@property (nonatomic,retain) NSView * serverErrorView;                                 //@synthesize serverErrorView=_serverErrorView - In the implementation block
@property (nonatomic,retain) NSView * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) unsigned long long mmWebKitViewType;                      //@synthesize mmWebKitViewType=_mmWebKitViewType - In the implementation block
@property (retain) NSMutableDictionary * webKitContext;                                //@synthesize webKitContext=_webKitContext - In the implementation block
@property (assign,nonatomic) SEL classCreationSelector;                                //@synthesize classCreationSelector=_classCreationSelector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(NSProgressIndicator *)loadingProgress;
-(id)initInView:(id)arg1 ;
-(void)setWebKitController:(MMWebKitController *)arg1 ;
-(MMWebKitController *)webKitController;
-(void)loadURLRequest:(id)arg1 ;
-(void)mmWebView:(id)arg1 setFrame:(CGRect)arg2 ;
-(void)mmWebKitControllerConfigureForFrame:(id)arg1 ;
-(void)mmWebKitControllerDidCancel:(id)arg1 ;
-(void)mmWebKitControllerDidSucceed:(id)arg1 ;
-(void)mmWebKitControllerDidFailLoading:(id)arg1 error:(id)arg2 ;
-(void)mmWebKitControllerDidFinishLoading:(id)arg1 ;
-(NSView *)loadingView;
-(void)setLoadingProgress:(NSProgressIndicator *)arg1 ;
-(void)setLoadingView:(NSView *)arg1 ;
-(id)initForStorageManagementWithAccountID:(id)arg1 ;
-(NSMutableDictionary *)webKitContext;
-(void)transitionToLoadingViewAnimated:(char)arg1 ;
-(void)beginModalSheetForWindow:(id)arg1 ;
-(void)handleLoadFailureWithError:(id)arg1 ;
-(void)transitionToWebViewAnimated:(char)arg1 ;
-(void)closeModalSheet;
-(id)initForMailAccountCreationWithAccountID:(id)arg1 ;
-(void)launchNetworkDiagnostics:(id)arg1 ;
-(void)_window:(id)arg1 setFrame:(CGRect)arg2 ;
-(OpaqueJSClassRef)_createAccountCreationClass;
-(void)setClassCreationSelector:(SEL)arg1 ;
-(void)setMmWebKitViewType:(unsigned long long)arg1 ;
-(OpaqueJSClassRef)_createTOSMailNotesClass;
-(OpaqueJSClassRef)_createQuotaClass;
-(void)setLoadingText:(NSTextField *)arg1 ;
-(void)setNoNetworkErrorImageView:(NSImageView *)arg1 ;
-(void)setNoNetworkErrorTitle:(NSTextField *)arg1 ;
-(void)setNoNetworkErrorView:(NSView *)arg1 ;
-(void)setServerErrorImageView:(NSImageView *)arg1 ;
-(void)setServerErrorTitle:(NSTextField *)arg1 ;
-(void)setServerErrorView:(NSView *)arg1 ;
-(void)_hideLoadingView:(char)arg1 ;
-(NSImageView *)noNetworkErrorImageView;
-(NSTextField *)noNetworkErrorTitle;
-(NSView *)noNetworkErrorView;
-(NSImageView *)serverErrorImageView;
-(NSTextField *)serverErrorTitle;
-(NSView *)serverErrorView;
-(unsigned long long)mmWebKitViewType;
-(void)transitionToNetworkErrorViewWithTitle:(id)arg1 image:(id)arg2 animated:(char)arg3 ;
-(void)transitionToServerErrorViewWithTitle:(id)arg1 image:(id)arg2 animated:(char)arg3 ;
-(SEL)classCreationSelector;
-(id)initForAccountCreation;
-(id)initForNotesAccountCreationWithAccountID:(id)arg1 ;
-(id)initForTermsOfServiceWithAccountID:(id)arg1 password:(id)arg2 ;
-(id)initForStorageManagementWithAccountID:(id)arg1 inView:(id)arg2 ;
-(void)okButton:(id)arg1 ;
-(NSTextField *)loadingText;
-(void)setWebKitContext:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)setDelegate:(id<MMWebKitViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSWindow *)window;
-(NSView *)contentView;
-(id<MMWebKitViewControllerDelegate>)delegate;
-(void)setContentView:(NSView *)arg1 ;
-(void)setWindow:(NSWindow *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
@end
