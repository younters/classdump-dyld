/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/RAID Utility.app/Contents/MacOS/RAID Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RAID Utility/RURaidManagementWindowController.h>

@class CRVolume, NSMutableSet, CRDriveGroup, RURegistryEntryMatrix, NSArrayController;

@interface RUMoveVolumeController : RURaidManagementWindowController {

	CRVolume* _volume;
	NSMutableSet* _additionalGroups;
	CRDriveGroup* _selectedGroup;
	RURegistryEntryMatrix* moveVolumeMatrix;
	NSArrayController* groupsController;

}
+(id)keyPathsForValuesAffectingAdditionalGroups;
+(id)keyPathsForValuesAffectingIsMovePossible;
-(void)okButtonClick:(id)arg1 ;
-(void)helpButtonClick:(id)arg1 ;
-(void)setupOperations;
-(id)additionalDrives;
-(char)isMovePossible;
-(char)hideHelp;
-(char)isBootedFromSelectedVolume;
-(id)infoString;
-(id)selectedGroup;
-(id)init;
-(void)dealloc;
-(void)windowDidLoad;
-(void)setVolume:(id)arg1 ;
-(id)volume;
-(void)setDevice:(id)arg1 ;
@end
