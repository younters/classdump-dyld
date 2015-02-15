/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationView.h>

@class CALayer;

@interface _MKGemUserLocationView : MKUserLocationView {

	CALayer* _gemLayer;

}
-(void)_setMapType:(unsigned long long)arg1 ;
-(id)_pulseLayer;
-(id)_pulseAnimation;
-(NSImage*)_headingImageForAccuracy:(double)arg1 anchorPoint:(CGPoint*)arg2 ;
-(id)_baseLayer;
-(void)_updateLayers;
-(NSImage*)normalImage;
-(NSImage*)staleImage;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupLayers;
@end
