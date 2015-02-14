/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/Banner.h>

@class NSTextField, NSButton;

@interface WebClipBanner : Banner {

	NSTextField* prompt;
	NSButton* cancelButton;
	NSButton* commitButton;

}
+(int)bannerSortOrder;
+(char)bannerHasBottomBorder;
+(id)bannerBackgroundImage;
+(id)bannerControlTextAttributes;
-(void)willInstallBannerView;
-(void)didInstallBannerView;
-(void)willUninstallBannerView;
-(id)bannerNibName;
-(id)initWithContentViewController:(SearchableWebContentViewController*)arg1 ;
-(void)createWebClipWithSize:(CGSize)arg1 rect:(CGRect)arg2 signature:(const Dictionary*)arg3 ;
-(void)firstResponderMightHaveChanged;
-(void)_setPromptString:(id)arg1 ;
-(void)cancelCropMode:(id)arg1 ;
-(void)_updateCommitButtonKeyEquivalent;
-(void)confirmCropMode:(id)arg1 ;
@end
