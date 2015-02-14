/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SocialUI/SocialUI-Structs.h>
@interface SODynamicLayoutManager : NSObject {

	double* _minHeightArray;
	double* _currentOriginArray;
	double* _currentEasing;
	double* _targetOriginArray;
	double* _targetEasing;
	unsigned long long* _orientations;
	char _isResting;
	char _easingUp;
	unsigned long long _size;
	double _displayLinkTime;
	double _previousTimestamp;
	double _minSpace;
	double _scale;
	double _viewHeight;
	double _anchorYPosition;
	CGPoint _targetContentOffset;

}

@property (assign,nonatomic) unsigned long long size;                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double displayLinkTime;                   //@synthesize displayLinkTime=_displayLinkTime - In the implementation block
@property (assign,nonatomic) double previousTimestamp;                 //@synthesize previousTimestamp=_previousTimestamp - In the implementation block
@property (assign,nonatomic) double minSpace;                          //@synthesize minSpace=_minSpace - In the implementation block
@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double viewHeight;                        //@synthesize viewHeight=_viewHeight - In the implementation block
@property (assign,nonatomic) char isResting;                           //@synthesize isResting=_isResting - In the implementation block
@property (assign,nonatomic) char easingUp;                            //@synthesize easingUp=_easingUp - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;              //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,nonatomic) double anchorYPosition;                   //@synthesize anchorYPosition=_anchorYPosition - In the implementation block
-(double)scale;
-(void)_freeArrays;
-(double)anchorYPosition;
-(double*)targetOriginArray;
-(double*)minHeightArray;
-(void)setTargetOriginArray:(double*)arg1 minHeights:(double*)arg2 orientations:(unsigned long long*)arg3 ;
-(void)setAnchorYPosition:(double)arg1 ;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(double*)currentOriginsForItemsInRange:(NSRange)arg1 withMovement:(double)arg2 ;
-(double)displayLinkTime;
-(void)setDisplayLinkTime:(double)arg1 ;
-(double)previousTimestamp;
-(void)setPreviousTimestamp:(double)arg1 ;
-(double)minSpace;
-(void)setMinSpace:(double)arg1 ;
-(double)viewHeight;
-(void)setViewHeight:(double)arg1 ;
-(void)setIsResting:(char)arg1 ;
-(char)easingUp;
-(void)setEasingUp:(char)arg1 ;
-(CGPoint)targetContentOffset;
-(id)init;
-(void)dealloc;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(char)isResting;
-(void)setScale:(double)arg1 ;
@end
