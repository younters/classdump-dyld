/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EWSAutodiscoverBindingDelegate;
@class NSString, EWSAutodiscoverOperation;

@interface EWSAutodiscoverBinding : NSObject {

	NSString* _host;
	EWSAutodiscoverOperation* _operation;
	id<EWSAutodiscoverBindingDelegate> _delegate;
	char _logsActivity;

}

@property (nonatomic,copy,readonly) NSString * host;                                     //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) id<EWSAutodiscoverBindingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char logsActivity;                                                    //@synthesize logsActivity=_logsActivity - In the implementation block
-(char)logsActivity;
-(void)sendMessage:(id)arg1 ;
-(id)initWithHost:(id)arg1 delegate:(id)arg2 ;
-(void)setLogsActivity:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(id<EWSAutodiscoverBindingDelegate>)delegate;
-(NSString *)host;
-(void)setOperation:(id)arg1 ;
-(id)sendSynchronousMessage:(id)arg1 error:(id*)arg2 ;
@end
