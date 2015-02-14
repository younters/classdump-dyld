/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {

	GEOMapRequestManager* _requestManager;
	/*^block*/id _completionHandler;
	char _isFinished;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) char isFinished;               //@synthesize isFinished=_isFinished - In the implementation block
-(void)complete;
-(id)initWithManager:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(char)isFinished;
@end
