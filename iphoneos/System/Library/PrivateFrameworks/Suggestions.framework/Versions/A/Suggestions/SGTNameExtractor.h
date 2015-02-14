/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SGTNameExtractor : NSObject {

	NSString* _storageString;

}
+(id)nameExtensionsThatDoNotNeedCommas;
+(id)nameExtensions;
+(id)partialSurnames;
+(id)extractorWithString:(id)arg1 ;
+(id)formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(char)arg3 ;
-(id)uncommentedAddress;
-(id)addressComment;
-(char)firstNameShouldBeFirst;
-(char)appearsToBeAnInitial;
-(id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)arg1 ;
-(void)firstName:(id*)arg1 middleName:(id*)arg2 lastName:(id*)arg3 extension:(id*)arg4 ;
-(id)uncommentedAddressRespectingGroups;
-(id)componentsSeparatedByCommaRespectingQuotesAndParens;
-(id)searchStringComponents;
-(id)addressDomain;
-(void)dealloc;
@end
