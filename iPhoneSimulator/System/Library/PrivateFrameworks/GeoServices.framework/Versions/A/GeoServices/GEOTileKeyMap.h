/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileKeyMap : NSObject {

	long long _type;
	void* _map;

}
-(id)contentsDescription;
-(id)initWithMapType:(long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(const GEOTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
-(void)removeObjectForKey:(const GEOTileKey*)arg1 ;
@end
