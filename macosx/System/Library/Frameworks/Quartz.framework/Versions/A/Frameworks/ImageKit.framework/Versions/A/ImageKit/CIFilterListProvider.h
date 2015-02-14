/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CIFilterListProvider : NSObject {

	char _isInternal;
	NSMutableDictionary* _collections;

}
+(id)sharedFilterListProvider;
-(id)localizedNameForCategory:(id)arg1 ;
-(id)localizedNameForFilterName:(id)arg1 ;
-(id)localizedDescriptionForFilterName:(id)arg1 ;
-(id)_getCollections;
-(void)_saveCollections;
-(id)getAllCollections;
-(id)getAllCategories;
-(id)getFiltersInCategory:(id)arg1 ;
-(id)getAllFiltersNotInCategories:(id)arg1 ;
-(id)getFiltersInCollection:(id)arg1 ;
-(void)addCollection:(id)arg1 ;
-(void)renameCollection:(id)arg1 newName:(id)arg2 ;
-(void)addFilter:(id)arg1 toCollection:(id)arg2 ;
-(void)removeFilter:(id)arg1 toCollection:(id)arg2 ;
-(id)uniqueNewCollectionName;
-(id)init;
-(void)removeCollection:(id)arg1 ;
@end
