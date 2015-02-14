/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SALocalSearchPhotoList : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * photos; 
@property (nonatomic,copy) NSString * providerId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)photoList;
+(id)photoListWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
-(id)encodedClassName;
-(NSString *)providerId;
-(void)setProviderId:(NSString *)arg1 ;
-(id)groupIdentifier;
@end
