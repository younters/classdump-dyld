/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class GKCollectionViewDataSource, NSString, NSMutableDictionary;

@interface GKAggregateMapping : NSObject <NSCopying> {

	GKCollectionViewDataSource* _dataSource;
	int _sectionCount;
	NSString* _dynamicTag;
	NSMutableDictionary* _globalToLocalSections;
	NSMutableDictionary* _localToGlobalSections;
	NSMutableDictionary* _globalSectionsToTags;

}

@property (nonatomic,retain) GKCollectionViewDataSource * dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) int sectionCount;                                         //@synthesize sectionCount=_sectionCount - In the implementation block
@property (nonatomic,retain) NSString * dynamicTag;                                    //@synthesize dynamicTag=_dynamicTag - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * globalToLocalSections;              //@synthesize globalToLocalSections=_globalToLocalSections - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localToGlobalSections;              //@synthesize localToGlobalSections=_localToGlobalSections - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * globalSectionsToTags;               //@synthesize globalSectionsToTags=_globalSectionsToTags - In the implementation block
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(void)setDynamicTag:(id)arg1 ;
-(unsigned)globalSectionForLocalSection:(unsigned)arg1 ;
-(unsigned)updateMappingsStartingWithGlobalSection:(unsigned)arg1 ;
-(unsigned)localSectionForGlobalSection:(unsigned)arg1 ;
-(id)globalIndexPathForLocalIndexPath:(id)arg1 ;
-(id)tagForGlobalSection:(int)arg1 ;
-(id)localIndexPathForGlobalIndexPath:(id)arg1 ;
-(void)setSectionCount:(int)arg1 ;
-(id)globalToLocalSections;
-(void)setGlobalToLocalSections:(id)arg1 ;
-(id)localToGlobalSections;
-(void)setLocalToGlobalSections:(id)arg1 ;
-(id)globalSectionsToTags;
-(void)setGlobalSectionsToTags:(id)arg1 ;
-(id)initWithGlobalToLocalMapping:(id)arg1 ;
-(void)addMappingFromGlobalSection:(unsigned)arg1 toLocalSection:(unsigned)arg2 withTag:(id)arg3 ;
-(id)dynamicTag;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)init;
-(id)description;
-(id)dataSource;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)sectionCount;
@end
