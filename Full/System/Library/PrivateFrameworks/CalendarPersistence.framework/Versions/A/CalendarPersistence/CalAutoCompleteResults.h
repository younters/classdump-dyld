/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface CalAutoCompleteResults : NSObject {

	NSArray* _results;
	NSString* _searchString;

}

@property (retain) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (retain) NSArray * results;                    //@synthesize results=_results - In the implementation block
-(void)dealloc;
-(NSArray *)results;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
@end
