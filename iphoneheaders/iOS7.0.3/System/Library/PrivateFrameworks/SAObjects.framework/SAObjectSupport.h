/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAObjectSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * aceVersion; 
@property (nonatomic,copy) NSString * classId; 
@property (nonatomic,copy) NSString * groupId; 
@property (nonatomic,copy) NSArray * supportedProperties; 
+(id)objectSupport;
+(id)objectSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)supportedProperties;
-(id)groupIdentifier;
-(id)groupId;
-(void)setGroupId:(id)arg1 ;
-(id)encodedClassName;
-(id)aceVersion;
-(void)setAceVersion:(id)arg1 ;
-(id)classId;
-(void)setClassId:(id)arg1 ;
-(void)setSupportedProperties:(id)arg1 ;
@end
