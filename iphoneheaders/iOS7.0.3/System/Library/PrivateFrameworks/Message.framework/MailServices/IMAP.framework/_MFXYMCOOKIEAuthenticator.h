/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/MFSASLAuthenticator.h>

@class YahooAccount;

@interface _MFXYMCOOKIEAuthenticator : MFSASLAuthenticator {

	YahooAccount* _yahooAccount;
	BOOL _smtp;

}

@property (nonatomic,retain) YahooAccount * yahooAccount;              //@synthesize yahooAccount=_yahooAccount - In the implementation block
@property (getter=isSMTP,nonatomic,readonly) BOOL smtp;                //@synthesize smtp=_smtp - In the implementation block
-(void)dealloc;
-(void)setYahooAccount:(id)arg1 ;
-(id)yahooAccount;
-(BOOL)isSMTP;
-(id)saslName;
-(BOOL)base64EncodeResponseData;
-(void)setAuthenticationState:(int)arg1 ;
-(id)responseForServerData:(id)arg1 ;
-(id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
@end
