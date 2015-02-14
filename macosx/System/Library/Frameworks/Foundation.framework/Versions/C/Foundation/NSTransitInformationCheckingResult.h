/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSDictionary* _components;
	id _underlyingResult;

}

@property (readonly) void* underlyingResult; 
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(char)_adjustRangesWithOffset:(long long)arg1 ;
-(id)initWithRange:(NSRange)arg1 components:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)components;
-(NSRange)range;
-(unsigned long long)resultType;
-(void*)underlyingResult;
-(id)initWithRange:(NSRange)arg1 components:(id)arg2 underlyingResult:(void*)arg3 ;
@end
