/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSArray, NSDictionary;

@interface UIActivityGroupViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {

	BOOL _darkStyleOnLegacyApp;
	BOOL _hasActivities;
	int _activityCategory;
	NSArray* _activities;
	NSDictionary* _customActivityTitles;

}

@property (assign,nonatomic) int activityCategory;                           //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,copy) NSArray * activities;                             //@synthesize activities=_activities - In the implementation block
@property (nonatomic,copy) NSDictionary * customActivityTitles;              //@synthesize customActivityTitles=_customActivityTitles - In the implementation block
@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                      //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (assign,nonatomic) BOOL hasActivities;                             //@synthesize hasActivities=_hasActivities - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)darkStyleOnLegacyApp;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
-(void)setActivityCategory:(int)arg1 ;
-(id)initWithActivityCategory:(int)arg1 title:(id)arg2 ;
-(void)setActivities:(id)arg1 ;
-(int)activityCategory;
-(id)activities;
-(id)customActivityTitles;
-(void)setCustomActivityTitles:(id)arg1 ;
-(BOOL)hasActivities;
-(void)setHasActivities:(BOOL)arg1 ;
@end
