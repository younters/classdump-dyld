/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSView, BarBackground;

@interface PVBannerViewController : NSViewController {

	id _delegate;
	NSView* firstKeySubview;
	NSView* lastKeySubview;

}

@property (assign) id delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (retain) BarBackground * view; 
+(long long)bannerSortOrder;
-(void)didUninstallBannerView;
-(void)didInstallBannerView;
-(char)isInstalled;
-(long long)compareBanners:(id)arg1 ;
-(void)installWithAnimation:(char)arg1 ;
-(void)uninstall:(id)arg1 ;
-(void)uninstallWithAnimation:(char)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BarBackground *)view;
-(id)delegate;
-(void)loadView;
-(id)initWithDelegate:(id)arg1 ;
-(id)nibName;
@end
