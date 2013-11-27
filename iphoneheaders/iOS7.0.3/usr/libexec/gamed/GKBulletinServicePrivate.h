/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKBulletinService.h>
#import <GameCenterFoundation/GKBulletinServicePrivate.h>

@protocol GKBulletinServicePrivate <GKBulletinService>
@required
-(oneway void)markAllBadgesAsViewedForType:(unsigned)arg1;
-(oneway void)fetchBadgeCountsForBundleID:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)clearBulletinsForReceivedChallenges:(id)arg1;
-(oneway void)clearBulletinsForTurnBasedTurn:(id)arg1 exchangeID:(id)arg2;
-(oneway void)clearBulletinsOfType:(int)arg1 forPlayerIDs:(id)arg2;
@end


@interface GKBulletinServicePrivate : GKBulletinService <GKBulletinServicePrivate>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
-(oneway void)markAllBadgesAsViewedForType:(unsigned)arg1 ;
-(oneway void)fetchBadgeCountsForBundleID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)clearBulletinsForReceivedChallenges:(id)arg1 ;
-(oneway void)clearBulletinsForTurnBasedTurn:(id)arg1 exchangeID:(id)arg2 ;
-(oneway void)clearBulletinsOfType:(int)arg1 forPlayerIDs:(id)arg2 ;
@end
