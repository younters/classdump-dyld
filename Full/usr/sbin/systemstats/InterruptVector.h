/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/systemstats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <systemstats/systemstats-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface InterruptVector : PBCodable {

	unsigned long long _interruptCount;
	unsigned _cpuNumber;
	NSString* _vectorName;
	SCD_Struct_Po6 _has;

}

@property (assign,nonatomic) char hasCpuNumber; 
@property (assign,nonatomic) unsigned cpuNumber;                             //@synthesize cpuNumber=_cpuNumber - In the implementation block
@property (assign,nonatomic) char hasInterruptCount; 
@property (assign,nonatomic) unsigned long long interruptCount;              //@synthesize interruptCount=_interruptCount - In the implementation block
@property (nonatomic,readonly) char hasVectorName; 
@property (nonatomic,retain) NSString * vectorName;                          //@synthesize vectorName=_vectorName - In the implementation block
-(unsigned long long)interruptCount;
-(char)hasVectorName;
-(NSString *)vectorName;
-(void)setVectorName:(NSString *)arg1 ;
-(char)hasCpuNumber;
-(void)setCpuNumber:(unsigned)arg1 ;
-(char)hasInterruptCount;
-(void)setInterruptCount:(unsigned long long)arg1 ;
-(void)setHasCpuNumber:(char)arg1 ;
-(void)setHasInterruptCount:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)cpuNumber;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
@end
