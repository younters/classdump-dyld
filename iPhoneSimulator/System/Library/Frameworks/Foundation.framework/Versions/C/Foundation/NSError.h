/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, NSArray;

@interface NSError : NSObject <NSCopying, NSSecureCoding> {

	void* _reserved;
	long long _code;
	NSString* _domain;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) char isDiskFullError; 
@property (nonatomic,readonly) char isFatalCoreDataError; 
@property (nonatomic,readonly) char isFileNotFoundError; 
@property (nonatomic,readonly) char isHardError; 
@property (nonatomic,readonly) char isIOError; 
@property (nonatomic,readonly) char isNSVError; 
@property (nonatomic,readonly) char isPermissionsError; 
@property (nonatomic,readonly) char isTimeoutError; 
@property (getter=_mapkit_isCLDenied,nonatomic,readonly) char _mapkit_CLDenied; 
@property (getter=_mapkit_isCLLocationUnknown,nonatomic,readonly) char _mapkit_CLLocationUnknown; 
@property (getter=_mapkit_isCLHeadingFailure,nonatomic,readonly) char _mapkit_CLHeadingFailure; 
@property (getter=_mapkit_isCLErrorNetwork,nonatomic,readonly) char _mapkit_CLErrorNetwork; 
@property (nonatomic,retain,readonly) NSURL * _mapkit_locationErrorSettingsURL; 
@property (copy,readonly) NSString * domain; 
@property (readonly) long long code; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSString * localizedDescription; 
@property (copy,readonly) NSString * localizedFailureReason; 
@property (copy,readonly) NSString * localizedRecoverySuggestion; 
@property (copy,readonly) NSArray * localizedRecoveryOptions; 
@property (retain,readonly) id recoveryAttempter; 
@property (copy,readonly) NSString * helpAnchor; 
+(id)errorWithEKErrorCode:(int)arg1 ;
+(id)errorWithEKErrorCode:(int)arg1 description:(id)arg2 ;
+(id)errorWithEKErrorCode:(int)arg1 underlyingError:(id)arg2 ;
+(id)_defaultDescriptionForCode:(int)arg1 ;
+(id)errorWithEKErrorCode:(int)arg1 description:(id)arg2 underlyingError:(id)arg3 ;
+(id)tooBigForDiskErrorWithCount:(long long)arg1 ;
+(id)errorMessageFromErrorCode:(long long)arg1 domain:(id)arg2 ;
+(id)errorMessageFromPOSIXError:(int)arg1 ;
+(id)errorMessageFromOSStatus:(int)arg1 ;
+(id)errorMessageFromCocoaError:(long long)arg1 ;
+(id)errorMessageFromUnknownError:(long long)arg1 ;
+(id)errorMessageFromCFRunLoopRunError:(int)arg1 ;
+(id)browserErrorWithCode:(int)arg1 ;
+(id)canceledErrorWithURL:(id)arg1 ;
+(id)errorWithDomain:(id)arg1 code:(int)arg2 ;
+(id)APIParameterErrorFromErrorCode:(long long)arg1 ;
+(id)APILimitErrorFromErrorCode:(long long)arg1 ;
+(id)APIAuthorizationErrorFromErrorCode:(long long)arg1 ;
+(id)APIInternalServerErrorFromErrorCode:(long long)arg1 ;
+(id)APIUserErrorFromErrorCode:(long long)arg1 ;
+(id)APIFakeUserErrorFromErrorCode:(long long)arg1 ;
+(id)APIGenericErrorFromErrorCode:(long long)arg1 ;
+(id)errorFromTencentWeiboAPIResponseErrorWithType:(long long)arg1 code:(long long)arg2 ;
+(id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2 ;
+(id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
+(void)_registerWebKitErrors;
+(id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
+(void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2 ;
+(id)tl_errorWithDomain:(id)arg1 description:(id)arg2 ;
+(id)errorWithPOSIXCode:(int)arg1 ;
+(id)errorFromErrno;
+(id)errorWithPOSIXCode:(int)arg1 description:(id)arg2 ;
+(id)brc_errorPathOutsideAnyCloudDocsContainerAtURL:(id)arg1 ;
+(id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2 ;
+(id)brc_errorNoDocumentAtURL:(id)arg1 underlyingPOSIXError:(int)arg2 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)brc_errorDaemonShouldBeLoggedOut;
+(id)brc_errorMethodNotImplemented:(const char*)arg1 ;
+(id)brc_errorNotInCloud:(id)arg1 ;
+(id)brc_errorPermissionErrorAtURL:(id)arg1 ;
+(id)brc_errorItemNotFound:(id)arg1 ;
+(id)brc_errorContainerNotFound:(id)arg1 ;
+(id)brc_errorNoContainerForBundle:(id)arg1 ;
+(id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToContainer:(id)arg2 ;
+(id)brc_errorAccountMismatch;
+(id)errorWithPOSIXCode:(int)arg1 ;
+(id)errorFromErrno;
+(id)zilchDecoderErrorForNoSolution;
+(id)_geo_errorFromXPCData:(void*)arg1 ;
+(id)qt_localizedErrorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(id)qt_localizedErrorWithUnderlyingOSStatus:(int)arg1 userInfo:(id)arg2 ;
+(id)qt_localizedUnknownErrorWithUnderlyingOSStatus:(int)arg1 ;
+(id)errorWithBTResult:(id)arg1 ;
+(id)genericErrorWithFile:(const char*)arg1 function:(const char*)arg2 lineNumber:(long long)arg3 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
+(void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2 ;
+(void)_registerFormatter:(/*function pointer*/void*)arg1 forErrorKey:(id)arg2 parameters:(const char*)arg3 ;
+(void)_registerBuiltInFormatters;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(char)supportsSecureCoding;
-(id)errorBySettingValue:(id)arg1 forUserInfoKey:(id)arg2 ;
-(id)errorBySettingFatalError:(char)arg1 ;
-(char)isEqual:(id)arg1 compareUserInfo:(char)arg2 ;
-(char)isFatalError;
-(char)shouldOfferRetryForAuthentication;
-(char)isDiskFullError;
-(char)isPermissionsError;
-(char)isIOError;
-(char)isFatalCoreDataError;
-(char)isFileNotFoundError;
-(char)isHardError;
-(char)isNSVError;
-(char)isTimeoutError;
-(NSString *)errorMessage;
-(char)safari_errorOrAnyPartialErrorHasCloudKitErrorCode:(long long)arg1 ;
-(id)errorSummary;
-(char)isCanceledError;
-(char)isCalAuthenticationError;
-(char)isCalHTTPAuthOrHTTPTimeoutError;
-(char)isCalDAVTransientErrorException;
-(char)isCalGoogleAuthError;
-(id)CalRedirectURLForGoogleAuthError;
-(char)isCalCertificateError;
-(char)isCalDAVTranslatedRevertableError;
-(char)isCalTransientError;
-(char)isCalConnectionError;
-(id)_mapkit_directionsErrorWithDetail:(SCD_Struct_NS29*)arg1 ;
-(char)_mapkit_isDirectionsError;
-(long long)_mapkit_directionsErrorCode;
-(long long)_mapkit_underlyingGEOError;
-(id)_mapkit_error;
-(char)_mapkit_isCLLocationUnknown;
-(char)_mapkit_isCLDenied;
-(char)_mapkit_isCLHeadingFailure;
-(char)_mapkit_isCLErrorNetwork;
-(NSURL *)_mapkit_locationErrorSettingsURL;
-(id)encodeableError;
-(id)encodeableError;
-(id)encodeableError;
-(id)encodeableError;
-(id)encodeableError;
-(id)moreInfo;
-(char)shouldBeReportedToUser;
-(char)isSSLCertificateError;
-(id)shortDescription;
-(char)isAuthenticationError;
-(id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5 ;
-(id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
-(id)localizedSummary;
-(id)tl_nonRedundantDescription;
-(char)isPOSIXErrorCode:(long long)arg1 ;
-(char)isCocoaErrorCode:(long long)arg1 ;
-(char)br_isCloudDocsErrorCode:(long long)arg1 ;
-(id)CKClientSuitableError;
-(char)CKIsNotFoundError;
-(char)isPOSIXErrorCode:(long long)arg1 ;
-(id)zilchDecoderTileLoadingError;
-(void*)_geo_newXPCData;
-(id)qt_errorByAddingUserInfoEntriesFromDictionary:(id)arg1 ;
-(id)ac_secureCodingError;
-(id)_web_localizedDescription;
-(id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
-(unsigned long long)_cfTypeID;
-(id)_cocoaErrorString:(id)arg1 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 ;
-(CFStringRef)_retainedUserInfoCallBackForKey:(id)arg1 ;
-(id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
-(id)_web_failingURL;
-(char)_web_errorIsInDomain:(id)arg1 ;
-(long long)_collectApplicableUserInfoFormatters:(/*function pointer*/void**)arg1 max:(long long)arg2 ;
-(id)_formatCocoaErrorString:(id)arg1 parameters:(const char*)arg2 applicableFormatters:(/*function pointer*/void**)arg3 count:(long long)arg4 ;
-(id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(long long)code;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(NSString *)localizedRecoverySuggestion;
-(NSArray *)localizedRecoveryOptions;
-(NSString *)helpAnchor;
-(id)recoveryAttempter;
-(NSString *)domain;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSString *)localizedFailureReason;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
@end
