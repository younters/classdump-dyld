/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, NSTimer;

@interface SBAppSwitcherModel : NSObject {

	NSMutableArray* _recentDisplayIdentifiers;
	NSTimer* _saveTimer;

}
+(id)sharedInstance;
-(void)addToFront:(id)arg1 ;
-(id)_recentsFromPrefs;
-(void)_invalidateSaveTimer;
-(void)_saveRecents;
-(void)_saveRecentsDelayed;
-(void)appsRemoved:(id)arg1 added:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)snapshot;
-(id)identifiers;
-(void)remove:(id)arg1 ;
@end
