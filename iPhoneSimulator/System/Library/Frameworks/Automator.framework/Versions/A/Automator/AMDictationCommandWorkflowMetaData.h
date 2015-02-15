/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMWorkflowMetaData.h>

@class NSString, NSDate;

@interface AMDictationCommandWorkflowMetaData : AMWorkflowMetaData {

	char _dictationCommandEnabled;
	NSString* _dictationCommandTitle;
	NSString* _dictationCommandIdentifier;
	NSString* _dictationCommandWorkflowURLString;
	NSDate* _dictationCommandTimeStamp;

}

@property (assign) char dictationCommandEnabled;                            //@synthesize dictationCommandEnabled=_dictationCommandEnabled - In the implementation block
@property (copy) NSString * dictationCommandTitle;                          //@synthesize dictationCommandTitle=_dictationCommandTitle - In the implementation block
@property (copy) NSString * dictationCommandIdentifier;                     //@synthesize dictationCommandIdentifier=_dictationCommandIdentifier - In the implementation block
@property (copy) NSString * dictationCommandWorkflowURLString;              //@synthesize dictationCommandWorkflowURLString=_dictationCommandWorkflowURLString - In the implementation block
@property (retain) NSDate * dictationCommandTimeStamp;                      //@synthesize dictationCommandTimeStamp=_dictationCommandTimeStamp - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)metaData;
-(NSString *)dictationCommandTitle;
-(NSString *)dictationCommandIdentifier;
-(NSDate *)dictationCommandTimeStamp;
-(char)dictationCommandEnabled;
-(void)setDictationCommandTitle:(NSString *)arg1 ;
-(void)setDictationCommandIdentifier:(NSString *)arg1 ;
-(void)setDictationCommandEnabled:(char)arg1 ;
-(void)setDictationCommandWorkflowURLString:(NSString *)arg1 ;
-(void)setDictationCommandTimeStamp:(NSDate *)arg1 ;
-(id)initWithPersonality:(id)arg1 ;
-(void)updateDictationCommandProperties:(id)arg1 userData:(id)arg2 ;
-(void)setFromDictionary:(id)arg1 ;
-(NSString *)dictationCommandWorkflowURLString;
-(void)syncMetaDataForDocument:(id)arg1 ;
-(void)dealloc;
@end
