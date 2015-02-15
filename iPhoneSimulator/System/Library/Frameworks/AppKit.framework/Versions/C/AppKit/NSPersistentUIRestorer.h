/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPersistentUISecureURLHerder, NSPersistentUICrashHandler, NSMutableArray, NSMutableDictionary;

@interface NSPersistentUIRestorer : NSObject {

	NSPersistentUISecureURLHerder* urlHerder;
	NSPersistentUICrashHandler* crashHandler;
	char hasFinishedRestoringWindows;
	char performingWindowOrdering;
	char suppressedCGWindowOrderingSuccessfully;
	int suppressedCGWindowOrderingStatus;
	NSMutableArray* windowRestorations;
	NSMutableDictionary* windowRestorationsByWindowID;

}

@property (retain) NSPersistentUICrashHandler * crashHandler; 
@property (setter=setURLHerder:,nonatomic,retain) NSPersistentUISecureURLHerder * urlHerder; 
@property (readonly) char hasFinishedRestoringWindows; 
-(void)dealloc;
-(char)promptToIgnorePersistentState;
-(void)ignoreAnyPreexistingPersistentState;
-(char)hasFinishedRestoringWindows;
-(unsigned)acquireWindowIDForWindow:(id)arg1 ;
-(void)delayCGWindowOrderingIfNecessary;
-(char)performingWindowOrdering;
-(void)setCrashHandler:(NSPersistentUICrashHandler *)arg1 ;
-(void)setURLHerder:(id)arg1 ;
-(void)restoreStateFromRecords:(id)arg1 usingDelegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resumeNormalWindowOrderingAndDrawing;
-(char)shouldUseOneWindowHeuristic;
-(id)_debugUnrestoredWindows;
-(NSPersistentUICrashHandler *)crashHandler;
-(NSPersistentUISecureURLHerder *)urlHerder;
-(id)restorationForWindowID:(id)arg1 ;
-(void)finishedRestoringWindowsWithZOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)populateWindowRestorationsByWindowID;
-(void)populateEncodedReferenceToResponders;
-(void)sortRestorationsByZOrder:(id)arg1 ;
-(void)acquireTalagentWindowDictionaries;
-(void)invokeRestoration:(id)arg1 ;
-(id)mungeFullScreenWindowsReturningTheirWindowNumbers;
-(void)orderRestoredWindows;
-(void)pickKeyAndMainWindows;
-(void)tearDownStateRestorationApparatusAndResumeWindowOrdering;
-(void)jettisonTalagentWindowsWithCompletionHandler:(/*^block*/id)arg1 ;
@end
