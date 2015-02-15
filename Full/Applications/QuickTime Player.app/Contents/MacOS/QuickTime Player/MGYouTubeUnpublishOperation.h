/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <QuickTime Player/NSURLConnectionDelegate.h>

@class NSError, NSString, NSURLConnection, NSRunLoop;

@interface MGYouTubeUnpublishOperation : NSOperation <NSURLConnectionDelegate> {

	NSError* _error;
	NSString* _authToken;
	NSString* _userID;
	NSString* _videoID;
	NSURLConnection* _currentConnection;
	NSRunLoop* _connectionRunLoop;

}

@property (copy) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (readonly) NSString * localizedStatusMessage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)youTubeDeletionURLForUserID:(id)arg1 videoID:(id)arg2 ;
-(NSString *)localizedStatusMessage;
-(id)initWithUserID:(id)arg1 videoID:(id)arg2 authorizationToken:(id)arg3 ;
-(void)cancel;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)main;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end
