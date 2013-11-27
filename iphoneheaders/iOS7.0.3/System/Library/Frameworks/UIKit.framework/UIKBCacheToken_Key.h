/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken {

	SCD_Union_UI80 _style;
	NSString* _cacheDisplayString;
	int _displayTypeHint;
	int _displayRowHint;
	CGSize _size;
	int _state;
	int _clipCorners;
	BOOL _usesInsets;
	UIEdgeInsets _displayInsets;

}
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI30)arg2 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI30)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(void)dealloc;
-(CGSize)size;
-(id)string;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)hasKey;
-(id)stringForRenderFlags:(int)arg1 lightKeyboard:(BOOL)arg2 ;
-(int)rowHint;
-(void)setRowHint:(int)arg1 ;
-(int)displayHint;
-(void)setDisplayHint:(int)arg1 ;
-(id)_initWithKey:(id)arg1 style:(SCD_Struct_UI30)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(id)_stringWithAdditionalValues:(/*^block*/ id)arg1 ;
@end
