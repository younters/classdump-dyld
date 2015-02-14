/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class _NS1DVelocityFilter;

@interface _NS2DVelocityFilter : NSObject {

	_NS1DVelocityFilter* xFilter;
	_NS1DVelocityFilter* yFilter;

}

@property (readonly) long long filterDepth; 
@property (readonly) double lastTimestamp; 
@property (readonly) CGPoint filteredVelocity; 
@property (assign) double maxAllowedVelocity; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)setMaxAllowedVelocity:(double)arg1 ;
-(CGPoint)filteredVelocity;
-(void)addDelta:(CGPoint)arg1 withTimestamp:(double)arg2 ;
-(void)resetIfOutOfDate:(double)arg1 ;
-(char)isTimestampOutOfDate:(double)arg1 ;
-(long long)filterDepth;
-(double)lastTimestamp;
-(double)maxAllowedVelocity;
@end
