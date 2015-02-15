/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:03 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/MacOS/HWMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSURL, NSString, WebView;

@interface AboutController : NSWindowController {

	NSURL* _creditsUrl;
	NSString* _creditsHtml;
	char _webViewFinishedLoading;
	WebView* _creditsWebView;

}

@property (assign) WebView * creditsWebView;              //@synthesize creditsWebView=_creditsWebView - In the implementation block
-(WebView *)creditsWebView;
-(void)setCreditsWebView:(WebView *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)openLink:(id)arg1 ;
-(id)init;
-(void)showWindow:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(void)windowDidLoad;
@end
