/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class VKMapSnapshot, NSImage;

@interface MKMapSnapshot : NSObject {

	VKMapSnapshot* _snapshot;
	NSImage* _image;

}

@property (nonatomic,readonly) NSImage * image;              //@synthesize image=_image - In the implementation block
-(id)snapshotWithAnnotationView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(CGPoint)arg2 ;
-(id)_initWithLoDPISnapshot:(id)arg1 hiDPISnapshot:(id)arg2 ;
-(CGPoint)_coordinateForPoint:(CGPoint)arg1 ;
-(CGPoint)pointForCoordinate:(CGPoint)arg1 ;
-(NSImage *)image;
@end
