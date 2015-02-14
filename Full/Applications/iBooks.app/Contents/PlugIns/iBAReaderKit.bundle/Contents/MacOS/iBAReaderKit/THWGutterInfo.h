/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/TSDContainerInfo.h>
#import <iBAReaderKit/TSWPopUpOwner.h>

@protocol TSDInfo;
@class TSDDrawableInfo, TSDShapeInfo, TSWPShapeInfo, NSString;

@interface THWGutterInfo : TSDContainerInfo <TSWPopUpOwner> {

	TSDDrawableInfo* mAssociatedInfo;
	id<TSDInfo> mExpandedDrawableToPresent;
	TSDDrawableInfo* mStageInfo;
	TSDShapeInfo* mBackgroundShape;
	TSWPShapeInfo* mTitleShape;
	char _isAudio;
	char _isPopUp;
	unsigned long long mGutterOrder;

}

@property (nonatomic,retain) TSDDrawableInfo * associatedInfo; 
@property (nonatomic,retain) id<TSDInfo> expandedDrawableToPresent; 
@property (nonatomic,retain) TSDDrawableInfo * stageInfo; 
@property (nonatomic,readonly) CGRect stageFrame; 
@property (nonatomic,retain) TSDShapeInfo * backgroundShape; 
@property (nonatomic,retain) TSWPShapeInfo * titleShape; 
@property (assign,nonatomic) unsigned long long gutterOrder; 
@property (nonatomic,readonly) char isAudio;                                     //@synthesize isAudio=_isAudio - In the implementation block
@property (nonatomic,readonly) char isPopUp;                                     //@synthesize isPopUp=_isPopUp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TSWPopUpInfo> popUpInfo; 
-(void)setGutterOrder:(unsigned long long)arg1 ;
-(TSDDrawableInfo *)associatedInfo;
-(long long)gutterOrderCompare:(id)arg1 ;
-(TSDShapeInfo *)backgroundShape;
-(CGRect)stageFrame;
-(char)isPopUp;
-(char)isAudio;
-(id<TSDInfo>)expandedDrawableToPresent;
-(void)setAssociatedInfo:(TSDDrawableInfo *)arg1 ;
-(void)setExpandedDrawableToPresent:(id<TSDInfo>)arg1 ;
-(TSWPShapeInfo *)titleShape;
-(TSDDrawableInfo *)stageInfo;
-(void)setTitleShape:(TSWPShapeInfo *)arg1 ;
-(void)setStageInfo:(TSDDrawableInfo *)arg1 ;
-(unsigned long long)gutterOrder;
-(Class)repClass;
-(id<TSWPopUpInfo>)popUpInfo;
-(void)setBackgroundShape:(TSDShapeInfo *)arg1 ;
-(void)dealloc;
@end
