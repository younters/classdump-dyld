/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Mail/Mail-Structs.h>
@class NSURL, NSString;

@interface MFJunkMailFilter : NSObject {

	LSMMapRef _map;
	char _isDirty;
	char _useCleanMap;
	char _isInTraining;
	NSURL* _oldMapFileURL;
	NSURL* _mapFileURL;
	NSString* _mapFilePath;

}

@property (nonatomic,retain) NSURL * mapFileURL;                                                    //@synthesize mapFileURL=_mapFileURL - In the implementation block
@property (nonatomic,copy) NSString * mapFilePath;                                                  //@synthesize mapFilePath=_mapFilePath - In the implementation block
@property (nonatomic,retain) NSURL * oldMapFileURL;                                                 //@synthesize oldMapFileURL=_oldMapFileURL - In the implementation block
@property (assign,nonatomic) char isDirty; 
@property (assign,nonatomic) char isInTraining;                                                     //@synthesize isInTraining=_isInTraining - In the implementation block
@property (assign,nonatomic) char useCleanMap;                                                      //@synthesize useCleanMap=_useCleanMap - In the implementation block
@property (nonatomic,readonly) char isEnabled; 
@property (nonatomic,readonly) char gatherUsageCounts; 
@property (nonatomic,readonly) unsigned long long evaluatedMessageCount; 
@property (nonatomic,readonly) unsigned long long evaluatedAsJunkMessageCount; 
@property (nonatomic,readonly) unsigned long long manuallyMarkedAsJunkMessageCount; 
@property (nonatomic,readonly) unsigned long long manuallyMarkedAsNotJunkMessageCount; 
@property (nonatomic,readonly) long long junkMailTrainingBalance; 
@property (nonatomic,readonly) long long junkMailTrainingDebt; 
@property (nonatomic,readonly) long long junkMailTrainingCredit; 
+(char)shouldUpdateTrainingDebt;
+(void)resetJunkMailUsageCounters;
+(void)resetJunkMailTrainingBalance;
+(id)_junkFilterUsageCounterKeys;
+(void)incrementJunkMailTrainingDebtBy:(long long)arg1 ;
+(void)incrementJunkMailTrainingCreditBy:(long long)arg1 ;
+(id)sharedInstance;
-(LSMMapRef)map;
-(char)isInTraining;
-(void)setIsInTraining:(char)arg1 ;
-(void)setIsDirty:(char)arg1 ;
-(void)setMap:(LSMMapRef)arg1 ;
-(void)setMapFileURL:(NSURL *)arg1 ;
-(void)setOldMapFileURL:(NSURL *)arg1 ;
-(NSURL *)oldMapFileURL;
-(NSURL *)mapFileURL;
-(NSString *)mapFilePath;
-(char)useCleanMap;
-(long long)junkMailTrainingBalance;
-(long long)junkMailTrainingDebt;
-(long long)junkMailTrainingCredit;
-(char)gatherUsageCounts;
-(long long)junkMailLevelForMessage:(id)arg1 junkRecorder:(id)arg2 ;
-(id)_usageCounter;
-(void)_saveTrainingWithDelay;
-(void)saveTraining;
-(unsigned long long)evaluatedMessageCount;
-(unsigned long long)evaluatedAsJunkMessageCount;
-(unsigned long long)manuallyMarkedAsJunkMessageCount;
-(unsigned long long)manuallyMarkedAsNotJunkMessageCount;
-(long long)junkMailLevelForMessage:(id)arg1 ;
-(id)trainOnMessages:(id)arg1 junkMailLevel:(long long)arg2 ;
-(void)userDidReplyToMessage:(id)arg1 ;
-(void)setUseCleanMap:(char)arg1 ;
-(void)setMapFilePath:(NSString *)arg1 ;
-(void)dealloc;
-(char)isDirty;
-(char)isEnabled;
-(id)state;
-(void)reset;
@end
