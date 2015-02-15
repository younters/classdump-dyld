/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/ITunesSoftwareService.framework/ITunesSoftwareService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITunesConnectFoundation/MZAbstractToolExecutor.h>

@class NSString, NSArray;

@interface ITunesCodesignAllocateExecutor : MZAbstractToolExecutor {

	NSString* _executablePath;
	NSArray* _architectures;
	NSString* _uniqueTemporaryOutputPath;

}

@property (nonatomic,retain) NSString * executablePath;                         //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,retain) NSArray * architectures;                           //@synthesize architectures=_architectures - In the implementation block
@property (nonatomic,retain) NSString * uniqueTemporaryOutputPath;              //@synthesize uniqueTemporaryOutputPath=_uniqueTemporaryOutputPath - In the implementation block
+(id)codesignAllocateExecutablePath;
+(void)initialize;
-(char)expectsStandardOutputWithSuccessfulExit;
-(id)taskWithError:(id*)arg1 ;
-(void)processExitCode:(id)arg1 ;
-(void)setExecutablePath:(NSString *)arg1 ;
-(NSArray *)architectures;
-(void)setArchitectures:(NSArray *)arg1 ;
-(NSString *)uniqueTemporaryOutputPath;
-(void)setUniqueTemporaryOutputPath:(NSString *)arg1 ;
-(id)fullPath;
-(void)dealloc;
-(NSString *)executablePath;
-(id)initWithExecutablePath:(id)arg1 ;
@end
