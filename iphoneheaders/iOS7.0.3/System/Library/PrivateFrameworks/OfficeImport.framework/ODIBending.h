/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIBending : NSObject {

	float mSpaceWidth;
	float mSpaceHeight;
	BOOL mWithArrows;
	float mRectHeight;
	unsigned mMaxNodeCount;
	unsigned mMaxColumnCount;

}
+(BOOL)mapIdentifier:(id)arg1 state:(id)arg2 ;
+(unsigned)mapLogicalBoundsWithShapeSize:(CGSize)arg1 spaceSize:(CGSize)arg2 maxNodeCount:(unsigned)arg3 maxColumnCount:(unsigned)arg4 state:(id)arg5 ;
-(void)mapWithState:(id)arg1 ;
-(id)initWithArrows:(BOOL)arg1 ;
-(void)setRectHeight:(float)arg1 ;
-(void)setMaxNodeCount:(unsigned)arg1 ;
-(void)setMaxColumnCount:(unsigned)arg1 ;
@end
