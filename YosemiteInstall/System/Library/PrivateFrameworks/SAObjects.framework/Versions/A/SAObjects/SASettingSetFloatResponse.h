/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingSetNumberResponse.h>

@class SASettingEntity;

@interface SASettingSetFloatResponse : SASettingSetNumberResponse

@property (nonatomic,retain) SASettingEntity * setting; 
+(id)setFloatResponse;
+(id)setFloatResponseWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)setFloatResponseWithSetting:(id)arg1 ;
-(id)encodedClassName;
-(id)initWithSetting:(id)arg1 ;
-(void)setSetting:(SASettingEntity *)arg1 ;
-(SASettingEntity *)setting;
-(id)groupIdentifier;
@end

