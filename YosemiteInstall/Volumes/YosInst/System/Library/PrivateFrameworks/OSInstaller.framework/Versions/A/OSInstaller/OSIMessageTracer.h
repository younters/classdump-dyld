/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:00:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface OSIMessageTracer : NSObject {

	NSMutableArray* messages;
	NSString* version;
	NSString* _targetPath;

}

@property (retain) NSString * targetPath; 
+(id)sharedInstance;
-(void)writeMessageWithDomain:(id)arg1 fields:(id)arg2 ;
-(char)writeToTarget;
-(id)_filePath;
-(void)publish;
-(NSString *)targetPath;
-(void)setTargetPath:(NSString *)arg1 ;
-(id)init;
@end
