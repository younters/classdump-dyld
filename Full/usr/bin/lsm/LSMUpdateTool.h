/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/lsm
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <lsm/lsm-Structs.h>
#import <lsm/LSMParsingTool.h>

@interface LSMUpdateTool : LSMParsingTool {

	unsigned fCat;

}
-(int)openMap;
-(void)processText:(LSMTextRef)arg1 named:(id)arg2 ;
-(void)nextCategory;
-(int)run;
@end
