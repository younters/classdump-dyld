/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol APSProvisionerDelegate;
#import <apsd/apsd-Structs.h>
@class NSMutableData, NSURLConnection;

@interface APSCertificateProvisioner : NSObject {

	id<APSProvisionerDelegate> _delegate;
	NSMutableData* _pushCertReponseData;
	NSURLConnection* _pushCertRequest;
	OpaqueSecCertificateRefRef _unsignedCert;

}
+(id)stringWithMachineSerialNumber;
+(id)dataWithPlatformSerialFromPreference:(char)arg1 ;
+(char)isBadSerialNumber:(id)arg1 ;
+(void)serialNumberWarning:(id)arg1 ;
-(void)generateClientIdentity;
-(int)createUserKeyPair:(OpaqueSecKeyRef*)arg1 privKey:(OpaqueSecKeyRef*)arg2 keychain:(OpaqueSecKeychainRefRef)arg3 algorithm:(unsigned)arg4 size:(int)arg5 userName:(id)arg6 accessRef:(OpaqueSecAccessRefRef)arg7 ;
-(id)csrForPublicKey:(OpaqueSecKeyRefRef)arg1 privateKey:(OpaqueSecKeyRefRef)arg2 error:(id*)arg3 ;
-(id)machineType;
-(id)errorForSecurityResultCode:(int)arg1 ;
-(id)createCSRForPublicKey:(OpaqueSecKeyRefRef)arg1 privateKey:(OpaqueSecKeyRefRef)arg2 tpHandle:(long long)arg3 clHandle:(long long)arg4 subjectInfo:(id)arg5 error:(id*)arg6 ;
-(void)renameCertKeys:(id)arg1 certificate:(OpaqueSecCertificateRefRef)arg2 ;
-(void)possiblyExplainError;
-(void)importCertificateData:(id)arg1 ;
-(void)importActivationRecord:(id)arg1 ;
-(void)clearActivationRecord;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(OpaqueSecKeychainRefRef)getKeychain;
-(id)commonNameForCertificate:(OpaqueSecCertificateRefRef)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end
