/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAMPMediaItem;

@interface SAMPGeniusSummon : SADomainCommand

@property (nonatomic,retain) SAMPMediaItem * mediaItem; 
+(id)geniusSummon;
+(id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(SAMPMediaItem *)mediaItem;
-(void)setMediaItem:(SAMPMediaItem *)arg1 ;
-(id)groupIdentifier;
@end
