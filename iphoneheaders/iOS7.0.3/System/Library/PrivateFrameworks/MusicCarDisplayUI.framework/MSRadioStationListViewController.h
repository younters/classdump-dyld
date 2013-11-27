/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicCarDisplayUI/MSTableViewController.h>

@class NSMutableDictionary, NSArray;

@interface MSRadioStationListViewController : MSTableViewController {

	NSMutableDictionary* _stationArtworkRequests;
	NSArray* _stations;

}

@property (nonatomic,retain) NSArray * stations;              //@synthesize stations=_stations - In the implementation block
-(id)stations;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(void)setStations:(id)arg1 ;
-(void).cxx_destruct;
@end
