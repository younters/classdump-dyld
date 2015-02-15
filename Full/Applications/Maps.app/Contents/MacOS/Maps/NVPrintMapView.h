/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <AppKit/NSImageView.h>

@class MKScaleView, NSMutableDictionary, MKMapSnapshotter, NVPrintTemplateWindowController, MKMapSnapshot, NVRoute, NSOrderedSet, NSString, NVRouteStep, NVPlace, NSAttributedString, NSImage, NSFont;

@interface NVPrintMapView : NSImageView {

	char _loaded;
	char _useMetric;
	char _useYardsForShortDistances;
	MKScaleView* _scaleView;
	SCD_Struct_NV6 _rect;
	char _autoFetch;
	NSMutableDictionary* _snapshotJobsCache;
	MKMapSnapshotter* _snapshotter;
	char _shouldDrawDestinationCallout;
	char _shouldDrawDistanceSigns;
	char _shouldDisplayScale;
	NVPrintTemplateWindowController* _superController;
	MKMapSnapshot* _snapshot;
	NVRoute* _route;
	NSOrderedSet* _pinPlaces;
	NSString* _title;
	NVRouteStep* _step;
	NVPlace* _routeStart;
	NVPlace* _routeEnd;

}

@property (assign,nonatomic,__weak) NVPrintTemplateWindowController * superController;              //@synthesize superController=_superController - In the implementation block
@property (nonatomic,retain) MKMapSnapshot * snapshot;                                              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) NVRoute * route;                                                       //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) NSOrderedSet * pinPlaces;                                              //@synthesize pinPlaces=_pinPlaces - In the implementation block
@property (nonatomic,retain) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) char shouldDrawDestinationCallout;                                     //@synthesize shouldDrawDestinationCallout=_shouldDrawDestinationCallout - In the implementation block
@property (assign,nonatomic) char shouldDrawDistanceSigns;                                          //@synthesize shouldDrawDistanceSigns=_shouldDrawDistanceSigns - In the implementation block
@property (assign,nonatomic) char shouldDisplayScale;                                               //@synthesize shouldDisplayScale=_shouldDisplayScale - In the implementation block
@property (nonatomic,retain) NVRouteStep * step;                                                    //@synthesize step=_step - In the implementation block
@property (nonatomic,retain) NVPlace * routeStart;                                                  //@synthesize routeStart=_routeStart - In the implementation block
@property (nonatomic,retain) NVPlace * routeEnd;                                                    //@synthesize routeEnd=_routeEnd - In the implementation block
@property (nonatomic,readonly) NSAttributedString * arrivalAddress; 
@property (nonatomic,readonly) NSImage * calloutIcon; 
@property (nonatomic,readonly) NSFont * calloutFont; 
@property (nonatomic,readonly) NSMutableDictionary * snapshotJobsCache; 
-(NVPrintTemplateWindowController *)superController;
-(void)setSuperController:(NVPrintTemplateWindowController *)arg1 ;
-(void)setPinPlaces:(NSOrderedSet *)arg1 ;
-(id)cacheKeyFromRect:(CGRect)arg1 ;
-(NSMutableDictionary *)snapshotJobsCache;
-(void)setupScaleIfNecessary;
-(char)shouldDisplayScale;
-(NSFont *)calloutFont;
-(NSAttributedString *)arrivalAddress;
-(NSImage *)calloutIcon;
-(CGPoint)pointForCoordinate:(SCD_Struct_NV5)arg1 topLeftOrigin:(char)arg2 ;
-(char)distanceBetweenA:(CGPoint)arg1 andB:(CGPoint)arg2 greaterThan:(double)arg3 ;
-(void)drawScale:(CGRect)arg1 ;
-(void)drawStep:(CGRect)arg1 ;
-(void)drawRoute:(CGRect)arg1 ;
-(char)shouldDrawDistanceSigns;
-(void)drawDistanceSigns;
-(void)drawPinPlaces:(CGRect)arg1 ;
-(char)shouldDrawDestinationCallout;
-(void)drawDestinationCallout;
-(void)drawBorder;
-(double)fittingCalloutWidth;
-(void)drawCalloutTextInRect:(CGRect)arg1 ;
-(NSOrderedSet *)pinPlaces;
-(void)waitForAutosnapshot;
-(void)autoFetchWithMapRect:(SCD_Struct_NV6)arg1 ;
-(void)fetchSnapshotWithMapRect:(SCD_Struct_NV6)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldDisplayScale:(char)arg1 ;
-(double)niceSegmentLengthWithLowerBound:(double)arg1 ;
-(void)setShouldDrawDestinationCallout:(char)arg1 ;
-(void)setShouldDrawDistanceSigns:(char)arg1 ;
-(MKMapSnapshot *)snapshot;
-(void)setupLocale;
-(void)setRoute:(NVRoute *)arg1 ;
-(NVRoute *)route;
-(void)setRouteStart:(NVPlace *)arg1 ;
-(void)setRouteEnd:(NVPlace *)arg1 ;
-(NVPlace *)routeStart;
-(NVPlace *)routeEnd;
-(NVRouteStep *)step;
-(void)setStep:(NVRouteStep *)arg1 ;
-(void)drawTitle;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSnapshot:(MKMapSnapshot *)arg1 ;
@end
