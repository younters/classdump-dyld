/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PDSlide;

@interface PBSlideObjAndMasterPair : NSObject {

	PDSlide* mSlide;
	int mMasterId;

}
+(id)createPair:(id)arg1 masterId:(int)arg2 ;
-(void)dealloc;
-(void)setSlide:(id)arg1 masterId:(int)arg2 ;
-(id)slide;
-(int)masterId;
@end
