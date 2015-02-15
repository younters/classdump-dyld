/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface APSProtocolParser : NSObject
-(id)copyAppTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 ;
-(char)parseMessage:(id)arg1 parameters:(id*)arg2 isInvalid:(char*)arg3 lengthParsed:(unsigned long long*)arg4 ;
-(id)copyFilterMessageWithEnabledHashes:(id)arg1 ignoredHashes:(id)arg2 opportunisticHashes:(id)arg3 pausedHashes:(id)arg4 token:(id)arg5 ;
-(id)copyMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2 ;
-(id)copyFlushMessageWithWantPaddingLength:(unsigned long long)arg1 paddingLength:(unsigned long long)arg2 ;
-(id)copyKeepAliveMessageWithMetadata:(id)arg1 ;
-(id)copyMessageWithTopicHash:(id)arg1 identifier:(unsigned long long)arg2 payload:(id)arg3 token:(id)arg4 ;
-(id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned)arg3 ;
-(id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2 ;
-(id)copySetActiveState:(char)arg1 forInterval:(unsigned)arg2 ;
-(char)_parseConnectedMessage:(id)arg1 parameters:(id*)arg2 isInvalid:(char*)arg3 lengthParsed:(unsigned long long*)arg4 ;
-(char)_parseMessageMessage:(id)arg1 parameters:(id*)arg2 isInvalid:(char*)arg3 lengthParsed:(unsigned long long*)arg4 ;
-(char)_parseKeepAliveResponseMessage:(id)arg1 parameters:(id*)arg2 isInvalid:(char*)arg3 lengthParsed:(unsigned long long*)arg4 ;
-(char)_parseSerialMessage:(id)arg1 parameters:(id*)arg2 isInvalid:(char*)arg3 lengthParsed:(unsigned long long*)arg4 ;
-(void)_setSerialItemInParameters:(id)arg1 commandID:(unsigned long long)arg2 itemID:(unsigned long long)arg3 itemData:(id)arg4 ;
-(id)copyFlushResponseMessageWithPaddingLength:(unsigned long long)arg1 ;
-(id)copySetActiveIntervalMessageWithInterval:(unsigned)arg1 ;
@end
