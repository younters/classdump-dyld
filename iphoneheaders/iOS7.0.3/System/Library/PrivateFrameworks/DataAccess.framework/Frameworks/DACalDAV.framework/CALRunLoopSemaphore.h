/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <DACalDAV/DACalDAV-Structs.h>
@class NSLock;

@interface CALRunLoopSemaphore : NSObject {

	CFRunLoopRef _rloop;
	int _count;
	int _pipe[2];
	CFSocketRef _socket;
	CFRunLoopSourceRef _socketSource;
	NSLock* _countLock;

}
-(void)awake;
-(void)dealloc;
-(id)init;
-(int)value;
-(id)initWithCFRunLoop:(CFRunLoopRef)arg1 ;
-(void)down;
-(void)up;
-(void)finalize;
@end
