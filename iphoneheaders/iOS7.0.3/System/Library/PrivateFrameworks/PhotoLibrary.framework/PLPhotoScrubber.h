/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIControl.h>

@protocol PLPhotoScrubberDataSource;
@class , UIView, NSMutableArray, UIImageView;

@interface PLPhotoScrubber : UIControl {

	<PLPhotoScrubberDataSource>* _dataSource;
	unsigned _displayedImageIndex;
	int _prospectiveImageIndex;
	double _timeOfLastTouch;
	double _lastUpdate;
	UIView* _thumbnailTrackView;
	CGRect _thumbnailBounds;
	float _imagesPerViewRatio;
	NSMutableArray* _thumbnailViews;
	UIImageView* _loupeView;
	int _loupeIndex;
	unsigned _imageCount;
	BOOL _scrubbing;
	BOOL _deferImageLoading;
	BOOL _loadImagesSynchronously;

}

@property (assign,nonatomic,@dynamic) <PLPhotoScrubberDataSource> * dataSource; 
-(BOOL)isScrubbing;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)setDataSource:(id)arg1 reloadData:(BOOL)arg2 ;
-(void)reloadImageAtIndex:(int)arg1 ;
-(void)setDeferImageLoading:(BOOL)arg1 ;
-(void)reloadDataWithNewDisplayedIndex:(unsigned)arg1 ;
-(int)displayedImageIndex;
-(void)setImage:(id)arg1 atIndex:(int)arg2 ;
-(void)setLoupeImage:(id)arg1 ;
-(void)setDisplayedImageIndex:(int)arg1 ;
-(void)_updateLoupe:(BOOL)arg1 force:(BOOL)arg2 ;
-(unsigned)_imageIndexFromLocation:(CGPoint)arg1 ;
-(void)_setDisplayedImageIndex:(int)arg1 immediately:(BOOL)arg2 ;
-(void)_setIsScrubbing:(BOOL)arg1 ;
-(unsigned)_thumbnailIndexFromLocation:(CGPoint)arg1 ;
-(void)_setDisplayedImageIndex:(id)arg1 ;
-(void)_updateLoupeWithTouch:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(CGPoint)_centerForImageAtIndex:(int)arg1 ;
@end
