/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/Feedback Assistant-Structs.h>
#import <Foundation/NSOperation.h>
#import <Feedback Assistant/NSURLConnectionDelegate.h>
#import <Feedback Assistant/NSURLConnectionDataDelegate.h>
#import <Feedback Assistant/NSCoding.h>
#import <Feedback Assistant/NSCopying.h>

@class NSURLConnection, NSSet, NSURLRequest, NSURLResponse, NSError, NSData, NSString, NSOutputStream, NSURLCredential, NSDictionary, NSRecursiveLock, NSInputStream;

@interface AFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSCoding, NSCopying> {

	char _cancelled;
	char _shouldUseCredentialStorage;
	short _state;
	NSURLConnection* _connection;
	NSSet* _runLoopModes;
	NSURLRequest* _request;
	NSURLResponse* _response;
	NSError* _error;
	NSData* _responseData;
	NSString* _responseString;
	unsigned long long _responseStringEncoding;
	long long _totalBytesRead;
	NSOutputStream* _outputStream;
	NSURLCredential* _credential;
	NSDictionary* _userInfo;
	id _backgroundTaskIdentifier;
	/*^block*/id _uploadProgress;
	/*^block*/id _downloadProgress;
	/*^block*/id _authenticationAgainstProtectionSpace;
	/*^block*/id _authenticationChallenge;
	/*^block*/id _cacheResponse;
	/*^block*/id _redirectResponse;
	NSRecursiveLock* _lock;

}

@property (nonatomic,retain) NSSet * runLoopModes;                                   //@synthesize runLoopModes=_runLoopModes - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                               //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * responseData;                                  //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) NSString * responseString;                                //@synthesize responseString=_responseString - In the implementation block
@property (assign,nonatomic) unsigned long long responseStringEncoding;              //@synthesize responseStringEncoding=_responseStringEncoding - In the implementation block
@property (assign,nonatomic) char shouldUseCredentialStorage;                        //@synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage - In the implementation block
@property (nonatomic,retain) NSURLCredential * credential;                           //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream; 
@property (nonatomic,retain) NSOutputStream * outputStream;                          //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) short state;                                            //@synthesize state=_state - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;                      //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                 //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) long long totalBytesRead;                               //@synthesize totalBytesRead=_totalBytesRead - In the implementation block
@property (assign,nonatomic) id backgroundTaskIdentifier;                            //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (nonatomic,copy) id uploadProgress;                                        //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (nonatomic,copy) id downloadProgress;                                      //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy) id authenticationAgainstProtectionSpace;                  //@synthesize authenticationAgainstProtectionSpace=_authenticationAgainstProtectionSpace - In the implementation block
@property (nonatomic,copy) id authenticationChallenge;                               //@synthesize authenticationChallenge=_authenticationChallenge - In the implementation block
@property (nonatomic,copy) id cacheResponse;                                         //@synthesize cacheResponse=_cacheResponse - In the implementation block
@property (nonatomic,copy) id redirectResponse;                                      //@synthesize redirectResponse=_redirectResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)networkRequestThreadEntryPoint:(id)arg1 ;
+(id)networkRequestThread;
+(id)pinnedCertificates;
-(NSString *)responseString;
-(unsigned long long)responseStringEncoding;
-(void)setUploadProgressBlock:(/*^block*/id)arg1 ;
-(void)setShouldUseCredentialStorage:(char)arg1 ;
-(void)setUploadProgress:(id)arg1 ;
-(void)setAuthenticationAgainstProtectionSpace:(id)arg1 ;
-(void)setAuthenticationChallenge:(id)arg1 ;
-(void)setCacheResponse:(id)arg1 ;
-(void)setRedirectResponse:(id)arg1 ;
-(void)setResponseString:(NSString *)arg1 ;
-(void)setResponseStringEncoding:(unsigned long long)arg1 ;
-(void)operationDidStart;
-(id)authenticationAgainstProtectionSpace;
-(id)authenticationChallenge;
-(char)shouldUseCredentialStorage;
-(id)redirectResponse;
-(id)uploadProgress;
-(long long)totalBytesRead;
-(void)setTotalBytesRead:(long long)arg1 ;
-(void)setResponseData:(NSData *)arg1 ;
-(id)cacheResponse;
-(void)setDownloadProgressBlock:(/*^block*/id)arg1 ;
-(void)setAuthenticationAgainstProtectionSpaceBlock:(/*^block*/id)arg1 ;
-(void)setAuthenticationChallengeBlock:(/*^block*/id)arg1 ;
-(void)setCacheResponseBlock:(/*^block*/id)arg1 ;
-(void)setRedirectResponseBlock:(/*^block*/id)arg1 ;
-(id)backgroundTaskIdentifier;
-(void)setBackgroundTaskIdentifier:(id)arg1 ;
-(NSURLCredential *)credential;
-(void)finish;
-(char)isReady;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(char)isExecuting;
-(NSData *)responseData;
-(NSURLRequest *)request;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)cancelConnection;
-(NSInputStream *)inputStream;
-(NSOutputStream *)outputStream;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSURLConnection *)connection;
-(char)isConcurrent;
-(NSSet *)runLoopModes;
-(void)setRunLoopModes:(NSSet *)arg1 ;
-(void)dealloc;
-(void)start;
-(NSString *)description;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)cancel;
-(void)setState:(short)arg1 ;
-(NSRecursiveLock *)lock;
-(short)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resume;
-(char)isCancelled;
-(char)isFinished;
-(void)setCancelled:(char)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)pause;
-(char)isPaused;
-(void)setDownloadProgress:(id)arg1 ;
-(id)downloadProgress;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(char)connectionShouldUseCredentialStorage:(id)arg1 ;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(NSURLResponse *)response;
@end
