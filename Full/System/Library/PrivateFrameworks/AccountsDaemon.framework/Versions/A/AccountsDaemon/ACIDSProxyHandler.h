/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore;

@interface ACIDSProxyHandler : NSObject {

	ACAccountStore* _accountStore;

}
-(void)changedAccount:(id)arg1 ;
-(void)promptUserWithAccount:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)authenticateAccount:(id)arg1 ;
-(void)deleteAccount:(id)arg1 ;
-(id)init;
@end
