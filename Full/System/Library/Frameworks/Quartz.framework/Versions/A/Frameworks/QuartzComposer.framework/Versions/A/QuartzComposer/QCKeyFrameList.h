/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSString, NSColor, NSMutableData, QCNumberPort;

@interface QCKeyFrameList : NSObject {

	NSString* _identifier;
	NSColor* _color;
	char _visible;
	unsigned long long _numKeyFrames;
	NSMutableData* _keyFrames;
	NSMutableData* _keyFramesCache;
	char _active;
	unsigned long long _portNumber;
	NSString* _portKey;
	QCNumberPort* _port;

}
-(id)init;
-(void)dealloc;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isVisible;
-(void)setColor:(id)arg1 ;
-(void)setVisible:(char)arg1 ;
-(id)color;
-(void)setActive:(char)arg1 ;
-(char)active;
-(id)port;
-(void)setPort:(id)arg1 ;
-(void)_appendKeyFrame:(SCD_Struct_QC46)arg1 ;
-(unsigned long long)keyFramesCount;
-(id)_keyFrames;
-(id)_keyFramesCache;
-(unsigned long long)portNumber;
-(id)portKey;
-(id)initWithKeyFrameList:(id)arg1 ;
-(long long)baseKeyFrameIndexAtTime:(double)arg1 searchBackward:(char)arg2 ;
-(long long)_insertKeyFrame:(SCD_Struct_QC46)arg1 ;
-(void)_invalidateBezierPathsForKeyFrame:(long long)arg1 ;
-(double)minTimeForControlType:(int)arg1 keyFrame:(long long)arg2 ;
-(void)removeKeyFrame:(long long)arg1 ;
-(double)maxTimeForControlType:(int)arg1 keyFrame:(long long)arg2 ;
-(double)timeForKeyFrame:(long long)arg1 controlType:(int)arg2 ;
-(void)setTime:(double)arg1 forKeyFrame:(long long)arg2 controlType:(int)arg3 ;
-(double)minValueForControlType:(int)arg1 keyFrame:(long long)arg2 ;
-(double)maxValueForControlType:(int)arg1 keyFrame:(long long)arg2 ;
-(id)initWithKeyFrame:(SCD_Struct_QC46)arg1 ;
-(char)executeAtTime:(double)arg1 ;
-(long long)addKeyFrameAtTime:(double)arg1 value:(double)arg2 preserveCurve:(char)arg3 ;
-(double)valueForKeyFrame:(long long)arg1 controlType:(int)arg2 ;
-(void)setValue:(double)arg1 forKeyFrame:(long long)arg2 controlType:(int)arg3 ;
-(long long)offsetControlType:(int)arg1 byTime:(double)arg2 byValue:(double)arg3 keyFrame:(long long)arg4 ;
-(CGPoint)locationOfControlType:(int)arg1 keyFrame:(long long)arg2 ;
-(void)cacheKeyFrames;
-(void)purgeKeyFrameCache;
-(char)keyFrameSelected:(long long)arg1 ;
-(void)setSelected:(char)arg1 forKeyFrame:(long long)arg2 extendSelection:(char)arg3 ;
-(char)controlsFixedForKeyFrame:(long long)arg1 ;
-(void)setControlsFixed:(char)arg1 forKeyFrame:(long long)arg2 ;
-(void)setPortNumber:(unsigned long long)arg1 ;
-(void)setPortKey:(id)arg1 ;
-(SCD_Struct_QC46*)_keyFrameAtIndex:(long long)arg1 ;
@end
