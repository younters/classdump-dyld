/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class CAIdentityName, CAKeyPairAttributes, CACertInfo, CAAdditionalCertInfo, CAExtendedKeyUsageExtension, CAKeyUsageExtension, CASubjectAltNameExtension, CABasicConstraintsExtension, NSData, NSString, NSDictionary, SFCSR, NSURL, NSArray;

@interface SFCertificateAuthority_ivars : NSObject {

	char _creatingCA;
	CAIdentityName* _caIdentityName;
	CAKeyPairAttributes* _caKeyPairAttrs;
	CACertInfo* _caCertInfo;
	CAAdditionalCertInfo* _caAdditionalCertInfo;
	CAExtendedKeyUsageExtension* _caExtendedKUE;
	CAKeyUsageExtension* _caKeyUsageExtension;
	CASubjectAltNameExtension* _caSubjAltNameExtension;
	CABasicConstraintsExtension* _caBasicConstraintsExtension;
	OpaqueSecIdentityRefRef _chosenIssuer;
	cssm_x509_name* _issuerX509Name;
	NSData* _issuerHashPublicKey;
	OpaqueSecCertificateRefRef _caResultingCertificate;
	cssm_data _resultingCertData;
	cssm_data* _issuerX509NameField;
	NSString* _caName;
	NSDictionary* _invite;
	id _authenticator;
	long long _clHand;
	long long _tpHand;
	SFCSR* _csr;
	NSURL* _webURL;
	OpaqueSecKeychainRefRef _destKeychain;
	OpaqueSecCertificateRefRef _CACert;
	NSArray* _crlDistributionPoints;
	char* _crlDistribPointsArray;
	int _numCRLDistribPointNames;
	_CE_GeneralName* _crlDistNames;
	_CE_CRLDistributionPoint* _distPoint;
	_CE_DistributionPointName* _distPointName;
	_CE_GeneralNames* _genNames;

}
-(void)_releaseCRLDistPointsArray;
-(void)_releaseCRLDistPointNames;
-(void)_releaseCEDistribPoint;
-(void)_releaseCEDistribPointName;
-(void)_releaseGenNames;
-(id)init;
-(void)dealloc;
@end
