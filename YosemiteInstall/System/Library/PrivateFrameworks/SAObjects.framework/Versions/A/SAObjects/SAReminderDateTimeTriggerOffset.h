/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * offsetTimeUnit; 
@property (nonatomic,copy) NSNumber * offsetValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dateTimeTriggerOffset;
+(id)dateTimeTriggerOffsetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)offsetTimeUnit;
-(void)setOffsetTimeUnit:(NSString *)arg1 ;
-(NSNumber *)offsetValue;
-(void)setOffsetValue:(NSNumber *)arg1 ;
-(id)groupIdentifier;
@end

