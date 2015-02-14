/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/Versions/A/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <FMF/NSCopying.h>
#import <FMF/NSSecureCoding.h>
#import <FMF/MKAnnotation.h>

@class NSString, FMFHandle, CLLocation, NSDate;

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, MKAnnotation> {

	char _locatingInProgress;
	FMFHandle* _handle;
	CLLocation* _location;
	NSString* _longAddress;
	NSDate* _timestamp;
	NSString* _label;
	NSString* _shortAddressString;
	double _maxLocatingInterval;
	double _TTL;

}

@property (retain) FMFHandle * handle;                                        //@synthesize handle=_handle - In the implementation block
@property (retain) CLLocation * location;                                     //@synthesize location=_location - In the implementation block
@property (copy,readonly) NSString * shortAddress; 
@property (copy) NSString * longAddress;                                      //@synthesize longAddress=_longAddress - In the implementation block
@property (copy) NSDate * timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (getter=isLocatingInProgress) char locatingInProgress;              //@synthesize locatingInProgress=_locatingInProgress - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FM2 coordinate; 
@property (retain) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (copy) NSString * shortAddressString;                               //@synthesize shortAddressString=_shortAddressString - In the implementation block
@property (assign) double maxLocatingInterval;                                //@synthesize maxLocatingInterval=_maxLocatingInterval - In the implementation block
@property (assign) double TTL;                                                //@synthesize TTL=_TTL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(char)supportsSecureCoding;
-(void)updateLocation:(id)arg1 ;
-(void)setMaxLocatingInterval:(double)arg1 ;
-(void)setTTL:(double)arg1 ;
-(void)setShortAddressString:(NSString *)arg1 ;
-(void)setLongAddress:(NSString *)arg1 ;
-(NSString *)shortAddressString;
-(NSString *)longAddress;
-(char)isLocatingInProgress;
-(void)setLocatingInProgress:(char)arg1 ;
-(double)maxLocatingInterval;
-(double)TTL;
-(NSString *)shortAddress;
-(id)locationAge;
-(id)locationShortAddressWithAge;
-(void)resetLocateInProgressTimer;
-(void)resetLocateInProgress:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 forHandle:(id)arg2 maxLocatingInterval:(double)arg3 TTL:(double)arg4 ;
-(void)updateHandle:(id)arg1 ;
-(FMFHandle *)handle;
-(void)setTimestamp:(NSDate *)arg1 ;
-(SCD_Struct_FM2)coordinate;
-(void)setHandle:(FMFHandle *)arg1 ;
-(id)locationShortAddressWithAgeIncludeLocating;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(NSDate *)timestamp;
-(void)setLabel:(NSString *)arg1 ;
-(char)isValid;
-(NSString *)label;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)subtitle;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
@end
