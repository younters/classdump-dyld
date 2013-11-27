/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class SSAuthenticationContext;

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;

}

@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (assign,nonatomic,@dynamic) <SSAuthenticateRequestDelegate> * delegate; 
-(void)dealloc;
-(BOOL)start;
-(id)initWithAccount:(id)arg1 ;
-(void)startWithAuthenticateResponseBlock:(/*^block*/ id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)authenticationContext;
-(id)initWithAuthenticationContext:(id)arg1 ;
@end
