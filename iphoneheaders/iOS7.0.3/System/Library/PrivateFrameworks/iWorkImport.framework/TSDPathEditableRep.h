/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSDPathEditableRep <NSObject>
@required
-(id)editablePathSource;
-(void)dynamicMovePathKnobDidBegin;
-(void)dynamicallyMovedPathKnobTo:(CGPoint)arg1 withTracker:(id)arg2;
-(CGAffineTransform*)naturalToEditablePathSpaceTransform;
-(void)dynamicMovePathKnobDidEndWithTracker:(id)arg1;
@end
