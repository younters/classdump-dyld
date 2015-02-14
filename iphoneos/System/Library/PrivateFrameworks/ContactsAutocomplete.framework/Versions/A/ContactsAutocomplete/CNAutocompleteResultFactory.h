/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface CNAutocompleteResultFactory : NSObject {

	NSArray* _searchTerms;
	NSString* _preferredDomain;
	NSString* _sendingAddress;

}
+(id)factoryWithSearchString:(id)arg1 priorityDomain:(id)arg2 sendingAddress:(id)arg3 ;
-(id)localGroupResultWithDisplayName:(id)arg1 groupIdentifier:(id)arg2 ;
-(id)initWithSearchTerms:(id)arg1 priorityDomain:(id)arg2 sendingAddress:(id)arg3 ;
-(void)applySearchContextToResult:(id)arg1 ;
-(id)frequentRecentResultWithDisplayName:(id)arg1 address:(id)arg2 addressType:(unsigned long long)arg3 lastSendingAddress:(id)arg4 date:(id)arg5 ;
-(id)infrequentRecentResultWithDisplayName:(id)arg1 address:(id)arg2 addressType:(unsigned long long)arg3 lastSendingAddress:(id)arg4 dateCount:(unsigned long long)arg5 date:(id)arg6 ;
-(void)applyPreferredDomainBitToResult:(id)arg1 ;
-(void)applyExactMatchBitToResult:(id)arg1 ;
-(void)applyLastSendingAddressBitToResult:(id)arg1 ;
-(id)localContactResultWithDisplayName:(id)arg1 address:(id)arg2 addressType:(unsigned long long)arg3 nameComponents:(id)arg4 contactIdentifier:(id)arg5 ;
-(id)recentResultWithDisplayName:(id)arg1 address:(id)arg2 addressType:(unsigned long long)arg3 lastSendingAddress:(id)arg4 dateCount:(unsigned long long)arg5 date:(id)arg6 ;
-(id)serverContactResultWithDisplayName:(id)arg1 address:(id)arg2 addressType:(unsigned long long)arg3 nameComponents:(id)arg4 ;
@end
