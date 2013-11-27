/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@class GEOVoltaireRasterTileTrafficData, VKIntObjectMap, NSMutableArray, NSArray;

@interface VKRasterTrafficTile : VKTile {

	GEOVoltaireRasterTileTrafficData* _modelTile;
	VKIntObjectMap* _roadMeshes;
	VKIntObjectMap* _capMeshes;
	NSMutableArray* _incidents;

}

@property (nonatomic,readonly) NSArray * incidents;              //@synthesize incidents=_incidents - In the implementation block
-(void)dealloc;
-(id)incidents;
-(id)initWithKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 trafficData:(id)arg3 ;
-(void)_buildMeshes;
-(void)_buildIncidents;
-(id)capMeshVendorForSpeed:(int)arg1 ;
-(id)roadMeshVendorForSpeed:(int)arg1 ;
@end
