/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAEmail : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSNumber * favoriteFacetime; 
@property (nonatomic,copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emailWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)email;
-(id)encodedClassName;
-(NSNumber *)favoriteFacetime;
-(void)setFavoriteFacetime:(NSNumber *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(id)groupIdentifier;
@end
