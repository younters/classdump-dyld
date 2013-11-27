/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Notes/Notes-Structs.h>
@class NSMutableArray, NoteContext;

@interface NoteSearchContext : NSObject {

	CXQueryRef query;
	NSMutableArray* integerIds;
	NoteContext* noteContext;

}

@property (nonatomic,readonly) CXQueryRef query; 
-(void)dealloc;
-(CXQueryRef)query;
-(id)initWithSearchTerms:(id)arg1 context:(id)arg2 ;
-(BOOL)nextSearchResults:(id*)arg1 includePrevious:(BOOL)arg2 ;
-(void).cxx_destruct;
@end
