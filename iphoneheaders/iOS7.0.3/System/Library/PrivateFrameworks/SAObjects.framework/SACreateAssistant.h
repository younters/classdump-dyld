/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSData, NSString;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * connectionType; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSData * validationData; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)createAssistant;
+(id)createAssistantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(id)connectionType;
-(void)setConnectionType:(id)arg1 ;
-(id)validationData;
-(void)setValidationData:(id)arg1 ;
-(id)encodedClassName;
-(id)activationToken;
-(void)setActivationToken:(id)arg1 ;
@end
