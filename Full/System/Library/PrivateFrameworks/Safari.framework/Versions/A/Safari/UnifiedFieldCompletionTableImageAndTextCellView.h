/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/UnifiedFieldCompletionTableCellView.h>

@class NSImageView, NSLayoutConstraint;

@interface UnifiedFieldCompletionTableImageAndTextCellView : UnifiedFieldCompletionTableCellView {

	NSImageView* _imageView;
	NSLayoutConstraint* _imageViewCenterYConstraint;

}

@property (assign,nonatomic) double imageViewCenterYOffset; 
-(void)_setUpConstraints;
-(void)_setUpImageView;
-(double)imageViewCenterYOffset;
-(void)setImageViewCenterYOffset:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end
