/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class APSEnvironment, NSMutableDictionary, NSString;

@interface APSTopicGroup : NSObject {

	APSEnvironment* _environment;
	NSMutableDictionary* _hashesToEnabledTopics;
	NSMutableDictionary* _hashesToIgnoredTopics;
	NSMutableDictionary* _hashesToOpportunisticTopics;
	NSMutableDictionary* _hashesToPausedTopics;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * hashesToEnabledTopics; 
@property (nonatomic,retain,readonly) NSMutableDictionary * hashesToIgnoredTopics; 
@property (nonatomic,retain,readonly) NSMutableDictionary * hashesToOpportunisticTopics; 
@property (nonatomic,retain,readonly) NSMutableDictionary * hashesToPausedTopics; 
@property (nonatomic,retain,readonly) NSString * logString; 
+(void)populateHashDictionary:(id)arg1 withSet:(id)arg2 ;
-(NSMutableDictionary *)hashesToEnabledTopics;
-(NSMutableDictionary *)hashesToIgnoredTopics;
-(NSMutableDictionary *)hashesToOpportunisticTopics;
-(NSMutableDictionary *)hashesToPausedTopics;
-(NSString *)logString;
-(id)initWithEnvironment:(id)arg1 ;
-(void)dealloc;
@end
