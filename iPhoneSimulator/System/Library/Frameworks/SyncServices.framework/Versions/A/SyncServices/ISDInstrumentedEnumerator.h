/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class ISDCallHistory, NSEnumerator;

@interface ISDInstrumentedEnumerator : NSEnumerator {

	ISDCallHistory* _callHistory;
	NSEnumerator* _enumerator;

}
-(void)dealloc;
-(id)nextObject;
-(id)allObjects;
-(id)initWithCallHistory:(id)arg1 enumerator:(id)arg2 ;
@end
