/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest {

	CKDServerConfiguration* _configuration;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(char)allowsAnonymousAccount;
-(char)requiresSignature;
-(Class)expectedResponseClass;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(long long)partitionType;
-(char)requiresConfiguration;
-(char)requiresDeviceID;
-(char)hasRequestBody;
-(CKDServerConfiguration *)configuration;
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(long long)serverType;
-(id)url;
-(id)additionalHeaderValues;
-(id)httpMethod;
@end
