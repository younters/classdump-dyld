/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKMapView.h>
#import <CalendarUI/NSAccessibilityImage.h>

@class MKMapItem, NSString;

@interface EKUIMapView : MKMapView <NSAccessibilityImage> {

	char _directionsAreWalking;
	MKMapItem* _location;
	MKMapItem* _startLocation;
	NSString* _searchString;

}

@property (retain) MKMapItem * location;                            //@synthesize location=_location - In the implementation block
@property (retain) MKMapItem * startLocation;                       //@synthesize startLocation=_startLocation - In the implementation block
@property (copy) NSString * searchString;                           //@synthesize searchString=_searchString - In the implementation block
@property (assign) char directionsAreWalking;                       //@synthesize directionsAreWalking=_directionsAreWalking - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MKMapItem *)startLocation;
-(void)setStartLocation:(MKMapItem *)arg1 ;
-(char)directionsAreWalking;
-(void)setDirectionsAreWalking:(char)arg1 ;
-(id)accessibilityLabel;
-(void)scrollWheel:(id)arg1 ;
-(void)resetCursorRects;
-(void)mouseDown:(id)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(MKMapItem *)location;
-(void)setLocation:(MKMapItem *)arg1 ;
@end
