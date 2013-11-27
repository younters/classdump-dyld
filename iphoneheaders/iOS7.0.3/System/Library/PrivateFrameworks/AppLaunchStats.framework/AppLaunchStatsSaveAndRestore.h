/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSUserDefaults;

@interface AppLaunchStatsSaveAndRestore : NSObject {

	bool allowSave;
	bool hasSavedData;
	NSObject<OS_dispatch_queue>* aplsSaveAndRestoreQueue;
	NSMutableArray* saveRestoreObjects;
	NSUserDefaults* saveRestoreDefaults;

}

@property (assign,nonatomic) bool allowSave; 
@property (nonatomic,readonly) bool hasSavedData; 
-(void)addDataSource:(id)arg1 ;
-(id)init;
-(id)getList:(id)arg1 ;
-(void)createBasicStoreStructure;
-(id)getDict:(id)arg1 ;
-(id)getString:(id)arg1 ;
-(void)quickSave:(id)arg1 forKey:(id)arg2 ;
-(void)restoreAll;
-(void)saveAll;
-(void)saveState:(id)arg1 withKey:(id)arg2 ;
-(bool)allowSave;
-(void)setAllowSave:(bool)arg1 ;
-(bool)hasSavedData;
-(void).cxx_destruct;
@end
