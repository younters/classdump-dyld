/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIView, UIImage;

@interface PUMultiOrientationImageView : UIView {

	NSArray* _orientedSubviews;
	UIView* _currentOrientedSubview;
	BOOL _allowsEdgeAntialiasing;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing;              //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
-(void)setImage:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentMode:(int)arg1 ;
-(id)image;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(BOOL)allowsEdgeAntialiasing;
-(void)_updateLayout;
-(void)_updateSubviews;
-(void).cxx_destruct;
@end
