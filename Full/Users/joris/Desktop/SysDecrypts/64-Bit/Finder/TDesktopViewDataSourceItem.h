/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/NSCopying.h>

@class NSDictionary, NSImage, NSString, NSArray;

@interface TDesktopViewDataSourceItem : NSObject <NSCopying> {

	TFENode* _node;
	TNSRef<NSImage *> _icon;
	TString* _itemInfoText;
	BOOL _selected;
	TNSRef<NSObject<NSCopying> *> _sortValue;
	TString* _displayNameForSort;
	TString* _rawNameForSort;
	unsigned _volumeIsMaskForSort;

}

@property (retain,readonly) NSDictionary * data; 
@property (retain,readonly) NSImage * icon; 
@property (readonly) NSString * displayName; 
@property (readonly) NSArray * tagColorIndexes; 
@property (readonly) NSString * itemInfoText; 
@property (readonly) unsigned long long inlineProgressPercentComplete; 
@property (readonly) unsigned inlineProgressState; 
@property (readonly) BOOL inlineProgressCanCancel; 
@property (getter=isDimmed,readonly) BOOL dimmed; 
@property (getter=isSelected) BOOL selected;                                        //@synthesize selected=_selected - In the implementation block
+(id)keyPathsForValuesAffectingData;
-(BOOL)inlineProgressCanCancel;
-(NSString *)itemInfoText;
-(NSArray *)tagColorIndexes;
-(unsigned long long)inlineProgressPercentComplete;
-(unsigned)inlineProgressState;
-(void)setIconNoKVO:(id)arg1 ;
-(void)setItemInfoTextNoKVO:(id)arg1 ;
-(id)initWithNode:(const TFENode*)arg1 fetchIconAtSize:(unsigned long long)arg2 ;
-(void)setItemInfoText:(NSString *)arg1 ;
-(void)getSortValuesForSort:(TDesktopViewDataSourceItemSortValues*)arg1 ;
-(void)updateSortValuesWithSortingRecord:(const NodeSortingRecord*)arg1 sortProperty:(unsigned)arg2 ;
-(BOOL)isDimmed;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(NSDictionary *)data;
-(NSString *)displayName;
-(const TFENode*)node;
-(id)initWithNode:(const TFENode*)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
@end
