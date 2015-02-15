/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/systemstats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <systemstats/systemstats-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface PowerStateChange : PBCodable {

	unsigned long long _absoluteTime;
	unsigned long long _change;
	unsigned long long _wallTime;
	char _isFullyCharged;
	SCD_Struct_Po6 _has;

}

@property (assign,nonatomic) unsigned long long absoluteTime;              //@synthesize absoluteTime=_absoluteTime - In the implementation block
@property (assign,nonatomic) unsigned long long change;                    //@synthesize change=_change - In the implementation block
@property (assign,nonatomic) char hasIsFullyCharged; 
@property (assign,nonatomic) char isFullyCharged;                          //@synthesize isFullyCharged=_isFullyCharged - In the implementation block
@property (assign,nonatomic) char hasWallTime; 
@property (assign,nonatomic) unsigned long long wallTime;                  //@synthesize wallTime=_wallTime - In the implementation block
-(unsigned long long)absoluteTime;
-(void)setAbsoluteTime:(unsigned long long)arg1 ;
-(unsigned long long)wallTime;
-(char)hasIsFullyCharged;
-(char)isFullyCharged;
-(void)setIsFullyCharged:(char)arg1 ;
-(void)setHasIsFullyCharged:(char)arg1 ;
-(void)setWallTime:(unsigned long long)arg1 ;
-(char)hasWallTime;
-(void)setHasWallTime:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)prettyPrint;
-(void)setChange:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(unsigned long long)change;
@end
