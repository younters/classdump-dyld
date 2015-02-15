/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/airportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CWChannel, NSSet;

@interface CWAutoJoinChannel : NSObject {

	CWChannel* _channel;
	NSSet* _ssidList;
	double _weight;

}

@property (nonatomic,copy) CWChannel * channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSSet * ssidList;                 //@synthesize ssidList=_ssidList - In the implementation block
@property (assign,nonatomic) double weight;                  //@synthesize weight=_weight - In the implementation block
-(NSSet *)ssidList;
-(void)setSsidList:(NSSet *)arg1 ;
-(char)isEqualToAutoJoinChannel:(id)arg1 ;
-(void)setWeight:(double)arg1 ;
-(double)weight;
-(CWChannel *)channel;
-(void)setChannel:(CWChannel *)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
