/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBService.h>

@class NSNumber, CBUUID, NSArray;

@interface CBMutableService : CBService {

	NSNumber* _ID;

}

@property (nonatomic,retain) CBUUID * UUID; 
@property (assign,nonatomic) char isPrimary; 
@property (retain) NSArray * includedServices; 
@property (retain) NSArray * characteristics; 
@property (retain) NSNumber * ID;                           //@synthesize ID=_ID - In the implementation block
-(void)setUUID:(CBUUID *)arg1 ;
-(CBUUID *)UUID;
-(void)setIsPrimary:(char)arg1 ;
-(char)isPrimary;
-(id)initWithType:(id)arg1 primary:(char)arg2 ;
-(void)setID:(NSNumber *)arg1 ;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSArray *)characteristics;
-(void)setIncludedServices:(NSArray *)arg1 ;
-(NSArray *)includedServices;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)ID;
@end
