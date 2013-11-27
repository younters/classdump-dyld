/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MKLocationManagerOperation;
@class MKDirectionsRequest, GEODirectionsRouteRequest, GEOQuickETARequest, GEOQuickETARequester, ;

@interface MKDirections : NSObject {

	MKDirectionsRequest* _request;
	GEODirectionsRouteRequest* _geoRequest;
	GEOQuickETARequest* _etaRequest;
	GEOQuickETARequester* _etaRequester;
	<MKLocationManagerOperation>* _locationOperation;

}

@property (getter=isCalculating,nonatomic,readonly) BOOL calculating; 
-(void)_cleanupLocationOperation;
-(BOOL)isCalculating;
-(void)_establishCurrentLocationAndThen:(/*^block*/ id)arg1 ;
-(void)_calculateETAWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)calculateDirectionsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)calculateETAWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(id)initWithRequest:(id)arg1 ;
@end
