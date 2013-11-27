/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKExpiringCacheObject.h>

@class NSString, NSDate, NSData, NSOrderedSet;

@interface GKTurnBasedSessionCacheObject : GKExpiringCacheObject

@property (nonatomic,@dynamic,retain) NSString * sessionID; 
@property (nonatomic,@dynamic,retain) NSString * status; 
@property (nonatomic,@dynamic,retain) NSDate * creationDate; 
@property (nonatomic,@dynamic,retain) NSString * currentPlayerID; 
@property (nonatomic,@dynamic,retain) NSDate * lastTurnDate; 
@property (nonatomic,@dynamic,retain) NSString * bundleID; 
@property (nonatomic,@dynamic,retain) NSString * bundleVersion; 
@property (nonatomic,@dynamic,retain) NSString * message; 
@property (nonatomic,@dynamic,retain) NSData * localizableMessage; 
@property (nonatomic,@dynamic,retain) NSString * unusedID; 
@property (nonatomic,@dynamic,retain) NSString * reason; 
@property (assign,nonatomic,@dynamic) int minPlayers; 
@property (assign,nonatomic,@dynamic) int maxPlayers; 
@property (nonatomic,@dynamic,retain) NSDate * deletionDate; 
@property (assign,nonatomic,@dynamic) int currentParticipant; 
@property (assign,nonatomic,@dynamic) int turnNumber; 
@property (nonatomic,@dynamic,retain) NSString * lastTurnPlayerID; 
@property (nonatomic,@dynamic,retain) NSDate * dataExpirationDate; 
@property (nonatomic,@dynamic,retain) NSString * matchDataVersion; 
@property (nonatomic,@dynamic,retain) NSOrderedSet * participants; 
@property (nonatomic,@dynamic,retain) NSOrderedSet * exchanges; 
+(id)uniqueAttributeName;
+(id)relationshipKeyPathsForPrefetch;
+(id)uniqueObjectIDLookupWithContext:(id)arg1 ;
+(id)sessionsWithSessionIDs:(id)arg1 inContext:(id)arg2 ;
+(id)sessionWithID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
-(void)expire;
-(void)deleteGameData;
-(void)saveGameData:(id)arg1 expirationDate:(id)arg2 ;
-(id)gameData;
-(void)expireGameData;
-(id)participantWithPlayerID:(id)arg1 ;
-(id)participantAtIndex:(int)arg1 ;
-(id)internalRepresentation;
-(BOOL)isActive;
-(void)prepareForDeletion;
@end
