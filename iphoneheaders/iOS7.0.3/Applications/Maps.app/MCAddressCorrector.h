/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/geocorrectiond
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ACAccountStore, ACAccount, GEOAddressCorrectionRequester, NSString, GEOLocation, MCRoutineHelper, GEOSignificantLocation, NSArray;

@interface MCAddressCorrector : NSObject {

	double _lastRunTime;
	ACAccountStore* _store;
	ACAccount* _primaryAccount;
	int _daysToNextRun;
	GEOAddressCorrectionRequester* _initRequester;
	GEOAddressCorrectionRequester* _updateRequester;
	NSString* _addressID;
	GEOLocation* _addressLocation;
	MCRoutineHelper* _routineHelper;
	GEOSignificantLocation* _exactMatchLocation;
	NSArray* _nearbyLocations;

}

@property (nonatomic,retain) GEOLocation * addressLocation;                            //@synthesize addressLocation=_addressLocation - In the implementation block
@property (nonatomic,retain) NSString * addressID;                                     //@synthesize addressID=_addressID - In the implementation block
@property (nonatomic,retain) GEOSignificantLocation * exactMatchLocation;              //@synthesize exactMatchLocation=_exactMatchLocation - In the implementation block
@property (nonatomic,retain) NSArray * nearbyLocations;                                //@synthesize nearbyLocations=_nearbyLocations - In the implementation block
-(void)startProcessing;
-(id)_primaryAccount;
-(void)_startAddressCorrection;
-(void)_findExactSignificantLocationAtLocation;
-(void)_findNearbySignificantLocationAtAddressLocation;
-(void)setExactMatchLocation:(id)arg1 ;
-(void)_sendUpdateResponse;
-(void)setNearbyLocations:(id)arg1 ;
-(id)exactMatchLocation;
-(id)nearbyLocations;
-(void)dealloc;
-(id)init;
-(void)setAddressID:(id)arg1 ;
-(id)addressID;
-(void)setAddressLocation:(id)arg1 ;
-(id)addressLocation;
@end
