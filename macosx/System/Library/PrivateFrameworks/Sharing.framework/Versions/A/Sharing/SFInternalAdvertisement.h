/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSDictionary;

@interface SFInternalAdvertisement : NSObject {

	NSData* _advertisementPayload;
	NSDictionary* _options;

}

@property (copy) NSData * advertisementPayload;              //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (copy) NSDictionary * options;                     //@synthesize options=_options - In the implementation block
-(id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2 ;
-(NSData *)advertisementPayload;
-(void)setAdvertisementPayload:(NSData *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
@end
