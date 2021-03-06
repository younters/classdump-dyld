/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingEntity.h>

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) char value; 
+(id)booleanEntity;
+(id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)booleanEntityWithValue:(char)arg1 ;
-(NSNumber *)previousValue;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(void)setPreviousValue:(NSNumber *)arg1 ;
-(void)setValue:(char)arg1 ;
-(char)value;
-(id)initWithValue:(char)arg1 ;
-(id)groupIdentifier;
@end

