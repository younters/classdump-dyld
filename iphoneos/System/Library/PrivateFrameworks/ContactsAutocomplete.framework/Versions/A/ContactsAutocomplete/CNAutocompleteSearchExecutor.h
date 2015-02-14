/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class CNAutocompleteResultTracing;


@protocol CNAutocompleteSearchExecutor <NSObject>
@property (retain) CNAutocompleteResultTracing * tracer; 
@optional
-(id)executeRequest:(id)arg1 error:(id*)arg2;
-(void)executeRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4;

@required
-(char)usesNetwork;
-(CNAutocompleteResultTracing *)tracer;
-(void)setTracer:(id)arg1;

@end
