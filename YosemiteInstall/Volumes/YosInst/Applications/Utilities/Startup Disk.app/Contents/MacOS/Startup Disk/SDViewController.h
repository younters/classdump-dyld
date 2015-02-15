/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:01:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Applications/Utilities/Startup Disk.app/Contents/MacOS/Startup Disk
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SDMatrix, NSMutableArray, SDController, NSLock, NSTimer, NSMutableString, NSCell, NSString, NSImage, NSRecursiveLock;

@interface SDViewController : NSObject {

	id diskScrollView;
	id netBootTable;
	id netBootBox;
	id progressIndicator;
	id splitView;
	id statusTextField;
	SDMatrix* _matrix;
	id restartButton;
	id tdmButton;
	NSMutableArray* _netBootServerList;
	SDController* _sd;
	NSLock* _timerLock;
	NSTimer* _currentActivityTimer;
	NSMutableString* _saveDescriptionStr;
	double _heightAdjustment;
	unsigned long long _netBootListLimit;
	char _collapsed;
	char _userChangedStartupSystem;
	char _isEnabled;
	NSCell* _protoCell;
	NSLock* _nbTableShowHideLock;
	NSString* _currentSortProperty;
	NSImage* ascendingSortingImage;
	NSImage* descendingSortingImage;
	char matrixDidChange;
	NSRecursiveLock* matrixChangeLock;
	NSRecursiveLock* systemAddLock;

}

@property (assign) unsigned long long netBootListLimit;              //@synthesize netBootListLimit=_netBootListLimit - In the implementation block
@property (retain) NSMutableArray * netBootServerList;               //@synthesize netBootServerList=_netBootServerList - In the implementation block
@property (retain) id restartButton; 
@property (retain) id tdmButton; 
@property (assign) char matrixDidChange; 
@property (retain) SDMatrix * matrix;                                //@synthesize matrix=_matrix - In the implementation block
+(id)sharedSDViewController;
-(void)unlockDisk:(id)arg1 ;
-(void)addSystem:(id)arg1 ;
-(void)updateMatrix;
-(void)removeVolumeAtDevice:(id)arg1 ;
-(id)selectedSystem;
-(void)updateRestartButton:(id)arg1 ;
-(void)updateTDMButton:(id)arg1 ;
-(void)startEventsWithNetBoot:(char)arg1 andOptionalNetBootController:(id)arg2 ;
-(void)setNetBootListLimit:(unsigned long long)arg1 ;
-(void)setRestartButton:(id)arg1 ;
-(long long)saveSelectedSystem;
-(id)systemStartupDescriptionString;
-(char)selectedDiskIsLocked;
-(id)startupDiskController;
-(id)restartButton;
-(void)_stopSearchActivity;
-(void)_systemAppeared:(id)arg1 ;
-(void)_systemDisappeared:(id)arg1 ;
-(void)_systemBootSet:(id)arg1 ;
-(void)_netbootListItemChanged:(id)arg1 ;
-(void)_searchActivity:(id)arg1 ;
-(void)_searchingCompleted:(id)arg1 ;
-(void)_setupFoldersMatrix;
-(void)showNetBootTable;
-(void)hideNetBootTable;
-(void)setUserChangedSystem:(char)arg1 ;
-(void)_removeSystem:(id)arg1 ;
-(void)_addSystemOnMainThread:(id)arg1 ;
-(void)selectCellByDisk:(id)arg1 ;
-(id)_getCellForDisk:(id)arg1 ;
-(void)_updateSystem:(id)arg1 withCell:(id)arg2 ;
-(id)_getNewCell:(id)arg1 ;
-(void)_updateNetBootTable;
-(void)_infoForSDDisk:(id)arg1 withCell:(id)arg2 ;
-(char)matrixDidChange;
-(void)setMatrixDidChange:(char)arg1 ;
-(char)userChangedSystem;
-(void)_clickAndScrollCell:(id)arg1 ;
-(void)processSysFolderClick:(id)arg1 ;
-(void)diskDoubleClicked:(id)arg1 ;
-(void)unlockTargetedDisk:(id)arg1 ;
-(void)validateAndScanAgain;
-(void)saveSelectedSystemWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)netBootListLimit;
-(NSMutableArray *)netBootServerList;
-(void)setNetBootServerList:(NSMutableArray *)arg1 ;
-(id)tdmButton;
-(void)setTdmButton:(id)arg1 ;
-(id)sortNetBootList;
-(void)_removeNetBootsFromMatrix;
-(void)setCellByIndex:(long long)arg1 ;
-(long long)knownSystemCount;
-(id)mainView;
-(void)setMatrix:(SDMatrix *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(SDMatrix *)matrix;
-(char)tableView:(id)arg1 shouldSelectTableColumn:(id)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)awakeFromNib;
@end
