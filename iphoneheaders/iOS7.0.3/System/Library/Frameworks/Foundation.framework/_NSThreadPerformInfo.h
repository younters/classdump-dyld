/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, NSCondition;

@interface _NSThreadPerformInfo : NSObject {

	id target;
	SEL selector;
	id argument;
	NSMutableArray* modes;
	NSCondition* waiter;
	char* signalled;

}
-(void)dealloc;
@end
