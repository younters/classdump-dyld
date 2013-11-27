/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSInputStream;

@interface PBMessageStreamReader : NSObject {

	NSInputStream* _stream;
	Class _classOfNextMessage;
	unsigned _position;

}

@property (assign) Class classOfNextMessage;              //@synthesize classOfNextMessage=_classOfNextMessage - In the implementation block
@property (readonly) unsigned position;                   //@synthesize position=_position - In the implementation block
-(void)dealloc;
-(unsigned)position;
-(id)initWithStream:(id)arg1 ;
-(Class)classOfNextMessage;
-(id)nextMessage;
-(void)setClassOfNextMessage:(Class)arg1 ;
@end
