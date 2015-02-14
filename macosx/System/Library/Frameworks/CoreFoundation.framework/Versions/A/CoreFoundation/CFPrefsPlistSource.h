/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSource.h>

@interface CFPrefsPlistSource : CFPrefsSource {

	dispatch_group_sRef _synchGroup;
	CFStringRef userIdentifier;
	CFStringRef domainIdentifier;
	CFStringRef container;
	CFDictionaryRef _locallySetDict;
	const char* accessPath;
	struct {
		unsigned _isByHost : 1;
		unsigned _volatile : 1;
		unsigned _readonly : 1;
		unsigned _avoidsDaemonCache : 1;
		unsigned _restrictedAccess : 1;
		unsigned _checkedInvalidHome : 1;
		unsigned _lastWriteFailed : 1;
	}  _flags;

}
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(char)arg3 containerPath:(CFStringRef)arg4 ;
-(void)alreadylocked_setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(CFArrayRef)alreadylocked_copyKeyList;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(char)alreadylocked_requestNewData;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 ;
-(void*)createRequestNewContentMessageForDaemon:(char)arg1 ;
-(void)handleReply:(void*)arg1 toRequestNewDataMessage:(void*)arg2 onConnection:(xpc_connection_sRef)arg3 error:(char*)arg4 ;
-(long long)alreadylocked_generationCount;
-(long long)generationCount;
-(void)clearCache;
-(void)setDaemonCacheEnabled:(char)arg1 ;
-(void)setAccessRestricted:(char)arg1 ;
-(CFStringRef)userIdentifier;
-(CFStringRef)domainIdentifier;
-(char)isByHost;
-(char)volatilizeIfInvalidHomeDir;
-(void*)createSynchronizeMessage;
-(void)sendFullyPreparedMessage:(void*)arg1 settingValue:(void*)arg2 forKey:(CFStringRef)arg3 ;
-(void)setDomainIdentifier:(CFStringRef)arg1 ;
-(void)setUserIdentifier:(CFStringRef)arg1 ;
-(long long)sendMessageSettingValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(char)handleErrorReply:(void*)arg1 fromMessageSettingKey:(CFStringRef)arg2 toValue:(void*)arg3 retryContinuation:(/*^block*/id)arg4 ;
-(char)attachAccessTokenToMessage:(void*)arg1 ;
-(void)addPIDImpersonationIfNecessary:(void*)arg1 ;
-(void)sendRequestNewDataMessage:(void*)arg1 toConnection:(xpc_connection_sRef)arg2 error:(char*)arg3 ;
-(char)handleErrorReply:(void*)arg1 retryContinuation:(/*^block*/id)arg2 ;
-(void)_sharedCleanup;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)synchronize;
-(CFStringRef)container;
-(void)setContainer:(CFStringRef)arg1 ;
@end
