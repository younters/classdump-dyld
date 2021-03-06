/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, ICScannerFunctionalUnit;

@interface ICScannerFeatureTemplateProps : NSObject {

	int _numberOfTargets;
	NSArray* _targets;
	ICScannerFunctionalUnit* _fu;

}

@property (assign) int numberOfTargets;                       //@synthesize numberOfTargets=_numberOfTargets - In the implementation block
@property (retain) NSArray * targets;                         //@synthesize targets=_targets - In the implementation block
@property (assign) ICScannerFunctionalUnit * fu;              //@synthesize fu=_fu - In the implementation block
-(void)setFu:(ICScannerFunctionalUnit *)arg1 ;
-(int)numberOfTargets;
-(void)setNumberOfTargets:(int)arg1 ;
-(ICScannerFunctionalUnit *)fu;
-(void)finalize;
-(void)dealloc;
-(NSArray *)targets;
-(void)setTargets:(NSArray *)arg1 ;
@end

