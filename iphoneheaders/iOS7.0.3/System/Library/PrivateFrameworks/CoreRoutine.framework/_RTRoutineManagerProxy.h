/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreRoutine/RTFrameworkProtocol.h>

@class RTRoutineManager;

@interface _RTRoutineManagerProxy : NSObject <RTFrameworkProtocol> {

	RTRoutineManager* _routineManager;

}

@property (assign,nonatomic,__weak) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
-(void)setRoutineManager:(id)arg1 ;
-(id)initWithRoutineManager:(id)arg1 ;
-(id)routineManager;
-(void).cxx_destruct;
@end
