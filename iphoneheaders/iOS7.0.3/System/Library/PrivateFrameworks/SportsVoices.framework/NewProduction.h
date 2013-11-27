/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsVoices/GenericProduction.h>

@class NSArray, SimpleSlotSequence;

@interface NewProduction : GenericProduction {

	NSArray* _indices;
	SimpleSlotSequence* _overlays;

}

@property (retain) NSArray * indices;                          //@synthesize indices=_indices - In the implementation block
@property (retain) SimpleSlotSequence * overlays;              //@synthesize overlays=_overlays - In the implementation block
+(id)instanceFromPlist:(id)arg1 ;
+(id)productionWithSimpleSlotSequence:(id)arg1 ;
-(id)initFromPlist:(id)arg1 ;
-(id)initWithOverlays:(id)arg1 indices:(id)arg2 ;
-(id)initWithSimpleSlotSequence:(id)arg1 ;
-(void)setIndices:(id)arg1 ;
-(void)setOverlays:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)indices;
-(id)overlays;
@end
