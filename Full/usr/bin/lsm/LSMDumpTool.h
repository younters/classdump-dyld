/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/lsm
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <lsm/lsm-Structs.h>
#import <lsm/LSMParsingTool.h>

@interface LSMDumpTool : LSMParsingTool
-(void)processText:(LSMTextRef)arg1 named:(id)arg2 ;
-(void)dumpIndexingPowers;
-(void)dumpCategoryAndTokenVectors;
-(void)dumpMatrix:(const float*)arg1 toFile:(id)arg2 nRows:(unsigned long long)arg3 nCols:(unsigned long long)arg4 leadingDim:(unsigned long long)arg5 ;
-(int)run;
@end
