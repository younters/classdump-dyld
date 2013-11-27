/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreUI/CUIPSDGradientOpacityStop.h>
#import <CoreFoundation/NSCoding.h>

@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {

	float leadOutOpacity;

}
+(void)initialize;
+(id)doubleOpacityStopWithLocation:(float)arg1 leadInOpacity:(float)arg2 leadOutOpacity:(float)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(float)leadOutOpacity;
-(BOOL)isDoubleStop;
-(id)initWithLocation:(float)arg1 leadInOpacity:(float)arg2 leadOutOpacity:(float)arg3 ;
-(float)leadInOpacity;
@end
