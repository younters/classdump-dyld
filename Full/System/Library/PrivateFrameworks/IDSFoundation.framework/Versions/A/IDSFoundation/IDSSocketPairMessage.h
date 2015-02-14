/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObject;
@class NSData;

@interface IDSSocketPairMessage : NSObject {

	NSData* _underlyingData;
	unsigned char _command;
	id<NSObject> _context;

}

@property (nonatomic,readonly) unsigned char command;                                //@synthesize command=_command - In the implementation block
@property (nonatomic,retain,readonly) NSData * underlyingData;                       //@synthesize underlyingData=_underlyingData - In the implementation block
@property (nonatomic,readonly) unsigned long long underlyingDataLength; 
@property (nonatomic,retain) id<NSObject> context;                                   //@synthesize context=_context - In the implementation block
+(unsigned)headerDataSize;
+(id)messageWithHeaderData:(id)arg1 data:(id)arg2 ;
+(unsigned)dataLengthFromHeaderData:(id)arg1 ;
+(id)messageWithData:(id)arg1 ;
-(void)dealloc;
-(id<NSObject>)context;
-(unsigned char)command;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(NSData *)underlyingData;
-(id)_nonHeaderData;
-(unsigned long long)underlyingDataLength;
-(id)_existingUnderlyingData;
-(void)setContext:(id<NSObject>)arg1 ;
@end
