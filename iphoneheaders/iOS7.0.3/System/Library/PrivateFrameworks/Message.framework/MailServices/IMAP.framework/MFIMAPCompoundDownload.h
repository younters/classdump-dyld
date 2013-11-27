/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAP/MFIMAPDownload.h>

@class NSMutableArray;

@interface MFIMAPCompoundDownload : MFIMAPDownload {

	NSMutableArray* _subdownloads;

}
-(void)dealloc;
-(unsigned)bytesFetched;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(unsigned)lengthOfDataBeforeLineConversion;
-(id)subdownloads;
-(void)addSubdownload:(id)arg1 ;
-(void)removeSubdownload:(id)arg1 ;
-(BOOL)isComplete;
-(unsigned)expectedLength;
@end
