/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ABSearchElementHelper : NSObject
+(void)buildRepresentationFromSearchElement:(id)arg1 builder:(id)arg2 order:(id)arg3 level:(long long)arg4 ;
+(char)isSingleSearchElement:(id)arg1 property:(id*)arg2 value:(id*)arg3 comparison:(long long*)arg4 level:(long long)arg5 ;
+(id)propertiesOfSearchElements:(id)arg1 ;
+(id)nameProperties;
+(id)nameValueForConjoinedSearchElement:(id)arg1 comparison:(long long*)arg2 ;
+(void)buildRepresentationFromSearchElement:(id)arg1 builder:(id)arg2 order:(id)arg3 ;
+(id)AddressKeys;
+(void)calculateBestDateType:(long long*)arg1 andBestValue:(double*)arg2 forTimeInterval:(double)arg3 ;
@end

