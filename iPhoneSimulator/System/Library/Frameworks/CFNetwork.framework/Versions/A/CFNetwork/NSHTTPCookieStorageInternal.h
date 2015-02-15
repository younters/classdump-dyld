/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject {

	OpaqueCFHTTPCookieStorageRef storage;
	OpaqueCFHTTPCookieStorageRef privateStorage;
	NSRecursiveLock* dataLock;
	char privateBrowsing;

}
-(void)dealloc;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(void)registerForPostingNotifications;
-(id)initInternalWithCFStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)_syncCookies;
@end
