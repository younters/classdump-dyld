/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:33:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/SystemProfiler/SPComponentReporter.spreporter/Contents/MacOS/SPComponentReporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SPComponentReporter/SPComponentReporter-Structs.h>
#import <SPComponentReporter/SPComponentListing.h>

@interface SPComponentLister : NSObject <SPComponentListing>
+(id)_stringWithHandle:(char**)arg1 ;
+(id)_stringWithOSType:(unsigned)arg1 ;
-(id)itemFromThing:(id)arg1 ;
-(id)getRegisteredThingListForComponentDescriptor:(ComponentDescription)arg1 ;
@end
