/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAMPCollection.h>

@class NSString, NSArray, NSNumber;

@interface SAMPPodcastCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSArray * preferredPlayOrder; 
@property (nonatomic,copy) NSString * sortArtist; 
@property (nonatomic,copy) NSNumber * subscribed; 
+(id)podcastCollection;
+(id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)preferredPlayOrder;
-(void)setPreferredPlayOrder:(NSArray *)arg1 ;
-(NSNumber *)subscribed;
-(void)setSubscribed:(NSNumber *)arg1 ;
-(id)groupIdentifier;
@end
