/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CNAutocompleteQuery, CNAutocompleteFetchRequest, CNAutocompleteFetchRequestConfiguration;

@interface CNAutocompleteQueryConfigurationOperation : NSOperation {

	CNAutocompleteQuery* _query;
	CNAutocompleteFetchRequest* _request;
	CNAutocompleteFetchRequestConfiguration* _requestConfiguration;

}

@property (__weak,readonly) CNAutocompleteQuery * query;                                          //@synthesize query=_query - In the implementation block
@property (readonly) CNAutocompleteFetchRequest * request;                                        //@synthesize request=_request - In the implementation block
@property (readonly) CNAutocompleteFetchRequestConfiguration * requestConfiguration;              //@synthesize requestConfiguration=_requestConfiguration - In the implementation block
-(CNAutocompleteQuery *)query;
-(CNAutocompleteFetchRequest *)request;
-(id)initWithQuery:(id)arg1 request:(id)arg2 requestConfiguration:(id)arg3 ;
-(CNAutocompleteFetchRequestConfiguration *)requestConfiguration;
-(id)makeAppropriateConfigurationForLiveUserDataWithRequest:(id)arg1 ;
-(void)main;
@end
