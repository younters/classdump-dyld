/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol LabelManagerDelegate <NSObject>
@required
-(void)labelManager:(LabelManager*)arg1 setNeedsLayout:(BOOL)arg2;
-(void)labelManager:(LabelManager*)arg1 setNeedsDisplay:(BOOL)arg2;
-(void)labelManager:(LabelManager*)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)labelManager:(LabelManager*)arg1 pendingArtworkIsReady:(BOOL)arg2;
@end
