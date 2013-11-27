/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray;

@interface GKBubbleSegmentedControl : UIControl {

	BOOL _layoutDueToSegmentChange;
	NSArray* _bubbleControls;
	float _overlap;
	int _selectedSegmentIndex;

}

@property (nonatomic,retain) NSArray * bubbleControls;                   //@synthesize bubbleControls=_bubbleControls - In the implementation block
@property (assign,nonatomic) float overlap;                              //@synthesize overlap=_overlap - In the implementation block
@property (assign,nonatomic) int selectedSegmentIndex;                   //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (assign,nonatomic) BOOL layoutDueToSegmentChange;              //@synthesize layoutDueToSegmentChange=_layoutDueToSegmentChange - In the implementation block
-(void)didSelectBubble:(id)arg1 ;
-(void)setBubbleControls:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBubbleControls:(id)arg1 ;
-(id)bubbleControls;
-(BOOL)layoutDueToSegmentChange;
-(void)setLayoutDueToSegmentChange:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setSelectedSegmentIndex:(int)arg1 ;
-(int)selectedSegmentIndex;
-(void)setOverlap:(float)arg1 ;
-(float)overlap;
@end
