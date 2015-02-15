/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/Feedback Assistant-Structs.h>
#import <AppKit/NSView.h>

@class NSMutableArray;

@interface FBAStackView : NSView {

	double _viewSpacing;
	NSMutableArray* _managedViews;

}

@property (assign,nonatomic) double viewSpacing;               //@synthesize viewSpacing=_viewSpacing - In the implementation block
@property (retain) NSMutableArray * managedViews;              //@synthesize managedViews=_managedViews - In the implementation block
+(char)requiresConstraintBasedLayout;
-(void)setManagedViews:(NSMutableArray *)arg1 ;
-(void)setViewSpacing:(double)arg1 ;
-(id)constraintsForAllManagedViews;
-(void)appendView:(id)arg1 ;
-(NSMutableArray *)managedViews;
-(void)removeAllViews;
-(id)constraintPinningView:(id)arg1 belowView:(id)arg2 ;
-(id)leadingAndTrailingConstraintsForView:(id)arg1 ;
-(id)constraintPinningViewToTop:(id)arg1 ;
-(id)constraintPinningViewToBottom:(id)arg1 ;
-(double)viewSpacing;
-(void)insertView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)prependView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)updateConstraints;
-(CGSize)intrinsicContentSize;
-(void)layout;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setViews:(id)arg1 ;
@end
