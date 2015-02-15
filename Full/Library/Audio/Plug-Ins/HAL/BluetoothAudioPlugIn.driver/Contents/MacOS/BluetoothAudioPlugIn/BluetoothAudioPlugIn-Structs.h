/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Audio/Plug-Ins/HAL/BluetoothAudioPlugIn.driver/Contents/MacOS/BluetoothAudioPlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct LEACodecProperty {
	unsigned char codecID;
	unsigned char maxPacketSize;
	unsigned char connectionInterval;
	unsigned char bitsPerSample;
	unsigned char bytesPerFrame;
	unsigned char bytesPerPacket;
	BOOL isFrameBased;
	BOOL isFragmented;
	long long channelConfig;
	float sampleRate;
	float latency;
	unsigned bitrate;
} LEACodecProperty;

typedef struct IONotificationPort* IONotificationPortRef;
