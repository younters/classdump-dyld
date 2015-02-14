/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCManagedObjectProxy.h>

@class NSError, NSString, NSOperationQueue, MCMailboxProxy;

@interface MCAccountProxy : MCManagedObjectProxy {

	int _syncCount;
	long long _accountState;
	NSError* _webAuthenticationError;
	NSString* _certificateHostname;
	NSError* _certificateError;
	NSOperationQueue* _remoteTaskQueue;
	NSOperationQueue* _remoteFetchQueue;

}

@property (copy,readonly) NSString * identifier; 
@property (assign) long long accountState;                                               //@synthesize accountState=_accountState - In the implementation block
@property (readonly) char isSyncing; 
@property (assign) char enabled; 
@property (copy) NSString * displayName; 
@property (copy) NSString * canonicalEmailAddress; 
@property (copy) NSString * username; 
@property (assign) char allowInsecureAuthentication; 
@property (readonly) NSString * googleClientToken; 
@property (retain) NSError * webAuthenticationError;                                     //@synthesize webAuthenticationError=_webAuthenticationError - In the implementation block
@property (copy) NSString * certificateHostname;                                         //@synthesize certificateHostname=_certificateHostname - In the implementation block
@property (retain) NSError * certificateError;                                           //@synthesize certificateError=_certificateError - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * remoteTaskQueue;                       //@synthesize remoteTaskQueue=_remoteTaskQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * remoteFetchQueue;                      //@synthesize remoteFetchQueue=_remoteFetchQueue - In the implementation block
@property (nonatomic,readonly) MCMailboxProxy * defaultHighPriorityMailbox; 
+(id)keyPathsForValuesAffectingIsSyncing;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(char)enabled;
-(id)initWithManagedObject:(id)arg1 ;
-(void)syncStarted;
-(void)syncFinished;
-(MCMailboxProxy *)defaultHighPriorityMailbox;
-(void)setHighPriorityMailbox:(id)arg1 ;
-(long long)accountState;
-(void)setAccountState:(long long)arg1 ;
-(NSError *)webAuthenticationError;
-(void)setWebAuthenticationError:(NSError *)arg1 ;
-(NSString *)certificateHostname;
-(void)setCertificateHostname:(NSString *)arg1 ;
-(NSError *)certificateError;
-(void)setCertificateError:(NSError *)arg1 ;
-(void)setAllowInsecureAuthentication:(char)arg1 ;
-(void)setCanonicalEmailAddress:(NSString *)arg1 ;
-(char)allowInsecureAuthentication;
-(NSString *)canonicalEmailAddress;
-(NSString *)googleClientToken;
-(NSOperationQueue *)remoteTaskQueue;
-(NSOperationQueue *)remoteFetchQueue;
-(void)invalidate;
-(NSString *)identifier;
-(void)setEnabled:(char)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(char)isSyncing;
@end
