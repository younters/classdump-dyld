/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLAuthenticationChallengeSender <NSObject>
@optional
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;

@required
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
-(void)cancelAuthenticationChallenge:(id)arg1;

@end
