/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface CMGyroDataInternal : NSObject <NSCopying> {

	SCD_Struct_CM5 fRotationRate;

}
-(void)setRotationRate:(SCD_Struct_CM5)arg1 ;
-(id)initWithRotationRate:(SCD_Struct_CM5)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id).cxx_construct;
@end
