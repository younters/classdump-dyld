/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABFuture.h>

@class CNChainedFutureQueue;

@interface CNChainedPhotoFuture : ABFuture {

	CNChainedFutureQueue* _futureQueue;

}
+(id)chainedFutureWithFutures:(id)arg1 ;
-(id)initWithFutures:(id)arg1 ;
-(void)addCompletionBlocksToSelf;
-(void)runNextFuture;
-(void)cancelCurrentAndRemainingFutures;
-(void)addCompletionBlocksToFuture:(id)arg1 ;
-(void)nextWithResult:(id)arg1 ;
-(char)resultDataIsEmpty:(id)arg1 ;
-(void)didCancel;
-(void)dealloc;
-(void)start;
-(id)description;
@end
