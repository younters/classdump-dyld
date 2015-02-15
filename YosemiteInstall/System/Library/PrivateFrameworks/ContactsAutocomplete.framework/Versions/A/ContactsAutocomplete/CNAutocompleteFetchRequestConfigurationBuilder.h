/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNAutocompleteSearchExecutor;
@class CNAutocompleteNetworkActivityPolicy, CNAutocompleteResultTracing;

@interface CNAutocompleteFetchRequestConfigurationBuilder : NSObject {

	id<CNAutocompleteSearchExecutor> _contactsExecutor;
	id<CNAutocompleteSearchExecutor> _recentsExecutor;
	id<CNAutocompleteSearchExecutor> _serverExecutor;
	CNAutocompleteNetworkActivityPolicy* _networkActivityPolicy;
	CNAutocompleteResultTracing* _tracer;

}
+(id)builder;
-(void)setNetworkActivityPolicy:(id)arg1 ;
-(void)includeContacts:(char)arg1 ;
-(void)includeRecents:(char)arg1 ;
-(void)includeServers:(char)arg1 ;
-(id)buildConfiguration;
-(void)setContactsExecutor:(id)arg1 ;
-(void)setRecentsExecutor:(id)arg1 ;
-(void)setServerExecutor:(id)arg1 ;
-(id)init;
@end
