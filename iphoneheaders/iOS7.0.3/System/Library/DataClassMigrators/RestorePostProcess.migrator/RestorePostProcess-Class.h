/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/RestorePostProcess.migrator/RestorePostProcess
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataMigration/DataClassMigrator.h>

@interface RestorePostProcess : DataClassMigrator {

	float _estimatedDuration;
	float _progress;

}
-(void)_installAppPlaceholderAtPath:(id)arg1 ;
-(void)_installAppPlaceholders;
-(void)_registerSafeHarbors;
-(void)_processRestoredApps;
-(void)_resetTetheredSyncAnchors;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
@end
