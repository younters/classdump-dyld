/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/tmutil
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <tmutil/tmutil-Structs.h>
#import <tmutil/DEIteratorDelegate.h>

@class NSURL, DEIterator, NSNumber, NSSet, XMLPropertyListStream;

@interface DEIteratorController : NSObject <DEIteratorDelegate> {

	NSURL* _olderURL;
	NSURL* _newerURL;
	DEIterator* _iterator;
	char _ignoreRoots;
	NSNumber* _maxIterationDepth;
	unsigned long long _comparisonFlags;
	NSSet* _ignoredXattrPrefixes;
	NSSet* _ignoredPathComponents;
	char _reportIdenticalItems;
	char _printDifferences;
	XMLPropertyListStream* _propertyListStream;
	DEDeltaRecord _deltaRecord;
	char _foundDifferences;

}

@property (readonly) NSURL * olderURL;                                      //@synthesize olderURL=_olderURL - In the implementation block
@property (readonly) NSURL * newerURL;                                      //@synthesize newerURL=_newerURL - In the implementation block
@property (readonly) DEIterator * iterator;                                 //@synthesize iterator=_iterator - In the implementation block
@property (assign) char ignoreRoots;                                        //@synthesize ignoreRoots=_ignoreRoots - In the implementation block
@property (retain) NSNumber * maxIterationDepth;                            //@synthesize maxIterationDepth=_maxIterationDepth - In the implementation block
@property (assign) unsigned long long comparisonFlags;                      //@synthesize comparisonFlags=_comparisonFlags - In the implementation block
@property (copy) NSSet * ignoredXattrPrefixes;                              //@synthesize ignoredXattrPrefixes=_ignoredXattrPrefixes - In the implementation block
@property (copy) NSSet * ignoredPathComponents;                             //@synthesize ignoredPathComponents=_ignoredPathComponents - In the implementation block
@property (assign) char reportIdenticalItems;                               //@synthesize reportIdenticalItems=_reportIdenticalItems - In the implementation block
@property (assign) char printDifferences;                                   //@synthesize printDifferences=_printDifferences - In the implementation block
@property (retain) XMLPropertyListStream * propertyListStream;              //@synthesize propertyListStream=_propertyListStream - In the implementation block
@property (readonly) DEDeltaRecord deltaRecord;                             //@synthesize deltaRecord=_deltaRecord - In the implementation block
@property (readonly) char foundDifferences;                                 //@synthesize foundDifferences=_foundDifferences - In the implementation block
-(id)initWithOlderURL:(id)arg1 newerURL:(id)arg2 ;
-(void)setComparisonFlags:(unsigned long long)arg1 ;
-(void)setIgnoreRoots:(char)arg1 ;
-(void)setMaxIterationDepth:(NSNumber *)arg1 ;
-(void)setPrintDifferences:(char)arg1 ;
-(void)setPropertyListStream:(XMLPropertyListStream *)arg1 ;
-(void)setIgnoredXattrPrefixes:(NSSet *)arg1 ;
-(void)setIgnoredPathComponents:(NSSet *)arg1 ;
-(void)setReportIdenticalItems:(char)arg1 ;
-(char)runCompare;
-(DEDeltaRecord)deltaRecord;
-(unsigned long long)comparisonFlags;
-(char)differenceEngine:(id)arg1 shouldSkipOldItem:(id)arg2 ;
-(char)differenceEngine:(id)arg1 shouldSkipNewItem:(id)arg2 ;
-(void)differenceEngine:(id)arg1 foundRemovedItems:(id)arg2 ;
-(void)differenceEngine:(id)arg1 foundAddedItems:(id)arg2 ;
-(void)differenceEngine:(id)arg1 foundDifferences:(unsigned long long)arg2 oldItem:(id)arg3 newItem:(id)arg4 ;
-(NSNumber *)maxIterationDepth;
-(void)prepareOlderRoot:(id*)arg1 newerRoot:(id*)arg2 ;
-(char)ignoreRoots;
-(char)reportIdenticalItems;
-(void)iteratorWillRun;
-(NSURL *)olderURL;
-(NSURL *)newerURL;
-(NSSet *)ignoredXattrPrefixes;
-(DEIterator *)iterator;
-(NSSet *)ignoredPathComponents;
-(char)printDifferences;
-(XMLPropertyListStream *)propertyListStream;
-(char)foundDifferences;
-(void)dealloc;
@end
