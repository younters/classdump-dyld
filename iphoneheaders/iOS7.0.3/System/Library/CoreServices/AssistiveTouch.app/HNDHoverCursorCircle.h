/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface HNDHoverCursorCircle : UIView {

	BOOL _fill;
	BOOL _dashed;
	BOOL _selected;
	UIView* _innerCircle;
	float _radiusMultiplier;

}

@property (assign,nonatomic) BOOL fill;                            //@synthesize fill=_fill - In the implementation block
@property (assign,nonatomic) BOOL dashed;                          //@synthesize dashed=_dashed - In the implementation block
@property (assign,nonatomic) BOOL selected;                        //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) float radiusMultiplier;               //@synthesize radiusMultiplier=_radiusMultiplier - In the implementation block
@property (nonatomic,@dynamic,readonly) float radius; 
-(void)showInnerCircle:(BOOL)arg1 ;
-(void)setDashed:(BOOL)arg1 ;
-(void)setRadiusMultiplier:(float)arg1 ;
-(float)radiusMultiplier;
-(BOOL)dashed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)fill;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setFill:(BOOL)arg1 ;
-(float)radius;
@end
