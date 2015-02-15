/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Instruments.app/Contents/Frameworks/InstrumentsAnalysisCore.framework/Versions/A/InstrumentsAnalysisCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSURL;

@interface XRAnalysisCorePathManager : NSObject {

	char _doneValidating;
	char _isValid;
	NSMutableSet* _paths;
	NSMutableDictionary* _mappings;
	NSMutableSet* _privateSubpaths;
	NSURL* _privateLocalBaseURL;
	unsigned long long _nextTempID;
	NSURL* _baseURL;

}

@property (readonly) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
+(id)defaultGlobalConfigURL;
+(id)defaultExperimentsURL;
-(id)localFileSystemDirectoryForSubpath:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)moveSubpathFrom:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)createLocalFileSystemDirectoryAtSubpath:(id)arg1 error:(id*)arg2 ;
-(id)copyURL:(id)arg1 asSubpath:(id)arg2 error:(id*)arg3 ;
-(char)validateWithError:(id*)arg1 ;
-(char)remapSubpath:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)enumerateSubpathsAndURLs:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSURL *)baseURL;
-(id)initWithBaseURL:(id)arg1 ;
@end
