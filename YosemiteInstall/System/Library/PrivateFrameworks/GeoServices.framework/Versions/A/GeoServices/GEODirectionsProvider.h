/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEODirectionsProvider : NSObject {

	char _isLoading;
	int _requestType;
	/*^block*/id _finishedHandler;
	/*^block*/id _errorHandler;

}

@property (assign,nonatomic) char isLoading;                //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) id finishedHandler;              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                 //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)cancelRequest;
-(char)isLoading;
-(void)setIsLoading:(char)arg1 ;
-(void)setFinishedHandler:(id)arg1 ;
-(void)startProviderWithRequest:(id)arg1 ;
-(void)cancelProviderRequest;
-(id)finishedHandler;
-(void)requestCompleted;
-(void)providerReceivedError:(id)arg1 problemDetails:(SCD_Struct_GE59*)arg2 ;
-(void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2 problemDetails:(SCD_Struct_GE59*)arg3 ;
-(void)providerReceivedResponse:(id)arg1 ;
-(void)providerDidCancel;
-(void)dealloc;
@end
