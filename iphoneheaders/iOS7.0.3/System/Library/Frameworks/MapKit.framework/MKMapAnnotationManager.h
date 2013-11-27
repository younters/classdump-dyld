/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MKAnnotationManager.h>

@class MKAnnotationView;

@interface MKMapAnnotationManager : MKAnnotationManager {

	MKAnnotationView* _userLocationView;
	BOOL _addedUserLocationAnnotation;

}
-(BOOL)internalAnnotationAllowsCustomRepresentation:(id)arg1 ;
-(id)_defaultUserLocationAnnotationView:(id)arg1 ;
-(id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(void)cleanUpAnnotationRepresentationForRemoval:(id)arg1 ;
-(BOOL)annotationIsInternal:(id)arg1 ;
-(id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1 ;
-(void)dealloc;
@end
