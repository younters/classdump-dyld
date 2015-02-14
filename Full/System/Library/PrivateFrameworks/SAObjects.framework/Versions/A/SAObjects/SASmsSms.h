/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSURL, NSDate, NSString, NSArray, SAPersonAttribute, NSNumber;

@interface SASmsSms : SADomainObject

@property (nonatomic,copy) NSURL * attachment; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSArray * msgRecipients; 
@property (nonatomic,retain) SAPersonAttribute * msgSender; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSString * sender; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timezoneId; 
+(id)sms;
+(id)smsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)sender;
-(void)setDateSent:(NSDate *)arg1 ;
-(NSDate *)dateSent;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSNumber *)outgoing;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(NSArray *)msgRecipients;
-(void)setMsgRecipients:(NSArray *)arg1 ;
-(SAPersonAttribute *)msgSender;
-(void)setMsgSender:(SAPersonAttribute *)arg1 ;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSURL *)attachment;
-(void)setAttachment:(NSURL *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setSender:(NSString *)arg1 ;
-(id)groupIdentifier;
@end
