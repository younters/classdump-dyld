/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol StarkSuggestionProvider, OS_dispatch_semaphore;
@class , NSObject, NSArray, NSMutableArray;

@interface StarkSuggestionSource : NSObject {

	<StarkSuggestionProvider>* _provider;
	NSObject<OS_dispatch_semaphore>* _semaphore;
	NSArray* _suggestions;
	NSMutableArray* _filteredSuggestionsSemaphores;
	NSMutableArray* _filteredSuggestions;

}

@property (nonatomic,readonly) NSArray * filteredSuggestions; 
-(void)requestForLocation:(id)arg1 timePeriod:(id)arg2 ;
-(void)requestFilteredSuggestionsForLocation:(id)arg1 ;
-(id)filteredSuggestions;
-(void)_clearFilteredSuggestions;
-(void)dealloc;
-(BOOL)wait;
-(id)initWithProvider:(id)arg1 ;
@end
