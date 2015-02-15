/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPResponse.h>

@class NSString, NSDictionary;

@interface IMAPStatusResponse : IMAPResponse {

	NSString* _mailboxName;
	NSDictionary* _statusEntries;

}

@property (nonatomic,copy) NSString * mailboxName;                    //@synthesize mailboxName=_mailboxName - In the implementation block
@property (nonatomic,copy) NSDictionary * statusEntries;              //@synthesize statusEntries=_statusEntries - In the implementation block
+(char)handlesResponseWithName:(const char*)arg1 ofLength:(unsigned long long)arg2 ;
-(NSString *)mailboxName;
-(void)setMailboxName:(NSString *)arg1 ;
-(id)description;
-(NSDictionary *)statusEntries;
-(void)setStatusEntries:(NSDictionary *)arg1 ;
@end
