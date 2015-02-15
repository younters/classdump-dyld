/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <sharingd/IDSServiceDelegate.h>

@class IDSService, SDActivityAdvertiser, SDActivityScanner, NSMutableDictionary, NSMutableArray, IDSDevice, NSString;

@interface SDActivityPayloadManager : NSObject <IDSServiceDelegate> {

	IDSService* _activityService;
	IDSService* _encryptionService;
	char _restrictionsDisabled;
	SDActivityAdvertiser* _advertiser;
	SDActivityScanner* _scanner;
	NSMutableDictionary* _persistedKeyRequests;
	NSMutableArray* _cachedActivityPayloads;
	NSMutableDictionary* _messageIdentifierToKeyRequestRecords;
	NSMutableDictionary* _messageIdentifierToReplyRecords;
	NSMutableDictionary* _messageIdentifierToRequestRecords;

}

@property (readonly) IDSDevice * defaultPairedDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPayloadManager;
-(void)debugInfoRequested:(id)arg1 ;
-(void)sendActivityPayloadWithAdvertisementData:(id)arg1 forAdvertisementPayload:(id)arg2 isFinalPayload:(char)arg3 ;
-(void)loadPersistedKeyRequests;
-(void)encryptionKeyRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)encryptionKeyReplyRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)payloadRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)payloadReplyRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)newAdvertisementWithPayloadRequest:(id)arg1 ;
-(char)sendEncryptionKeyRequestRecord:(id)arg1 ;
-(void)resetStateTwoRequested:(id)arg1 ;
-(IDSDevice *)defaultPairedDevice;
-(void)savePersistedKeyRequests;
-(void)requestTimedOut:(id)arg1 ;
-(id)protobufDataFromRequest:(id)arg1 ;
-(id)dataFromUUID:(id)arg1 ;
-(id)requestFromProtobufData:(id)arg1 ;
-(void)setDecryptionKeyDataRepresentation:(id)arg1 forDeviceIdentifier:(id)arg2 ;
-(void)sendEncryptionKeyReplyRequestToDevice:(id)arg1 canDoCloudReply:(char)arg2 encryptionKey:(id)arg3 requestIdentifier:(id)arg4 ;
-(void)sendActivityPayloadReplyRequestToDevice:(id)arg1 withActivityIdentifier:(id)arg2 advertisementPayload:(id)arg3 activityPayload:(id)arg4 requestIdentifier:(id)arg5 error:(id)arg6 ;
-(void)confirmFunctioningEncryptionKeyFromDeviceIdentifier:(id)arg1 ;
-(void)sendEncryptionKeyRequestToDeviceIdentifier:(id)arg1 previousKeyIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendActivityPayloadRequestToDeviceIdentifier:(id)arg1 withAdvertisementPayload:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
-(void)addObservers;
-(void)removeObservers;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(id)init;
-(void)dealloc;
@end
