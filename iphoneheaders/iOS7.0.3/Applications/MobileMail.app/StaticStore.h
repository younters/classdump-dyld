/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <Message/MFMailMessageStore.h>

@class NSArray, NSDictionary, NSData;

@interface StaticStore : MFMailMessageStore {

	NSArray* _messages;
	NSDictionary* _bodiesForMessages;
	NSData* _body;
	NSData* _headers;

}
-(void)_cacheBodyAndHeaders;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(int)fetchSynchronously;
-(void)dealloc;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)openAsynchronously;
-(int)fetchMobileSynchronously:(unsigned)arg1 ;
-(unsigned)nonDeletedCount;
-(id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned)arg2 generation:(unsigned*)arg3 ;
-(id)bodyDataForMessage:(id)arg1 ;
@end
