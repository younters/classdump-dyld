/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <Dock/ECTooltipLayer.h>

@class DOCKStackExpandedItemLayer;

@interface _DOCKStackGridHoverLayer : ECTooltipLayer {

	DOCKStackExpandedItemLayer* _expandedItemLayer;

}

@property (assign,nonatomic,__weak) DOCKStackExpandedItemLayer * expandedItemLayer;              //@synthesize expandedItemLayer=_expandedItemLayer - In the implementation block
-(void)setExpandedItemLayer:(DOCKStackExpandedItemLayer *)arg1 ;
-(DOCKStackExpandedItemLayer *)expandedItemLayer;
-(id)hitTest:(CGPoint)arg1 ;
@end
