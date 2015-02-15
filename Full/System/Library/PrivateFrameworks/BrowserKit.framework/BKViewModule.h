/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProKit/NSProViewModule.h>

@class BKModuleConnector, NSMutableDictionary;

@interface BKViewModule : NSProViewModule {

	BKModuleConnector* _moduleConnector;
	double _insetLeft;
	double _insetRight;
	double _insetBottom;
	double _insetTop;
	void* _reservedViewModule1;
	void* _reservedViewModule2;
	void* _reservedViewModule3;

}

@property (retain) BKModuleConnector * moduleConnector;                         //@synthesize moduleConnector=_moduleConnector - In the implementation block
@property (assign) char updatesBlocked; 
@property (readonly) NSMutableDictionary * contentStateDictionary; 
-(void)setModuleConnector:(BKModuleConnector *)arg1 ;
-(BKModuleConnector *)moduleConnector;
-(NSMutableDictionary *)contentStateDictionary;
-(void)updateModuleConnectorStateCacheIfNeeded;
-(void)moduleConnectorStateUpdated;
-(void)willLoadConnections;
-(void)didLoadConnections;
-(void)willUnloadConnections;
-(void)didUnloadConnections;
-(void)insetLeft:(double)arg1 right:(double)arg2 bottom:(double)arg3 top:(double)arg4 ;
-(void)setUpdatesBlocked:(char)arg1 ;
-(char)updatesBlocked;
-(void)viewWasInstalled;
-(void)viewWillBeRemoved;
-(void)module:(id)arg1 willRemoveSubmodule:(id)arg2 ;
-(id)contentLayoutDictionary;
-(void)takeContentLayoutFromDictionary:(id)arg1 ;
-(void)postLayout:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)borderType;
-(void)setBorderType:(unsigned long long)arg1 ;
-(id)windowTitle;
@end
