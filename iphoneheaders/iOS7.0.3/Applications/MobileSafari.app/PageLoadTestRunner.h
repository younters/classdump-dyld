/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PageLoadTestRunnerDelegate;
#import <MobileSafari/MobileSafari-Structs.h>
@class NSMutableArray, NSOutputStream, NSString, ;

@interface PageLoadTestRunner : NSObject {

	BOOL _started;
	NSMutableArray* _pageLoadArray;
	double _savedDefaultTimeoutInterval;
	NSOutputStream* _logStream;
	NSString* _logFile;
	unsigned _skipCount;
	BOOL _disableProgressBar;
	BOOL _failFast;
	double _pageTimeout;
	double _pageActionInterval;
	double _pageRestInterval;
	int _cacheClearDirective;
	BOOL _collectHeapStatistics;
	BOOL _checkForWorldLeaks;
	<PageLoadTestRunnerDelegate>* _delegate;

}

@property (nonatomic,retain) NSString * logFile;                                   //@synthesize logFile=_logFile - In the implementation block
@property (assign,nonatomic) unsigned skipCount;                                   //@synthesize skipCount=_skipCount - In the implementation block
@property (assign,nonatomic) BOOL disableProgressBar;                              //@synthesize disableProgressBar=_disableProgressBar - In the implementation block
@property (assign,nonatomic) BOOL failFast;                                        //@synthesize failFast=_failFast - In the implementation block
@property (assign,nonatomic) double pageTimeout;                                   //@synthesize pageTimeout=_pageTimeout - In the implementation block
@property (assign,nonatomic) double pageActionInterval;                            //@synthesize pageActionInterval=_pageActionInterval - In the implementation block
@property (assign,nonatomic) double pageRestInterval;                              //@synthesize pageRestInterval=_pageRestInterval - In the implementation block
@property (assign,nonatomic) int cacheClearDirective;                              //@synthesize cacheClearDirective=_cacheClearDirective - In the implementation block
@property (assign,nonatomic) BOOL collectHeapStatistics;                           //@synthesize collectHeapStatistics=_collectHeapStatistics - In the implementation block
@property (assign,nonatomic) BOOL checkForWorldLeaks;                              //@synthesize checkForWorldLeaks=_checkForWorldLeaks - In the implementation block
@property (assign,nonatomic) <PageLoadTestRunnerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(SCD_Struct_Pa7)heapStatistics;
+(void)addLeakToArray:(id)arg1 count:(int)arg2 name:(id)arg3 ;
+(id)worldLeaksString;
+(BOOL)closingBrowserWindowsForWorldLeakTest;
-(void)setTestOptions:(id)arg1 ;
-(bool)loadTestSuiteFile:(id)arg1 ;
-(void)addPageURL:(id)arg1 ;
-(void)setExistingProperty:(id)arg1 to:(id)arg2 ;
-(void)removeURLsInRange:(NSRange)arg1 ;
-(BOOL)checkForWorldLeaksNow;
-(void)clearCacheWithURL:(id)arg1 ;
-(void)startNextPage;
-(void)_startNextPageNow;
-(void)startingTestRunner;
-(void)_pageTimeoutExpired:(id)arg1 ;
-(void)startingTestPage:(id)arg1 ;
-(void)finishPage:(id)arg1 stats:(id)arg2 error:(id)arg3 ;
-(void)checkForWorldLeaksSoon;
-(void)finishedTestRunner;
-(void)_checkRedirect:(id)arg1 ;
-(BOOL)startPageAction:(id)arg1 ;
-(id)dismissAlert;
-(void)_pageRestExpired:(id)arg1 ;
-(void)finishedTestPage:(id)arg1 ;
-(double)pageActionInterval;
-(void)_handleActionTimer:(id)arg1 ;
-(BOOL)performActionForPage:(id)arg1 ;
-(void)closeBrowserWindows;
-(BOOL)finishCheckingForWorldLeaks;
-(void)closeBrowserWindowsAndFinishCheckingForWorldLeaks;
-(id)_pageLoadForTabDocument:(id)arg1 ;
-(BOOL)disableProgressBar;
-(void)setDisableProgressBar:(BOOL)arg1 ;
-(BOOL)failFast;
-(void)setFailFast:(BOOL)arg1 ;
-(double)pageTimeout;
-(void)setPageTimeout:(double)arg1 ;
-(double)pageRestInterval;
-(void)setPageRestInterval:(double)arg1 ;
-(int)cacheClearDirective;
-(void)setCacheClearDirective:(int)arg1 ;
-(BOOL)collectHeapStatistics;
-(void)setCollectHeapStatistics:(BOOL)arg1 ;
-(BOOL)checkForWorldLeaks;
-(void)setCheckForWorldLeaks:(BOOL)arg1 ;
-(void)setPageActionInterval:(double)arg1 ;
-(void)log:(id)arg1 ;
-(unsigned)skipCount;
-(void)setSkipCount:(unsigned)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)start;
-(void)finish;
-(id)logFile;
-(void)setLogFile:(id)arg1 ;
@end
