/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PACountedFrame.h>

@class NSMutableSet, NSUUID;

@interface PAAggregatedInstruction : PACountedFrame {

	NSMutableSet* _children;
	NSUUID* _binaryUuid;
	unsigned long long _offsetInBinary;

}

@property (retain) NSMutableSet * children;                          //@synthesize children=_children - In the implementation block
@property (readonly) NSUUID * binaryUuid;                            //@synthesize binaryUuid=_binaryUuid - In the implementation block
@property (readonly) unsigned long long offsetInBinary;              //@synthesize offsetInBinary=_offsetInBinary - In the implementation block
@property (readonly) char isKernel; 
-(char)isKernel;
-(id)initWithUUID:(id)arg1 andOffset:(unsigned long long)arg2 isKernel:(char)arg3 ;
-(NSUUID *)binaryUuid;
-(unsigned long long)offsetInBinary;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(NSMutableSet *)children;
-(void)setChildren:(NSMutableSet *)arg1 ;
@end
