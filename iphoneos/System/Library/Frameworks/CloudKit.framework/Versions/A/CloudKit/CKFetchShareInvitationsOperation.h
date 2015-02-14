/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKFetchShareInvitationsOperation : CKOperation {

	char _queryAllContainers;
	/*^block*/id _fetchShareInvitationsCompletionBlock;
	long long _fetchType;
	NSMutableArray* _fetchedInvitations;

}

@property (nonatomic,copy) id fetchShareInvitationsCompletionBlock;              //@synthesize fetchShareInvitationsCompletionBlock=_fetchShareInvitationsCompletionBlock - In the implementation block
@property (assign,nonatomic) long long fetchType;                                //@synthesize fetchType=_fetchType - In the implementation block
@property (assign,nonatomic) char queryAllContainers;                            //@synthesize queryAllContainers=_queryAllContainers - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchedInvitations;                //@synthesize fetchedInvitations=_fetchedInvitations - In the implementation block
+(id)fetchReceivedInvitationsOperation;
+(id)fetchSentInvitationsOperation;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setFetchShareInvitationsCompletionBlock:(id)arg1 ;
-(id)_initWithFetchType:(long long)arg1 ;
-(long long)fetchType;
-(void)setFetchType:(long long)arg1 ;
-(char)queryAllContainers;
-(void)setQueryAllContainers:(char)arg1 ;
-(NSMutableArray *)fetchedInvitations;
-(void)setFetchedInvitations:(NSMutableArray *)arg1 ;
-(id)fetchShareInvitationsCompletionBlock;
@end
