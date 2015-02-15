/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray, CKShareID;

@interface CKDFetchLikesOperation : CKDOperation {

	/*^block*/id _likesFetchedProgressBlock;
	NSArray* _likeIDsToFetch;
	CKShareID* _shareID;
	unsigned long long _resultsLimit;

}

@property (nonatomic,copy) id likesFetchedProgressBlock;                   //@synthesize likesFetchedProgressBlock=_likesFetchedProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * likeIDsToFetch;                     //@synthesize likeIDsToFetch=_likeIDsToFetch - In the implementation block
@property (nonatomic,retain) CKShareID * shareID;                          //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setLikesFetchedProgressBlock:(id)arg1 ;
-(id)likesFetchedProgressBlock;
-(NSArray *)likeIDsToFetch;
-(void)_handleLikesFetched:(id)arg1 count:(unsigned long long)arg2 likes:(id)arg3 response:(id)arg4 ;
-(void)setLikeIDsToFetch:(NSArray *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)main;
@end
