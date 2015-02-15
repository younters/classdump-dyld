/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistiveControlSupport/AssistiveControlSupport-Structs.h>
#import <AssistiveControlSupport/ACSHView.h>

@interface ACSHResizeHandlesView : ACSHView {

	id* _resizeHandles;

}
+(double)handleSize;
+(void)initialize;
-(void)initView;
-(void)resumeTracking;
-(int)resizeTypeForView:(id)arg1 ;
-(void)suspendTracking;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(char)isFlipped;
-(char)wantsUpdateLayer;
@end
