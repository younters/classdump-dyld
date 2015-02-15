/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSSegmentedControl.h>

@class MKMapView;

@interface MKZoomSegmentedControl : NSSegmentedControl {

	MKMapView* mapView;

}

@property (assign,nonatomic,__weak) MKMapView * mapView; 
-(long long)_selectedIndexForEvent:(id)arg1 ;
-(long long)indexOfZoomInSegment;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)mouseDown:(id)arg1 ;
-(char)canBecomeKeyView;
@end
