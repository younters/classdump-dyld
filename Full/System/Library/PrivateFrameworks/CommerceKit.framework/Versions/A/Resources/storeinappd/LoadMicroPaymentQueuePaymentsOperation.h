/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storeinappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>

@class MicroPaymentQueueRequest, MicroPaymentQueueResponse, NSString;

@interface LoadMicroPaymentQueuePaymentsOperation : ISOperation {

	MicroPaymentQueueRequest* _request;
	MicroPaymentQueueResponse* _response;
	NSString* _urlBagKey;

}

@property (copy) MicroPaymentQueueRequest * request;                  //@synthesize request=_request - In the implementation block
@property (retain) NSString * URLBagKey;                              //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (retain) MicroPaymentQueueResponse * response;              //@synthesize response=_response - In the implementation block
-(char)_loadResponseReturningError:(id*)arg1 ;
-(char)_parsePropertyList:(id)arg1 error:(id*)arg2 ;
-(char)_appendRangeRequestsToResponse:(id)arg1 error:(id*)arg2 ;
-(MicroPaymentQueueRequest *)request;
-(void)setRequest:(MicroPaymentQueueRequest *)arg1 ;
-(NSString *)URLBagKey;
-(void)setURLBagKey:(NSString *)arg1 ;
-(void)run;
-(void)setResponse:(MicroPaymentQueueResponse *)arg1 ;
-(MicroPaymentQueueResponse *)response;
@end
