/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSMutableData, NSError, NSURLResponse;

@interface MFMessageURLConnectionDelegate : NSObject <NSURLConnectionDelegate> {

	NSMutableData* _responseBody;
	BOOL _done;
	NSError* _error;
	NSURLResponse* _response;

}
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
@end
