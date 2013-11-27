/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKTrafficSupport : NSObject
+(id)sharedTrafficSupport;
-(id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned)arg3 ;
-(void)setupTrafficIncidents;
-(id)localizedTitleForIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned)arg3 ;
-(id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2 ;
-(int)_convertType:(int)arg1 ;
-(CGImageRef)imageForGEOIncidentType:(int)arg1 contentScale:(float)arg2 ;
-(CGImageRef)imageForIncidentType:(int)arg1 contentScale:(float)arg2 ;
@end
