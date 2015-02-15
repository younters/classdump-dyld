/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/airportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <airportd/airportd-Structs.h>
#import <airportd/NSCopying.h>

@class NSMutableArray;

@interface CWScanCacheChannel : NSObject <NSCopying> {

	long long _channel;
	double _timestamp;
	long long _wakeCounter;
	long long _autoJoinCounter;
	NSMutableArray* _probeSSIDs;
	NSMutableArray* _scanResults;

}

@property (assign,nonatomic) long long channel;                         //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long wakeCounter;                     //@synthesize wakeCounter=_wakeCounter - In the implementation block
@property (assign,nonatomic) long long autoJoinCounter;                 //@synthesize autoJoinCounter=_autoJoinCounter - In the implementation block
@property (nonatomic,retain) NSMutableArray * probeSSIDs;               //@synthesize probeSSIDs=_probeSSIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * scanResults;              //@synthesize scanResults=_scanResults - In the implementation block
-(void)setWakeCounter:(long long)arg1 ;
-(void)setAutoJoinCounter:(long long)arg1 ;
-(long long)wakeCounter;
-(long long)autoJoinCounter;
-(void)setProbeSSIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)probeSSIDs;
-(long long)channel;
-(void)setChannel:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setScanResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)scanResults;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
@end
