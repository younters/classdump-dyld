/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCountedSet, CalDateRange, NSMutableSet;

@interface CalUIOccurrenceChangeInfo : NSObject {

	char _updateEverything;
	NSCountedSet* _filteredEnumerationForHeatmap;
	CalDateRange* _dateRangeForHeatMap;
	NSMutableSet* _inserted;
	NSMutableSet* _updated;
	NSMutableSet* _deleted;
	NSMutableSet* _modified;

}

@property (assign) char updateEverything;                                     //@synthesize updateEverything=_updateEverything - In the implementation block
@property (retain) NSCountedSet * filteredEnumerationForHeatmap;              //@synthesize filteredEnumerationForHeatmap=_filteredEnumerationForHeatmap - In the implementation block
@property (retain) CalDateRange * dateRangeForHeatMap;                        //@synthesize dateRangeForHeatMap=_dateRangeForHeatMap - In the implementation block
@property (retain) NSMutableSet * inserted;                                   //@synthesize inserted=_inserted - In the implementation block
@property (retain) NSMutableSet * updated;                                    //@synthesize updated=_updated - In the implementation block
@property (retain) NSMutableSet * deleted;                                    //@synthesize deleted=_deleted - In the implementation block
@property (retain) NSMutableSet * modified;                                   //@synthesize modified=_modified - In the implementation block
+(id)changeInfoForUpdateEverything;
-(void)modifyEvents:(id)arg1 ;
-(char)updateEverything;
-(void)addChangeInfo:(id)arg1 ;
-(id)updatedOccurrences;
-(void)deleteOccurrences:(id)arg1 ;
-(void)insertOccurrences:(id)arg1 ;
-(void)updateOccurrences:(id)arg1 ;
-(NSCountedSet *)filteredEnumerationForHeatmap;
-(CalDateRange *)dateRangeForHeatMap;
-(void)setDateRangeForHeatMap:(CalDateRange *)arg1 ;
-(void)setFilteredEnumerationForHeatmap:(NSCountedSet *)arg1 ;
-(void)setUpdateEverything:(char)arg1 ;
-(void)setInserted:(NSMutableSet *)arg1 ;
-(NSMutableSet *)inserted;
-(id)insertedOccurrences;
-(id)deletedOccurrences;
-(id)modifiedEvents;
-(void)replaceOccurrences:(id)arg1 ;
-(NSMutableSet *)modified;
-(void)setUpdated:(NSMutableSet *)arg1 ;
-(void)setDeleted:(NSMutableSet *)arg1 ;
-(unsigned long long)totalCount;
-(id)init;
-(id)description;
-(void)clear;
-(void)setModified:(NSMutableSet *)arg1 ;
-(NSMutableSet *)deleted;
-(id)briefDescription;
-(NSMutableSet *)updated;
@end
