/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLConnectionRequired.h>
#import <CFNetwork/NSURLAuthenticationChallengeSender.h>

@class NSURLConnection, NSOperationQueue, NSURL, NSURLRequest, NSDictionary, NSString;

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {

	NSURLConnection* _connection;
	NSOperationQueue* _delegateQueue;
	NSURL* _url;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	id _delegate;
	NSDictionary* _connectionProperties;
	char _connectionActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_timingData;
-(id)initWithInfo:(const InternalInit*)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(id)currentRequest;
-(id)originalRequest;
-(void)dealloc;
-(void)_invalidate;
-(void)_setDelegateQueue:(id)arg1 ;
-(id)_connectionProperties;
-(void)_withActiveConnectionAndDelegate:(/*^block*/id)arg1 ;
-(void)setConnectionActive:(char)arg1 ;
-(void)_withConnectionAndDelegate:(/*^block*/id)arg1 ;
-(void)invokeForDelegate:(/*^block*/id)arg1 ;
-(void)_withConnectionDisconnectFromConnection;
-(void)_withConnectionAndDelegate:(/*^block*/id)arg1 onlyActive:(char)arg2 ;
-(char)isConnectionActive;
@end
