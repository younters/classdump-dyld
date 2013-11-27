/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/ASTask.h>

@class ASPolicy, NSString, NSDictionary;

@interface ASProvisionTask : ASTask {

	int _type;
	ASPolicy* _policy;
	NSString* _key;
	NSDictionary* _deviceInfo;

}

@property (retain) NSDictionary * deviceInfo;              //@synthesize deviceInfo=_deviceInfo - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(int)type;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initWithOriginalKeyForPolicyRequest:(id)arg1 ;
-(void)setDeviceInfo:(id)arg1 ;
-(id)initWithPolicyAcknowledgement:(id)arg1 withKey:(id)arg2 ;
-(id)initWithRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2 ;
-(id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3 ;
-(id)_provisioningType;
-(id)_policyID;
-(BOOL)requiresEASVersionUpdate;
-(id)deviceInfo;
@end
