/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDBonjourResolverDelegate.h>
#import <sharingd/SDRemoteDiscDelegate.h>

@protocol SDSharePointBrowserDelegate;
@class NSNumber, NSString, NSTimer, SDRemoteDisc, SDStatusMonitor, SDBonjourResolver, NSDictionary, NSMutableSet, NSMutableDictionary, NSURL, NSArray;

@interface SDSharePointBrowser : NSObject <SDBonjourResolverDelegate, SDRemoteDiscDelegate> {

	void* _session;
	char _askFirst;
	char _passwordOnly;
	char _sharesMounted;
	char _resolveService;
	NSNumber* _diskFlags;
	NSString* _authType;
	NSString* _askToken;
	NSString* _askStatus;
	NSString* _askDevice;
	NSString* _serverName;
	NSString* _changeCount;
	NSString* _neighborhood;
	NSTimer* _destroyTimer;
	int _error;
	unsigned long long _flags;
	SDRemoteDisc* _remoteDisc;
	SDStatusMonitor* _monitor;
	SDBonjourResolver* _resolver;
	NSDictionary* _sharePoints;
	NSDictionary* _fileShares;
	NSDictionary* _printerShares;
	NSMutableSet* _mountedVolumes;
	NSMutableDictionary* _queries;
	char _shouldNotify;
	int _connectionState;
	NSURL* _serverURL;
	NSArray* _protocols;
	NSString* _userName;
	NSString* _hostName;
	NSString* _protocol;
	NSNumber* _portNumber;
	NSString* _typeIdentifier;
	DNSServiceRef_tRef _connection;
	id<SDSharePointBrowserDelegate> _delegate;

}

@property (retain) NSURL * serverURL;                                     //@synthesize serverURL=_serverURL - In the implementation block
@property (retain) NSArray * protocols;                                   //@synthesize protocols=_protocols - In the implementation block
@property (retain) NSString * userName;                                   //@synthesize userName=_userName - In the implementation block
@property (retain) NSString * hostName;                                   //@synthesize hostName=_hostName - In the implementation block
@property (retain) NSString * protocol;                                   //@synthesize protocol=_protocol - In the implementation block
@property (retain) NSNumber * portNumber;                                 //@synthesize portNumber=_portNumber - In the implementation block
@property (retain) NSString * typeIdentifier;                             //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (readonly) char shouldNotify;                                   //@synthesize shouldNotify=_shouldNotify - In the implementation block
@property (readonly) NSArray * fileNodes; 
@property (readonly) NSArray * printerNodes; 
@property (readonly) void* URLMountSession; 
@property (readonly) DNSServiceRef_tRef connection;                       //@synthesize connection=_connection - In the implementation block
@property (readonly) int connectionState;                                 //@synthesize connectionState=_connectionState - In the implementation block
@property (__weak) id<SDSharePointBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelResolve;
-(void)notifyClient;
-(void)bonjourResolverDidChange:(id)arg1 ;
-(void*)URLMountSession;
-(id)initWithProtocol:(id)arg1 authType:(id)arg2 flags:(unsigned long long)arg3 ;
-(void)setNetbiosName:(id)arg1 ;
-(void)setBonjourInfo:(id)arg1 domain:(id)arg2 resolveService:(char)arg3 ;
-(void)setProtocols:(NSArray *)arg1 ;
-(NSArray *)printerNodes;
-(NSArray *)fileNodes;
-(void)remoteDiscStatusDidChange:(id)arg1 ;
-(void)stopTXTRecordMonitor:(id)arg1 ;
-(char)isNetAuthSupportedProtocol:(id)arg1 ;
-(id)netAuthProtocol;
-(id)fullNameForScheme:(id)arg1 hostName:(id)arg2 ;
-(char)isPartialVolumeList;
-(id)mountedSharePointsForProtocol:(id)arg1 ;
-(char)singlePasswordEnabled:(id)arg1 ;
-(char)shouldAskFirst:(id)arg1 ;
-(void)addSharePoint:(id)arg1 diskName:(CFStringRef)arg2 diskFlags:(CFNumberRef)arg3 diskID:(CFStringRef)arg4 diskType:(CFStringRef)arg5 protocol:(CFStringRef)arg6 mountPath:(CFStringRef)arg7 ;
-(void)addSharesToCache:(id)arg1 newFileShares:(id)arg2 newPrinterShares:(id)arg3 ;
-(void)addTXTRecordSharesToCache:(id)arg1 printerShares:(id)arg2 ;
-(void)buildShares:(char)arg1 ;
-(id)netAuthURL;
-(void)openNetAuthSession;
-(char)shouldNotify;
-(void)setMountInfo:(CFDictionaryRef)arg1 ;
-(void)setShouldNotify:(char)arg1 ;
-(void)enumerateShares;
-(void)openSession;
-(void)setError:(int)arg1 state:(int)arg2 notify:(char)arg3 ;
-(void)setSharePoints:(id)arg1 ;
-(void)startTXTRecordMonitor:(id)arg1 ;
-(id)sharePointsFromMountPoints:(id)arg1 ;
-(void)setProtocolUserName;
-(char)getBooleanValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(void)mountPointsChanged:(id)arg1 ;
-(void)checkNetAuthSession:(id)arg1 ;
-(void)handleTXTRecordCallBack:(unsigned)arg1 error:(int)arg2 txtLen:(unsigned short)arg3 txtRecord:(const void*)arg4 context:(id)arg5 ;
-(void)handleOpenCallBack:(CFDictionaryRef)arg1 error:(int)arg2 ;
-(void)handleEnumerateCallBack:(id)arg1 error:(int)arg2 ;
-(void)setHostName:(NSString *)arg1 ;
-(NSString *)protocol;
-(NSString *)hostName;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(void)addObservers;
-(void)removeObservers;
-(void)closeSession;
-(DNSServiceRef_tRef)connection;
-(void)setProtocol:(NSString *)arg1 ;
-(void)setDelegate:(id<SDSharePointBrowserDelegate>)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id<SDSharePointBrowserDelegate>)delegate;
-(void)setError:(int)arg1 ;
-(NSString *)typeIdentifier;
-(int)connectionState;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
-(void)setConnectionState:(int)arg1 ;
-(NSURL *)serverURL;
-(void)setServerURL:(NSURL *)arg1 ;
-(NSArray *)protocols;
-(NSNumber *)portNumber;
-(void)setPortNumber:(NSNumber *)arg1 ;
@end
