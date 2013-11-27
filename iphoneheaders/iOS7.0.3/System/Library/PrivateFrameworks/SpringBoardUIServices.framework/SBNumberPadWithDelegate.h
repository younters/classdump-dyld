/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPad.h>

@protocol SBNumberPadDelegate;
@class ;

@interface SBNumberPadWithDelegate : TPNumberPad {

	<SBNumberPadDelegate>* _delegate;

}

@property (assign,nonatomic) <SBNumberPadDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)delegate;
-(id)buttonForPoint:(CGPoint)arg1 forEvent:(id)arg2 ;
-(void)buttonCancelled:(id)arg1 ;
@end
