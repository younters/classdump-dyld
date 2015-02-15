/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/Support/AssetCacheLocatorService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_source, OS_dispatch_semaphore;
#import <AssetCacheLocatorService/AssetCacheLocatorService-Structs.h>
@class NSURL, NSString, NSArray, NSDate, NSObject, NSMutableDictionary, NSOperationQueue, NSURLConnection, NSMutableData;

@interface AssetCacheLocatorService : NSObject {

	char _useAssetLocator;
	char _skipEVCheck;
	char _initialized;
	char _diskCacheRefreshTimerResumed;
	char _locateServerValidated;
	int _logLevel;
	int _concurrentDNSResolutions;
	unsigned _singleLocateTag;
	unsigned _locateTag;
	double _locateTimeout;
	double _dnsResolutionTimeout;
	NSURL* _locateURL;
	NSString* _userCachePath;
	NSString* _userTempPath;
	NSString* _cacheDirPath;
	NSString* _diskCachePlistPath;
	NSArray* _localhostAddresses;
	NSArray* _softwareVersions;
	NSDate* _bootTime;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listenerConnection;
	NSMutableDictionary* _diskCache;
	NSObject*<OS_dispatch_source> _diskCacheRefreshTimer;
	NSObject*<OS_dispatch_semaphore> _singleLocate;
	NSOperationQueue* _locateOpQueue;
	NSArray* _localAddresses;
	NSArray* _gatewayIdentifiers;
	/*^block*/id _locateCallback;
	NSObject*<OS_dispatch_queue> _locateCallbackQueue;
	NSURLConnection* _locateConnection;
	unsigned long long _locateResponseCode;
	NSMutableData* _locateResponseData;

}

@property (assign) int logLevel;                                                     //@synthesize logLevel=_logLevel - In the implementation block
@property (assign) char useAssetLocator;                                             //@synthesize useAssetLocator=_useAssetLocator - In the implementation block
@property (assign) int concurrentDNSResolutions;                                     //@synthesize concurrentDNSResolutions=_concurrentDNSResolutions - In the implementation block
@property (assign) double locateTimeout;                                             //@synthesize locateTimeout=_locateTimeout - In the implementation block
@property (assign) double dnsResolutionTimeout;                                      //@synthesize dnsResolutionTimeout=_dnsResolutionTimeout - In the implementation block
@property (retain) NSURL * locateURL;                                                //@synthesize locateURL=_locateURL - In the implementation block
@property (assign) char skipEVCheck;                                                 //@synthesize skipEVCheck=_skipEVCheck - In the implementation block
@property (retain) NSString * userCachePath;                                         //@synthesize userCachePath=_userCachePath - In the implementation block
@property (retain) NSString * userTempPath;                                          //@synthesize userTempPath=_userTempPath - In the implementation block
@property (retain) NSString * cacheDirPath;                                          //@synthesize cacheDirPath=_cacheDirPath - In the implementation block
@property (retain) NSString * diskCachePlistPath;                                    //@synthesize diskCachePlistPath=_diskCachePlistPath - In the implementation block
@property (retain) NSArray * localhostAddresses;                                     //@synthesize localhostAddresses=_localhostAddresses - In the implementation block
@property (retain) NSArray * softwareVersions;                                       //@synthesize softwareVersions=_softwareVersions - In the implementation block
@property (retain) NSDate * bootTime;                                                //@synthesize bootTime=_bootTime - In the implementation block
@property (assign) char initialized;                                                 //@synthesize initialized=_initialized - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_xpc_object> listenerConnection;                      //@synthesize listenerConnection=_listenerConnection - In the implementation block
@property (retain) NSMutableDictionary * diskCache;                                  //@synthesize diskCache=_diskCache - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> diskCacheRefreshTimer;              //@synthesize diskCacheRefreshTimer=_diskCacheRefreshTimer - In the implementation block
@property (assign) char diskCacheRefreshTimerResumed;                                //@synthesize diskCacheRefreshTimerResumed=_diskCacheRefreshTimerResumed - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> singleLocate;                    //@synthesize singleLocate=_singleLocate - In the implementation block
@property (assign) unsigned singleLocateTag;                                         //@synthesize singleLocateTag=_singleLocateTag - In the implementation block
@property (retain) NSOperationQueue * locateOpQueue;                                 //@synthesize locateOpQueue=_locateOpQueue - In the implementation block
@property (retain) NSArray * localAddresses;                                         //@synthesize localAddresses=_localAddresses - In the implementation block
@property (retain) NSArray * gatewayIdentifiers;                                     //@synthesize gatewayIdentifiers=_gatewayIdentifiers - In the implementation block
@property (assign) unsigned locateTag;                                               //@synthesize locateTag=_locateTag - In the implementation block
@property (copy) id locateCallback;                                                  //@synthesize locateCallback=_locateCallback - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> locateCallbackQueue;                 //@synthesize locateCallbackQueue=_locateCallbackQueue - In the implementation block
@property (retain) NSURLConnection * locateConnection;                               //@synthesize locateConnection=_locateConnection - In the implementation block
@property (assign) char locateServerValidated;                                       //@synthesize locateServerValidated=_locateServerValidated - In the implementation block
@property (assign) unsigned long long locateResponseCode;                            //@synthesize locateResponseCode=_locateResponseCode - In the implementation block
@property (retain) NSMutableData * locateResponseData;                               //@synthesize locateResponseData=_locateResponseData - In the implementation block
-(int)logLevelByName:(id)arg1 ;
-(void)logWithTag:(unsigned)arg1 level:(int)arg2 format:(id)arg3 ;
-(void)setUserCachePath:(NSString *)arg1 ;
-(void)setUserTempPath:(NSString *)arg1 ;
-(NSString *)userCachePath;
-(void)setCacheDirPath:(NSString *)arg1 ;
-(void)setUseAssetLocator:(char)arg1 ;
-(void)setConcurrentDNSResolutions:(int)arg1 ;
-(int)concurrentDNSResolutions;
-(void)setLocateTimeout:(double)arg1 ;
-(double)locateTimeout;
-(void)setDnsResolutionTimeout:(double)arg1 ;
-(double)dnsResolutionTimeout;
-(char)useAssetLocator;
-(void)setLocateURL:(NSURL *)arg1 ;
-(NSURL *)locateURL;
-(void)setSkipEVCheck:(char)arg1 ;
-(NSString *)cacheDirPath;
-(void)setDiskCachePlistPath:(NSString *)arg1 ;
-(void)setLocalhostAddresses:(NSArray *)arg1 ;
-(id)makeSoftwareVersions;
-(void)setSoftwareVersions:(NSArray *)arg1 ;
-(id)makeBootTimeWithTag:(unsigned)arg1 ;
-(void)setBootTime:(NSDate *)arg1 ;
-(void)setDiskCacheRefreshTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)diskCacheRefreshTimer;
-(NSObject*<OS_dispatch_semaphore>)singleLocate;
-(unsigned)singleLocateTag;
-(void)loadDiskCacheWithTag:(unsigned)arg1 ;
-(void)setDiskCacheRefreshTimerResumed:(char)arg1 ;
-(void)setSingleLocate:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setLocateOpQueue:(NSOperationQueue *)arg1 ;
-(NSString *)userTempPath;
-(void)watchForNetworkChanges;
-(void)setListenerConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)listenerConnection;
-(char)handleEvent:(id)arg1 forConnection:(id)arg2 ;
-(char)handleLocateEvent:(id)arg1 forConnection:(id)arg2 tag:(unsigned)arg3 ;
-(void)locateCachingServerWithTimeout:(double)arg1 callback:(/*^block*/id)arg2 callbackQueue:(id)arg3 tag:(unsigned)arg4 ;
-(NSArray *)localAddresses;
-(void)setLocalAddresses:(NSArray *)arg1 ;
-(void)setGatewayIdentifiers:(NSArray *)arg1 ;
-(char)isUsefulInaddr4:(const in_addr*)arg1 ;
-(char)isUsefulInaddr6:(const in6_addr*)arg1 ;
-(id)stringFromMacAddr:(char*)arg1 ;
-(id)stringFromInaddr4:(const in_addr*)arg1 ;
-(id)stringFromInaddr6:(const in6_addr*)arg1 ;
-(id)stringFromSockaddr4:(const sockaddr_in*)arg1 ;
-(id)stringFromSockaddr6:(const sockaddr_in6*)arg1 ;
-(id)stringFromSockaddrDL:(const sockaddr_dl*)arg1 ;
-(id)stringFromSockaddrStorage:(const sockaddr_storage*)arg1 ;
-(char)isUsefulSockaddr4:(const sockaddr_in*)arg1 ;
-(char)isUsefulSockaddr6:(const sockaddr_in6*)arg1 ;
-(id)identifierFromMacAddr:(char*)arg1 tag:(unsigned)arg2 ;
-(id)safeString:(const char*)arg1 length:(unsigned long long)arg2 forceHex:(char)arg3 ;
-(id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 tag:(unsigned)arg4 ;
-(id)makeRangesFromDNSRecordNamed:(id)arg1 withType:(int)arg2 data:(const char*)arg3 length:(unsigned long long)arg4 more:(char*)arg5 error:(id*)arg6 tag:(unsigned)arg7 ;
-(void)resolveDNSPublicAddressRangesFromRecordNamed:(id)arg1 errorIfNotFound:(char)arg2 callback:(/*^block*/id)arg3 callbackQueue:(id)arg4 tag:(unsigned)arg5 ;
-(char)amRunningOnMyQueue;
-(NSString *)diskCachePlistPath;
-(NSDate *)bootTime;
-(id)sanitizeRanges:(id)arg1 fromSource:(id)arg2 tag:(unsigned)arg3 ;
-(void)setDiskCache:(NSMutableDictionary *)arg1 ;
-(void)saveDiskCacheWithTag:(unsigned)arg1 ;
-(void)updateDiskCacheRefreshTimerWithTag:(unsigned)arg1 ;
-(NSMutableDictionary *)diskCache;
-(char)amRunningInMySingleLocate:(unsigned)arg1 ;
-(char)diskCacheRefreshTimerResumed;
-(id)locateCallback;
-(NSURLConnection *)locateConnection;
-(void)setLocateTag:(unsigned)arg1 ;
-(void)setLocateCallback:(id)arg1 ;
-(void)setLocateCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLocateResponseCode:(unsigned long long)arg1 ;
-(void)setLocateResponseData:(NSMutableData *)arg1 ;
-(void)setLocateConnection:(NSURLConnection *)arg1 ;
-(NSOperationQueue *)locateOpQueue;
-(void)locateLocalCachingServersWithHeaders:(id)arg1 body:(id)arg2 timeout:(double)arg3 callback:(/*^block*/id)arg4 callbackQueue:(id)arg5 tag:(unsigned)arg6 ;
-(id)publicAddressRangesFromConfigurationProfiles:(id)arg1 tag:(unsigned)arg2 ;
-(NSArray *)softwareVersions;
-(id)cachedDNSPublicAddressRangesForNetworkIdentifiers:(id)arg1 tag:(unsigned)arg2 ;
-(void)uncacheDNSPublicAddressRangesForNetworkIdentifiers:(id)arg1 tag:(unsigned)arg2 ;
-(void)cacheDNSPublicAddressRanges:(id)arg1 forNetworkIdentifiers:(id)arg2 validityInterval:(double)arg3 tag:(unsigned)arg4 ;
-(void)resolveDNSPublicAddressRangesWithTimeout:(double)arg1 callback:(/*^block*/id)arg2 callbackQueue:(id)arg3 tag:(unsigned)arg4 ;
-(void)setSingleLocateTag:(unsigned)arg1 ;
-(id)configurationProfilesLastModifiedWithTag:(unsigned)arg1 ;
-(id)loadConfigurationProfilesWithTag:(unsigned)arg1 ;
-(id)cachedConfigurationProfilesLastModifiedWithTag:(unsigned)arg1 ;
-(char)anyCachedServersWithTag:(unsigned)arg1 ;
-(void)uncacheAllServersWithTag:(unsigned)arg1 ;
-(void)cacheConfigurationProfilesLastModified:(id)arg1 tag:(unsigned)arg2 ;
-(NSArray *)localhostAddresses;
-(id)cachedServersForNetworkIdentifiers:(id)arg1 tag:(unsigned)arg2 ;
-(char)makeLocalAddresses:(id*)arg1 andGatewayIdentifiers:(id*)arg2 tag:(unsigned)arg3 ;
-(NSArray *)gatewayIdentifiers;
-(void)uncacheServersForNetworkIdentifiers:(id)arg1 tag:(unsigned)arg2 ;
-(void)cacheServers:(id)arg1 forNetworkIdentifiers:(id)arg2 validityInterval:(double)arg3 tag:(unsigned)arg4 ;
-(void)locateLocalCachingServersWithTimeout:(double)arg1 localAddresses:(id)arg2 gatewayIdentifiers:(id)arg3 configurationProfiles:(id)arg4 callback:(/*^block*/id)arg5 callbackQueue:(id)arg6 tag:(unsigned)arg7 ;
-(void)locateLocalhostCachingServerWithTimeout:(double)arg1 callback:(/*^block*/id)arg2 callbackQueue:(id)arg3 tag:(unsigned)arg4 ;
-(unsigned)locateTag;
-(NSObject*<OS_dispatch_queue>)locateCallbackQueue;
-(void)setLocateServerValidated:(char)arg1 ;
-(char)skipEVCheck;
-(NSMutableData *)locateResponseData;
-(char)locateServerValidated;
-(unsigned long long)locateResponseCode;
-(char)parseLocateResponse:(id)arg1 intoServers:(id*)arg2 validityInterval:(double*)arg3 error:(id*)arg4 tag:(unsigned)arg5 ;
-(void)networkChanged;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(char)sandbox;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(char)initialized;
-(void)setInitialized:(char)arg1 ;
-(void)handleConnection:(id)arg1 ;
-(id)init;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end
