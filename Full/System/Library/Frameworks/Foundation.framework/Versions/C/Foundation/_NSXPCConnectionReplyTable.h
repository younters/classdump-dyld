/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionReplyTable : NSObject {

	void* _replyTable;
	CFDictionaryRef _progressTable;
	int _replyTableLock;
	unsigned long long _sequence;

}
-(unsigned long long)sequenceForProgress:(id)arg1 ;
-(void)removeProgressSequence:(unsigned long long)arg1 ;
-(id)progressForSequence:(unsigned long long)arg1 ;
-(unsigned long long)sequenceForEvent:(void*)arg1 ;
-(void*)copyReplyDictionaryForSequence:(unsigned long long)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end
