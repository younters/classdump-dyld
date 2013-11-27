/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) int errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)geniusSummonFailed;
+(id)geniusSummonFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)geniusSummonFailedWithErrorCode:(int)arg1 ;
+(id)geniusSummonFailedWithReason:(id)arg1 ;
-(id)groupIdentifier;
-(void)setReason:(id)arg1 ;
-(id)reason;
-(id)initWithReason:(id)arg1 ;
-(id)encodedClassName;
-(id)initWithErrorCode:(int)arg1 ;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
@end
