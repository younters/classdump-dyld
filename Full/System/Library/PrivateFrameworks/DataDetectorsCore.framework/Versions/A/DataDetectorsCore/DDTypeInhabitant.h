/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface DDTypeInhabitant : NSObject {

	unsigned long long _hash;
	NSArray* _names;

}
+(id)inhabitantWithName:(id)arg1 ;
+(id)emptyInhabitant;
-(id)initWithNames:(id)arg1 ;
-(id)typeInhabitantByJoining:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
@end
