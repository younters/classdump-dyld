/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPAVErrorResolver.h>
#import <MediaPlayer/SSAuthorizationRequestDelegate.h>

@class MPHomeSharingML3DataProvider, NSError, NSURL, SSAuthorizationRequest, NSData;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate> {

	unsigned long long _accountID;
	MPHomeSharingML3DataProvider* _dataProvider;
	NSError* _error;
	NSURL* _keybagURL;
	SSAuthorizationRequest* _request;
	NSData* _tokenData;

}

@property (nonatomic,retain) MPHomeSharingML3DataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
-(void)resolveError:(id)arg1 ;
-(id)initWithTokenData:(id)arg1 forAccountID:(unsigned long long)arg2 keybagURL:(id)arg3 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(BOOL)_errorIsFairPlayError:(id)arg1 ;
-(void)authorizationRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)dealloc;
-(void)setDataProvider:(id)arg1 ;
-(id)dataProvider;
-(void).cxx_destruct;
@end
