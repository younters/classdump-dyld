/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vCard/CNVCardLineSerialization.h>

@protocol CNVCardSerializationStorage;
@class NSString;

@interface ABvCardLineSerializationStrategyImpl : NSObject <CNVCardLineSerialization> {

	id<CNVCardSerializationStorage> _storage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializerWithStorage:(id)arg1 ;
-(id)insertionMarker;
-(unsigned long long)estimatedDataLength;
-(void)insertLine:(id)arg1 atMarker:(id)arg2 ;
-(char)canSerializeString:(id)arg1 ;
-(char)canSerializeArray:(id)arg1 ;
-(char)canSerializeData:(id)arg1 ;
-(void)serializeLine:(id)arg1 ;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2 ;
-(void)serializeOpaqueValue:(id)arg1 ;
-(void)serializeVersionPlaceholder;
-(id)initWithStorage:(id)arg1 ;
-(void)willSerializeValue;
-(void)serializeGroupingName:(id)arg1 ;
-(void)serializeName:(id)arg1 ;
-(void)serializeParameters:(id)arg1 ;
-(void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2 ;
-(void)serializeData:(id)arg1 ;
-(void)serializeString:(id)arg1 ;
@end

