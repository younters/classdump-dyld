/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:45:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Library/Extensions/IOSerialFamily.kext/Contents/PlugIns/AppleWWANSupport.kext/Contents/Resources/wwand
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <wwand/wwand-Structs.h>
#import <wwand/WWANBaseInterface.h>

@class NSString;

@interface SierraCDMA : WWANBaseInterface {

	char _shouldExitThread;
	unsigned char _status_p_rev;
	int _service_state;
	int _roaming_icon_st;
	int _activation_status;
	int _call_state;
	NSString* _phoneNumber;
	char _hdr_state;
	char _logging;
	unsigned short _HDRHybridPreference;
	unsigned short _CDMAServiceIndication;
	unsigned short _HDRServiceState;
	unsigned short _protocolRevisionNumber;
	int _ISP_id;
	NSString* _currentSMSMessage;
	unsigned short _currentSMSMessageID;

}
-(void)closePortAndStopThread;
-(void)beginATCommandInitialization;
-(void)receive:(id)arg1 ;
-(id)handleWhisperCommand:(char*)arg1 ;
-(int)service_state;
-(int)roamingIconState;
-(void)setLogging:(char)arg1 ;
-(CNS_Message*)buildCNSMessage:(CNS_Message*)arg1 objectID:(unsigned short)arg2 opType:(unsigned char)arg3 appParam:(unsigned)arg4 parameterLength:(unsigned short)arg5 parameter:(char*)arg6 ;
-(HIP_Packet*)buildHIPPacket:(HIP_Packet*)arg1 theMessagePtr:(CNS_Message*)arg2 lengthField:(unsigned short)arg3 messageID:(unsigned char)arg4 ;
-(char)sendHIPCommand:(HIP_Packet*)arg1 length:(int)arg2 ;
-(void)processResponseToGetRequest:(char*)arg1 ;
-(void)processSetRequestAck:(char*)arg1 ;
-(void)processNotificationData:(char*)arg1 ;
-(void)processNotificationDisableAck:(char*)arg1 ;
-(void)setServiceState:(int)arg1 ;
-(void)processResponseToNotificationEnable:(char*)arg1 ;
-(void)delayUpdate:(id)arg1 ;
-(char)CNSGetObjectVersion;
-(char)CNSGetNetworkID;
-(char)CNSGetSIPPassword;
-(char)CNSGetMIP;
-(char)CNSGetActiveNAM;
-(char)CNSGetSIPUserID;
-(char)CNSGetPREV;
-(char)CNSGetHDRHybridMode;
-(char)CNSGetHDRServiceState;
-(char)CNSGetServiceIndication;
-(char)CNSGetPhoneNumber;
-(char)CNSGetHardwareVersion;
-(char)CNSGetERI;
-(char)CNSReadERI;
-(char)CNSEnableRSSINotification;
-(char)CNSEnablePREVNotification;
-(char)CNSEnableHDRMaskNotifications;
-(char)CNSEnableServiceIndicationNotification;
-(char)CNSEnableRoamingStatusNotification;
-(char)CNSEnableCallStatusNotification;
-(char)CNSEnableNAMNotification;
-(char)CNSEnableGPSTracking;
-(char)CNSGetActivationStatus;
-(void)launchActivationApp;
-(char)CNSDisableHDRMaskNotifications;
-(char)CNSGetFirmwareVersion;
-(char)CNSGetPRLVersion;
-(char)CNSGetESN;
-(char)CNSResetModem;
-(void)updateConnectionState:(int)arg1 ;
-(void)setProductID:(unsigned short)arg1 ;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)terminate:(char)arg1 ;
@end
