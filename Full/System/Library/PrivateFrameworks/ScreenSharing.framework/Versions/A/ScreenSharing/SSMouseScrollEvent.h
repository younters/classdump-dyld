/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <ScreenSharing/SSMouseEvent.h>

@interface SSMouseScrollEvent : SSMouseEvent {

	short mDeltaX;
	short mDeltaY;
	short mDeltaZ;
	int mFixedDeltaX;
	int mFixedDeltaY;
	int mFixedDeltaZ;
	int mPointDeltaX;
	int mPointDeltaY;
	int mPointDeltaZ;
	unsigned mScrollPhase;
	unsigned mMomentumPhase;
	int mScrollCount;
	unsigned mFlags;

}

@property (readonly) short deltaX; 
@property (readonly) short deltaY; 
@property (readonly) short deltaZ; 
@property (readonly) int fixedDeltaX; 
@property (readonly) int fixedDeltaY; 
@property (readonly) int fixedDeltaZ; 
@property (readonly) int pointDeltaX; 
@property (readonly) int pointDeltaY; 
@property (readonly) int pointDeltaZ; 
@property (readonly) unsigned scrollPhase; 
@property (readonly) unsigned momentumPhase; 
@property (readonly) int scrollCount; 
@property (readonly) unsigned flags; 
+(id)mouseScrollEventWithCoordinates:(SSPoint)arg1 withDeltaX:(short)arg2 withDeltaY:(short)arg3 withDeltaZ:(short)arg4 withFixedDeltaX:(int)arg5 withFixedDeltaY:(int)arg6 withFixedDeltaZ:(int)arg7 withPointDeltaX:(int)arg8 withPointDeltaY:(int)arg9 withPointDeltaZ:(int)arg10 withScrollPhase:(unsigned)arg11 withMomentumPhase:(unsigned)arg12 withScrollCount:(int)arg13 withFlags:(unsigned)arg14 ;
-(id)initWithCoordinates:(SSPoint)arg1 withDeltaX:(short)arg2 withDeltaY:(short)arg3 withDeltaZ:(short)arg4 withFixedDeltaX:(int)arg5 withFixedDeltaY:(int)arg6 withFixedDeltaZ:(int)arg7 withPointDeltaX:(int)arg8 withPointDeltaY:(int)arg9 withPointDeltaZ:(int)arg10 withScrollPhase:(unsigned)arg11 withMomentumPhase:(unsigned)arg12 withScrollCount:(int)arg13 withFlags:(unsigned)arg14 ;
-(unsigned)scrollPhase;
-(int)scrollCount;
-(int)fixedDeltaX;
-(int)fixedDeltaY;
-(int)fixedDeltaZ;
-(int)pointDeltaX;
-(int)pointDeltaY;
-(int)pointDeltaZ;
-(unsigned)momentumPhase;
-(short)deltaY;
-(short)deltaX;
-(short)deltaZ;
-(unsigned)flags;
@end
