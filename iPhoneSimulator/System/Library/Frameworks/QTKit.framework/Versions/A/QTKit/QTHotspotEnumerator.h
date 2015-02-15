/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class QTNode;

@interface QTHotspotEnumerator : NSEnumerator {

	QTNode* _node;
	unsigned _index;
	long long _reserved1;
	long long _reserved2;
	long long _reserved3;

}
+(id)hotspotEnumeratorWithNode:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(id)initWithNode:(id)arg1 ;
-(void)setNode:(id)arg1 ;
@end
