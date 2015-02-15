/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <AppKit/NSView.h>
#import <Mail/NSAccessibilityGroup.h>

@class NSString;

@interface BannerBackgroundView : NSView <NSAccessibilityGroup> {

	long long _bannerBackgroundStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_bannerBackgroundViewCommonInit;
-(long long)bannerBackgroundStyle;
-(void)setBannerBackgroundStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end
