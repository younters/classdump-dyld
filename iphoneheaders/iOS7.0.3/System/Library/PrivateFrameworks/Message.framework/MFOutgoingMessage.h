/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/MFMailMessage.h>

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {

	MFMessageBody* _messageBody;
	MFMutableMessageHeaders* _messageHeaders;

}
-(void)dealloc;
-(unsigned)messageSize;
-(id)mutableHeaders;
-(void)setMessageBody:(id)arg1 ;
-(id)messageStore;
-(id)messageBody;
-(id)messageBodyIfAvailable;
-(id)messageData;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)setMutableHeaders:(id)arg1 ;
-(id)headersIfAvailable;
-(id)headers;
@end
