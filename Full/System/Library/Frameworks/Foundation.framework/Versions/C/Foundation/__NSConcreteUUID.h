/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSUUID.h>

@interface __NSConcreteUUID : NSUUID {

	unsigned char _uuidBytes[16];

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)UUIDString;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(void)getUUIDBytes:(unsigned char)arg1 ;
-(SCD_Struct_NS104)_cfUUIDBytes;
-(id)init;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUIDString:(id)arg1 ;
-(Class)classForCoder;
@end
