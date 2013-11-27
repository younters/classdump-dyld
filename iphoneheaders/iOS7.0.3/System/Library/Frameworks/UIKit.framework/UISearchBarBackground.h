/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIBarBackgroundImageView.h>
#import <UIKit/_UIBarPositioningInternal.h>

@class UIColor, NSMutableDictionary, UIImage;

@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {

	UIColor* _barTintColor;
	NSMutableDictionary* _customBackgroundImages;
	NSMutableDictionary* _generatedBackgroundImages;
	int _barPosition;
	unsigned _searchBarStyle;
	unsigned _barStyle : 3;
	unsigned _barTranslucence : 3;
	unsigned _usesEmbeddedAppearance : 1;
	unsigned _actingAsNavBar : 1;
	unsigned _usesContiguousBarBackground : 1;
	unsigned _barHasController;

}

@property (assign,nonatomic) int barStyle; 
@property (assign,nonatomic) unsigned searchBarStyle; 
@property (nonatomic,retain) UIColor * barTintColor;                             //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (assign,nonatomic) BOOL usesEmbeddedAppearance; 
@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * backgroundImagePrompt; 
@property (assign,nonatomic) BOOL usesContiguousBarBackground; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isTranslucent;
-(id)backgroundImage;
-(void)_updateBackgroundImage;
-(void)_setBarPosition:(int)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(int)barStyle;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(int)_barPosition;
-(id)barTintColor;
-(void)setUsesEmbeddedAppearance:(BOOL)arg1 ;
-(void)setSearchBarStyle:(unsigned)arg1 ;
-(void)_setBehavesAsIfSearchBarHasController:(BOOL)arg1 ;
-(BOOL)_hasCustomBackgroundImage;
-(void)setUsesContiguousBarBackground:(BOOL)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3 ;
-(id)_backgroundImageForBarPosition:(int)arg1 barMetrics:(int)arg2 ;
-(BOOL)usesEmbeddedAppearance;
-(unsigned)searchBarStyle;
-(void)_updateBackgroundImageIfPossible;
-(id)_createBackgroundImageForBarStyle:(int)arg1 alpha:(float)arg2 ;
-(id)backgroundImagePrompt;
-(BOOL)usesContiguousBarBackground;
@end
