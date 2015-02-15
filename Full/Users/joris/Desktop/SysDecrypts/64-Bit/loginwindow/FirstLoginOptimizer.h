/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/loginwindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FirstLoginOptimizer : NSObject {

	NSString* _currentSystemVersion;
	NSString* _currentBuildVersion;
	unsigned _currentSystemVersionNumber;
	unsigned _currentBuildVersionNumber;
	int _QLManagePID;

}

@property (readonly) NSString * currentSystemVersion;                  //@synthesize currentSystemVersion=_currentSystemVersion - In the implementation block
@property (readonly) NSString * currentBuildVersion;                   //@synthesize currentBuildVersion=_currentBuildVersion - In the implementation block
@property (readonly) unsigned currentSystemVersionNumber;              //@synthesize currentSystemVersionNumber=_currentSystemVersionNumber - In the implementation block
@property (readonly) unsigned currentBuildVersionNumber;               //@synthesize currentBuildVersionNumber=_currentBuildVersionNumber - In the implementation block
-(void)tickleFirstLoginOptimizer:(char)arg1 ;
-(unsigned)currentSystemVersionNumber;
-(unsigned)currentBuildVersionNumber;
-(NSString *)currentBuildVersion;
-(void)runOptimizerToolForUser:(id)arg1 ;
-(NSString *)currentSystemVersion;
-(id)init;
-(void)dealloc;
@end
