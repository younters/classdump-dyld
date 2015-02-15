/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@protocol CKDCancelling;
@class NSArray, NSMutableArray;

@interface CKDFetchAssetPackagesOperation : CKDOperation {

	NSArray* _packages;
	NSArray* _indexSets;
	/*^block*/id _progressBlock;
	NSMutableArray* _packagesToFetch;
	NSMutableArray* _remainingIndexSets;
	id<CKDCancelling> _cancelToken;

}

@property (nonatomic,copy) NSArray * packages;                                 //@synthesize packages=_packages - In the implementation block
@property (nonatomic,copy) NSArray * indexSets;                                //@synthesize indexSets=_indexSets - In the implementation block
@property (nonatomic,copy) id progressBlock;                                   //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * packagesToFetch;                 //@synthesize packagesToFetch=_packagesToFetch - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingIndexSets;              //@synthesize remainingIndexSets=_remainingIndexSets - In the implementation block
@property (nonatomic,retain) id<CKDCancelling> cancelToken;                    //@synthesize cancelToken=_cancelToken - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSMutableArray *)packagesToFetch;
-(void)setPackages:(NSArray *)arg1 ;
-(void)setIndexSets:(NSArray *)arg1 ;
-(void)setPackagesToFetch:(NSMutableArray *)arg1 ;
-(void)setCancelToken:(id<CKDCancelling>)arg1 ;
-(id<CKDCancelling>)cancelToken;
-(void)_fetchNextAssetPackage;
-(NSMutableArray *)remainingIndexSets;
-(void)_finishPackage:(id)arg1 error:(id)arg2 ;
-(char)_handleSectionItemFetched:(id)arg1 package:(id)arg2 error:(id*)arg3 ;
-(NSArray *)indexSets;
-(void)setRemainingIndexSets:(NSMutableArray *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)packages;
-(void)cancel;
-(void)main;
-(void)setProgressBlock:(id)arg1 ;
-(id)progressBlock;
@end
