/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUMemory_Base.h>
#import <Symbolication/VMUMemory.h>

@protocol VMUMemory;
@class , VMUArchitecture;

@interface VMUMemory_Handle : VMUMemory_Base <VMUMemory> {

	<VMUMemory>* _parent;
	char* _data;
	VMURange _addressRange;
	VMUArchitecture* _architecture;

}
-(void)dealloc;
-(id)description;
-(id)view;
-(VMURange)addressRange;
-(id)architecture;
-(id)memoryFromSubRange:(VMURange)arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3 ;
-(BOOL)isContiguous;
-(id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2 ;
-(id)swappedView;
-(id)initWithParent:(id)arg1 addressRange:(VMURange)arg2 architecture:(id)arg3 data:(char*)arg4 ;
@end
