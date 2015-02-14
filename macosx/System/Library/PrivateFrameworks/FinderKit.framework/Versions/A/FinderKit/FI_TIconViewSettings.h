/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@class NSDictionary, NSString, NSColor, FINode, NSData;

@interface FI_TIconViewSettings : NSObject {

	TNSRef<NSMutableDictionary *> _settings;

}

@property (nonatomic,retain,readonly) NSDictionary * settings; 
@property (assign,nonatomic) double iconSize; 
@property (assign,nonatomic) double textSize; 
@property (assign,nonatomic) double gridSpacing; 
@property (assign,nonatomic) CGPoint gridOffset; 
@property (assign,nonatomic) BOOL labelOnBottom; 
@property (assign,nonatomic) BOOL showItemInfo; 
@property (assign,nonatomic) BOOL showIconPreview; 
@property (nonatomic,retain) NSString * arrangeBy; 
@property (assign,nonatomic) int backgroundType; 
@property (nonatomic,retain) NSColor * backgroundColor; 
@property (assign,nonatomic) FINode * backgroundImageFINode; 
@property (nonatomic,retain) NSData * backgroundImageBookmark; 
@property (assign,nonatomic) CGPoint scrollPosition; 
+(id)settingsFromViewOptions:(id)arg1 ;
+(id)settingsFromPList:(id)arg1 ;
+(id)defaultSettingsForNewUser;
+(id)settingsForNode:(TFENode*)arg1 ;
+(id)settingsFromBrowserSettings:(TIconBrowserSettings*)arg1 ;
-(NSDictionary *)settings;
-(double)textSize;
-(BOOL)showIconPreview;
-(void)setShowIconPreview:(BOOL)arg1 ;
-(void)setLabelOnBottom:(BOOL)arg1 ;
-(BOOL)labelOnBottom;
-(void)setGridOffset:(CGPoint)arg1 ;
-(void)setArrangeBy:(NSString *)arg1 ;
-(CGPoint)gridOffset;
-(NSString *)arrangeBy;
-(FINode *)backgroundImageFINode;
-(void)setBackgroundImageFINode:(FINode *)arg1 ;
-(id)initWithPList:(id)arg1 ;
-(unsigned long long)checkIntegrity:(const TFENode*)arg1 ;
-(BOOL)checkNumberSettingForKey:(id)arg1 lowValue:(double)arg2 highValue:(double)arg3 ;
-(id)initWithIconBrowserSettings:(TIconBrowserSettings*)arg1 ;
-(void)setBackgroundColorRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
-(void)setBackgroundImageBookmark:(NSData *)arg1 ;
-(id)backgroundImageAlias;
-(NSData *)backgroundImageBookmark;
-(void)setBackgroundImageAlias:(id)arg1 ;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(int)backgroundType;
-(void)setScrollPosition:(CGPoint)arg1 ;
-(CGPoint)scrollPosition;
-(double)gridSpacing;
-(void)setTextSize:(double)arg1 ;
-(void)setGridSpacing:(double)arg1 ;
-(void)setShowItemInfo:(BOOL)arg1 ;
-(BOOL)showItemInfo;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(NSColor *)backgroundColor;
-(void)setBackgroundType:(int)arg1 ;
-(double)iconSize;
-(void)setIconSize:(double)arg1 ;
@end
