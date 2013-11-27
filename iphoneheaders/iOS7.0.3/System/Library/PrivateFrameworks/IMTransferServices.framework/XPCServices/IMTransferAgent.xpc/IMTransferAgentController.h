/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/XPCServices/IMTransferAgent.xpc/IMTransferAgent
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MMCSController;

@interface IMTransferAgentController : NSObject {

	MMCSController* _controller;

}
+(id)sharedInstance;
-(void)sendFilePath:(id)arg1 transferID:(id)arg2 progressBlock:(/*^block*/ id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)receiveFileTransfer:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 fileSize:(unsigned long long)arg6 progressBlock:(/*^block*/ id)arg7 completionBlock:(/*^block*/ id)arg8 ;
-(void)_sendFilePath:(id)arg1 transferID:(id)arg2 allowReauthorize:(BOOL)arg3 progressBlock:(/*^block*/ id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)_receiveFileTransfer:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 allowReauthorize:(BOOL)arg6 fileSize:(unsigned long long)arg7 progressBlock:(/*^block*/ id)arg8 completionBlock:(/*^block*/ id)arg9 ;
-(void)dealloc;
@end
