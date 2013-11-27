/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Radio/RadioManagedObjectWrapperProtocol.h>

@class NSManagedObjectContext, NSManagedObject, NSString, NSDate;

@interface RadioTrackHistory : NSObject <RadioManagedObjectWrapperProtocol> {

	NSManagedObjectContext* _context;
	NSManagedObject* _managedObject;

}

@property (assign,nonatomic) long long trackStoreID; 
@property (assign,nonatomic) long long stationID; 
@property (assign,nonatomic) NSString * stationHash; 
@property (assign,nonatomic) NSString * stationName; 
@property (assign,nonatomic) NSDate * date; 
@property (nonatomic,readonly) NSManagedObject * managedObject;               //@synthesize managedObject=_managedObject - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * context;              //@synthesize context=_context - In the implementation block
-(long long)stationID;
-(id)stationHash;
-(id)stationName;
-(long long)trackStoreID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)date;
-(id)context;
-(void)setDate:(id)arg1 ;
-(id)managedObject;
-(void)setStationID:(long long)arg1 ;
-(void)setStationHash:(id)arg1 ;
-(void)_radioModelWasDeletedNotification:(id)arg1 ;
-(id)initWithManagedObject:(id)arg1 context:(id)arg2 ;
-(void)setTrackStoreID:(long long)arg1 ;
-(void)setStationName:(id)arg1 ;
-(void).cxx_destruct;
@end
