/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCVirtualPort.h>

@interface QCObjectPort : QCVirtualPort {

	void** _unused4[5];

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)object;
-(char)setValue:(id)arg1 ;
-(char)setObject:(id)arg1 ;
-(Class)objectClass;
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(char)canConnectToPort:(id)arg1 ;
-(char)takeValue:(id)arg1 fromPort:(id)arg2 ;
-(char)acceptValuesOfClass:(Class)arg1 ;
-(Class)valueClass;
@end
