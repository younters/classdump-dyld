/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileWritingClaim : NSFileAccessClaim {

	NSURL* _url;
	char _urlDidChange;
	unsigned long long _options;
	NSFileAccessNode* _location;

}
-(id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(/*^block*/id)arg4 ;
-(void)granted;
-(void)invokeClaimer;
-(char)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(id)initWithClient:(xpc_connection_sRef)arg1 messageParameters:(id)arg2 replySender:(/*^block*/id)arg3 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(char)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(char)arg2 ;
-(char)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(char)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(void)resolveURLsThenContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(void)dealloc;
@end
