/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Message/Message-Structs.h>
@class NSString, MFMailMessageLibrary;

@interface MFSqliteMessageIDStore : NSObject {

	NSString* _url;
	int _mailboxRowid;
	MFMailMessageLibrary* _library;

}
-(void)dealloc;
-(void)_loadMailboxRowidIfNecessary:(sqlite3Ref)arg1 ;
-(id)initWithLibrary:(id)arg1 URLString:(id)arg2 ;
-(id)knownMessageIDsFromSet:(id)arg1 ;
-(id)messageIDsAddedBeforeDate:(double)arg1 ;
-(void)deleteUIDsNotInArray:(id)arg1 ;
-(unsigned)numberOfMessageIDs;
-(void)deleteAllUIDs;
-(unsigned long long)flagsForUID:(id)arg1 ;
@end
