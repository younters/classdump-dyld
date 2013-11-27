/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCControllerButtonInput.h>

@class _GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : _GCControllerButtonInput {

	_GCControllerAxisInput* _axis;
	BOOL _positive;

}

@property (__weak) _GCControllerAxisInput * axis;                  //@synthesize axis=_axis - In the implementation block
@property (getter=isPositive,readonly) BOOL positive;              //@synthesize positive=_positive - In the implementation block
-(id)collection;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(id)initWithAxis:(id)arg1 positive:(BOOL)arg2 ;
-(BOOL)isPositive;
-(id)description;
-(float)value;
-(void).cxx_destruct;
-(id)axis;
-(void)setAxis:(id)arg1 ;
@end
