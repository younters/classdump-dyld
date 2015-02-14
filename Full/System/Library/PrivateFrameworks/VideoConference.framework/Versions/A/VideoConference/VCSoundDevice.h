/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface VCSoundDevice : NSObject {

	NSString* _displayName;
	NSString* _deviceName;
	NSString* _sourceName;
	unsigned _deviceID;
	unsigned _sourceID;
	unsigned _transportType;
	char _isBluetooth;

}
-(id)sourceName;
-(unsigned)transportType;
-(unsigned)sourceID;
-(char)isBluetooth;
-(id)init;
-(void)dealloc;
-(id)displayName;
-(unsigned)deviceID;
-(id)deviceName;
@end
