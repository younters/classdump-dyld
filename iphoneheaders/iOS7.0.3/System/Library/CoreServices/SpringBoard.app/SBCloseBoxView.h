/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIButton.h>

@class SBIconBlurryBackgroundView, UIView, UIImageView, SBIconColorSettings;

@interface SBCloseBoxView : UIButton {

	SBIconBlurryBackgroundView* _backgroundView;
	UIView* _whiteTintView;
	UIImageView* _xColorBurnView;
	UIImageView* _xPlusDView;
	SBIconColorSettings* _colorSettings;
	CGPoint _wallpaperRelativeCenter;

}
-(void)setWallpaperRelativeCenter:(CGPoint)arg1 ;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLegibilityStyle:(int)arg1 ;
@end
