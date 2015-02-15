/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FileSync.framework/Versions/A/FileSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FileSync/SFFileSyncManager.h>
@class SFPHDSyncSet, NSArray;


@protocol SFFileSyncManager
@property (readonly) char agentIsRunning; 
@property (copy,readonly) SFPHDSyncSet * phdSyncSet; 
@property (copy,readonly) NSArray * syncSetsList; 
@required
-(char)agentIsRunning;
-(NSArray *)syncSetsList;
-(int)willNotPerformPHDLogoutSyncForSyncSetNamed:(n@)arg1;
-(int)willNotPerformPHDLoginSyncForSyncSetNamed:(n@)arg1;
-(int)willPerformPHDLoginSyncForSyncSetNamed:(n@)arg1 withLocalHomePath:(n@)arg2;
-(int)willPerformPHDLogoutSyncForSyncSetNamed:(n@)arg1 withLocalHomePath:(n@)arg2;
-(id)createPHDSyncSetWithName:(n@)arg1 remoteXMLSpec:(n@)arg2 mountSuffixPath:(n@)arg3;
-(id)createPHDSyncSetWithName:(n@)arg1 localHomePath:(n@)arg2 remoteXMLSpec:(n@)arg3 mountSuffixPath:(n@)arg4;
-(id)createSyncSetWithName:(n@)arg1;
-(id)findSyncSetByName:(n@)arg1;
-(id)findSyncSetByRef:(n@)arg1;
-(void)printStateTreeAtPath:(n@)arg1 verbosity:(int)arg2 toPath:(n@)arg3;
-(int)willNotPerformLoginSync;
-(int)willNotPerformLogoutSync;
-(int)willPerformLoginSync;
-(int)willPerformLoginSync:(n@)arg1;
-(int)willPerformLogoutSync;
-(int)willPerformLogoutSync:(n@)arg1;
-(SFPHDSyncSet *)phdSyncSet;

@end


@class SFPHDSyncSet, NSArray;

@interface SFFileSyncManager : NSObject <SFFileSyncManager>

@property (readonly) char agentIsRunning; 
@property (copy,readonly) SFPHDSyncSet * phdSyncSet; 
@property (copy,readonly) NSArray * syncSetsList; 
+(id)sharedFileSyncManager;
+(void)deregisterUIApp;
+(void)registerUIAppCallbackTarget:(id)arg1 selector:(SEL)arg2 ;
+(void)initialize;
+(char)accessInstanceVariablesDirectly;
-(char)agentIsRunning;
-(NSArray *)syncSetsList;
-(int)willNotPerformPHDLogoutSyncForSyncSetNamed:(n@)arg1 ;
-(int)willNotPerformPHDLoginSyncForSyncSetNamed:(n@)arg1 ;
-(int)willPerformPHDLoginSyncForSyncSetNamed:(n@)arg1 withLocalHomePath:(n@)arg2 ;
-(int)willPerformPHDLogoutSyncForSyncSetNamed:(n@)arg1 withLocalHomePath:(n@)arg2 ;
-(id)createPHDSyncSetWithName:(n@)arg1 remoteXMLSpec:(n@)arg2 mountSuffixPath:(n@)arg3 ;
-(id)createPHDSyncSetWithName:(n@)arg1 localHomePath:(n@)arg2 remoteXMLSpec:(n@)arg3 mountSuffixPath:(n@)arg4 ;
-(id)createSyncSetWithName:(n@)arg1 ;
-(id)findSyncSetByName:(n@)arg1 ;
-(id)findSyncSetByRef:(n@)arg1 ;
-(void)printStateTreeAtPath:(n@)arg1 verbosity:(int)arg2 toPath:(n@)arg3 ;
-(int)willNotPerformLoginSync;
-(int)willNotPerformLogoutSync;
-(int)willPerformLoginSync;
-(int)willPerformLoginSync:(n@)arg1 ;
-(int)willPerformLogoutSync;
-(int)willPerformLogoutSync:(n@)arg1 ;
-(SFPHDSyncSet *)phdSyncSet;
@end
