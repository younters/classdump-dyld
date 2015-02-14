/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class CKShareID, NSMutableArray, NSError;

@interface CKFetchUserPresenceOperation : CKOperation {

	CKShareID* _shareID;
	/*^block*/id _fetchUserPresenceCompletionBlock;
	NSMutableArray* _userPresence;

}

@property (nonatomic,retain) CKShareID * shareID;                            //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,copy) id fetchUserPresenceCompletionBlock;              //@synthesize fetchUserPresenceCompletionBlock=_fetchUserPresenceCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * userPresence;                  //@synthesize userPresence=_userPresence - In the implementation block
@property (nonatomic,retain) NSError * error; 
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(id)initWithShareID:(id)arg1 ;
-(NSMutableArray *)userPresence;
-(void)setUserPresence:(NSMutableArray *)arg1 ;
-(id)fetchUserPresenceCompletionBlock;
-(void)setFetchUserPresenceCompletionBlock:(id)arg1 ;
-(Class)operationInfoClass;
@end
