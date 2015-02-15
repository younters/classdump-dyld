/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Finder/Finder-Structs.h>
@interface TTargetActionFunctor : NSObject {

	function<void ()>* _functor;
	long long _ownerValidatorID;

}

@property (assign) long long ownerValidatorID;              //@synthesize ownerValidatorID=_ownerValidatorID - In the implementation block
+(id)targetActionFunctor:(const function<void ()>*)arg1 ;
-(id)initWithFunctor:(const function<void ()>*)arg1 ;
-(void)action:(id)arg1 ;
-(long long)ownerValidatorID;
-(void)setOwnerValidatorID:(long long)arg1 ;
@end
