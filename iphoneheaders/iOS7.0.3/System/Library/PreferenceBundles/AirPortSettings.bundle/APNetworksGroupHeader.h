/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel;

@interface APNetworksGroupHeader : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UILabel* _text;

}
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)showSpinner;
-(void)hideSpinner;
@end
