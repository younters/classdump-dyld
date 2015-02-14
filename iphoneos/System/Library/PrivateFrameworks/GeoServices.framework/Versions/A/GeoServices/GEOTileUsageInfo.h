/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable;

@interface GEOTileUsageInfo : NSObject {

	double _startTime;
	double _endTime;
	NSMapTable* _tileStyleToCount;
	unsigned long long _dataLength;

}

@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSMapTable * tileStyleToCount;              //@synthesize tileStyleToCount=_tileStyleToCount - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLength;              //@synthesize dataLength=_dataLength - In the implementation block
-(double)startTime;
-(double)endTime;
-(unsigned long long)dataLength;
-(void)addTileKey:(const GEOTileKey*)arg1 dataLength:(unsigned long long)arg2 ;
-(NSMapTable *)tileStyleToCount;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(void)setEndTime:(double)arg1 ;
@end
