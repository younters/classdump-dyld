/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NFNotesMigratorDelegate;
#import <Notes/Notes-Structs.h>
@interface NFNotesMigrator : NSObject {

	id<NFNotesMigratorDelegate> _delegate;

}

@property (__weak) id<NFNotesMigratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(void)setDelegate:(id<NFNotesMigratorDelegate>)arg1 ;
-(void)dealloc;
-(id<NFNotesMigratorDelegate>)delegate;
-(id)_notesImporterBundle;
-(char)_localNoteMigrationCompleted;
-(id)_migrateLocalNotesFromMailOperation;
-(id)_finishedMigratingOperation;
-(id)_migrateLocalNotesToiCloudOperation;
-(id)_migrationQueue;
-(void)_setLocalNoteMigrationCompleted;
-(void)_migrateLocalFolder:(id)arg1 toRemoteWithRemoteParent:(id)arg2 inAccount:(id)arg3 ;
-(char)shouldMigrateLocalNotes;
-(char)haveMigratedLocalNotes;
-(char)hasLocalNotes;
-(void)migrateNotesToiCloudIfNecessary:(char)arg1 ;
@end
