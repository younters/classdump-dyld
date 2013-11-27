/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/DAMailboxFetchSearchResultConsumer.h>
#import <Message/DAMailboxStreamingContentConsumer.h>

@protocol MFDAStreamingContentConsumer;
@class MFConditionLock, , MFError;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer> {

	MFConditionLock* _doneCondition;
	<MFDAStreamingContentConsumer>* _streamConsumer;
	MFError* _error;

}

@property (nonatomic,retain) MFError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) <MFDAStreamingContentConsumer> * streamConsumer;              //@synthesize streamConsumer=_streamConsumer - In the implementation block
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)waitUntilDone;
-(void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
-(void)setStreamConsumer:(id)arg1 ;
-(id)streamConsumer;
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(void)searchResultFetchedWithResponses:(id)arg1 ;
-(id)error;
@end
