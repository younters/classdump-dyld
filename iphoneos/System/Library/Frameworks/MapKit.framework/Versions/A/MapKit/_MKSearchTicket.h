/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/_MKTicket.h>
#import <MapKit/MKMapServiceSearchTicket.h>

@class NSString, GEOMapServiceTraits, NSArray, GEOMapRegion, NSError;

@interface _MKSearchTicket : _MKTicket <MKMapServiceSearchTicket>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSArray * exactMapItems; 
@property (nonatomic,readonly) NSArray * refinedMapItems; 
@property (nonatomic,readonly) GEOMapRegion * boundingRegion; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSString * searchQuery; 
-(id)initWithSearchTicket:(id)arg1 ;
-(NSString *)searchQuery;
@end
