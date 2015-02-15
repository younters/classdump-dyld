/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <AppKit/NSView.h>

@protocol QTHUDMediaTimelineViewDelegate;
@class QTHUDMediaTimelineTracksView, NSArray, NSSet;

@interface QTHUDMediaTimelineView : NSView {

	SCD_Struct_QT12 _mediaDuration;
	SCD_Struct_QT12 _mediaTimeOffset;
	double _minimumPointsPerSecond;
	QTHUDMediaTimelineTracksView* _tracksView;
	char _hasEnclosingScrollView;
	char _pinAtMinimumPointsPerSecond;
	char _mutatingTracksViewTimes;
	id<QTHUDMediaTimelineViewDelegate> _delegate;

}

@property (assign,nonatomic) char showsTrackPreviews; 
@property (assign,nonatomic) SCD_Struct_QT12 mediaDuration; 
@property (assign,nonatomic) SCD_Struct_QT12 mediaTimeOffset; 
@property (assign,nonatomic) SCD_Struct_QT12 selectionStart; 
@property (assign,nonatomic) SCD_Struct_QT12 selectionEnd; 
@property (assign,nonatomic) SCD_Struct_QT12 minimumSelectionDuration; 
@property (assign,nonatomic) SCD_Struct_QT12 maximumSelectionDuration; 
@property (nonatomic,copy) NSArray * selectionDetents; 
@property (assign,nonatomic) char usesSelectionDetents; 
@property (assign,nonatomic) SCD_Struct_QT12 currentMediaTime; 
@property (nonatomic,copy) NSSet * rangeMarkers; 
@property (assign,nonatomic) char showsRangeMarkers; 
@property (assign) double pointsPerSecond; 
@property (nonatomic,readonly) double minimumPointsPerSecond; 
@property (nonatomic,readonly) double maximumPointsPerSecond; 
@property (nonatomic,readonly) char canChangePointsPerSecond; 
@property (assign,nonatomic) id<QTHUDMediaTimelineViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)positionForMediaTime:(SCD_Struct_QT12)arg1 outOfMediaDuration:(SCD_Struct_QT12)arg2 timeOffset:(SCD_Struct_QT12)arg3 inViewWithWidth:(double)arg4 ;
+(SCD_Struct_QT12)mediaTimeForPosition:(double)arg1 outOfMediaDuration:(SCD_Struct_QT12)arg2 timeOffset:(SCD_Struct_QT12)arg3 inViewWithWidth:(double)arg4 ;
-(SCD_Struct_QT12)selectionStart;
-(void)setSelectionStart:(SCD_Struct_QT12)arg1 ;
-(SCD_Struct_QT12)selectionEnd;
-(void)setSelectionEnd:(SCD_Struct_QT12)arg1 ;
-(char)showsTrackPreviews;
-(id)timelineTracks;
-(SCD_Struct_QT12)mediaTimeOffset;
-(SCD_Struct_QT12)minimumSelectionDuration;
-(void)setCurrentMediaTime:(SCD_Struct_QT12)arg1 ;
-(SCD_Struct_QT12)maximumSelectionDuration;
-(SCD_Struct_QT12)mediaDuration;
-(SCD_Struct_QT12)currentMediaTime;
-(char)showsRangeMarkers;
-(char)usesSelectionDetents;
-(NSArray *)selectionDetents;
-(unsigned long long)countForTimelineTracks;
-(void)insertObject:(id)arg1 inTimelineTracksAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromTimelineTracksAtIndex:(unsigned long long)arg1 ;
-(void)setShowsTrackPreviews:(char)arg1 ;
-(void)setMediaDuration:(SCD_Struct_QT12)arg1 ;
-(void)setMediaTimeOffset:(SCD_Struct_QT12)arg1 ;
-(void)setUsesSelectionDetents:(char)arg1 ;
-(NSSet *)rangeMarkers;
-(void)setRangeMarkers:(NSSet *)arg1 ;
-(void)setShowsRangeMarkers:(char)arg1 ;
-(void)setMinimumSelectionDuration:(SCD_Struct_QT12)arg1 ;
-(void)setMaximumSelectionDuration:(SCD_Struct_QT12)arg1 ;
-(void)setSelectionDetents:(NSArray *)arg1 ;
-(void)superviewFrameDidChange:(id)arg1 ;
-(void)rescalePointsPerSecond;
-(double)minimumPointsPerSecond;
-(double)maximumPointsPerSecond;
-(double)pointsPerSecond;
-(void)setPointsPerSecond:(double)arg1 ;
-(char)canChangePointsPerSecond;
-(void)setDelegate:(id<QTHUDMediaTimelineViewDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<QTHUDMediaTimelineViewDelegate>)delegate;
-(void)viewDidMoveToSuperview;
-(void)viewWillMoveToSuperview:(id)arg1 ;
@end
