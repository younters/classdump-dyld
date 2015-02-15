/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperture31Plugin.ilmbplugin/Contents/MacOS/iLMBAperture31Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBAperture31Plugin/AP31_RKModel.h>

@class NSString;

@interface AP31_RKStackState : AP31_RKModel {

	NSString* m_albumUuid;
	NSString* m_stackUuid;
	NSString* m_albumPick;

}
+(id)stackStateForAlbumUuid:(id)arg1 stackUuid:(id)arg2 forDatabase:(id)arg3 ;
+(id)addStackStateForAlbumUuid:(id)arg1 stackUuid:(id)arg2 forDatabase:(id)arg3 ;
+(id)stackStatesForStackUuids:(id)arg1 inAlbum:(id)arg2 ;
+(id)addStackStateForAlbum:(id)arg1 stackUuid:(id)arg2 ;
+(id)stackStatesForStackUuid:(id)arg1 fromDatabase:(id)arg2 ;
+(id)stackStateInfoDictionariesForAlbum:(id)arg1 ;
+(id)stackStateForAlbum:(id)arg1 stackUuid:(id)arg2 ;
+(id)stackStatesForAlbum:(id)arg1 ;
-(id)albumPick;
-(void)_updateAlbum;
-(id)initAsTemporaryInDatabase:(id)arg1 ;
-(void)cacheIsExpanded:(char)arg1 ;
-(void)cacheStackUuid:(id)arg1 ;
-(void)cacheAlbumUuid:(id)arg1 ;
-(void)cacheAlbumPick:(id)arg1 ;
-(id)stackUuid;
-(id)albumUuid;
-(void)dealloc;
-(char)isExpanded;
@end
