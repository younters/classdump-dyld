/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AMConverter : NSObject {

	NSMutableDictionary* _utiTypes;
	NSMutableDictionary* _conversionPathCache;
	NSMutableDictionary* _conversionTypes;

}
+(id)sharedConverter;
-(void)categorizeConversionActions;
-(id)convertValueToSingle:(id)arg1 ;
-(id)convertValueToList:(id)arg1 ;
-(id)conversionTypes;
-(id)stepDownConversionActionFromType:(id)arg1 toType:(id)arg2 ;
-(id)UTITypes;
-(void)setUTITypes:(id)arg1 ;
-(id)UTITypesWhichLinkToType:(id)arg1 ;
-(id)actionsInArray:(id)arg1 whichAcceptOrConformToTypes:(id)arg2 ;
-(char)doAnyOfTheseTypes:(id)arg1 conformToType:(id)arg2 ;
-(id)conversionActionPathToOutputType:(id)arg1 withStartingActions:(id)arg2 startingIndex:(unsigned long long)arg3 ;
-(id)conversionPathCache;
-(char)isGenericType:(id)arg1 ;
-(id)conversionFromGenericUTI:(id)arg1 toUTI:(id)arg2 ;
-(char)doesUTIType:(id)arg1 conformToUTIType:(id)arg2 ;
-(id)conversionFromUTI:(id)arg1 toUTI:(id)arg2 ignoreGenericTypes:(char)arg3 ;
-(id)UTIPathFromType:(id)arg1 toType:(id)arg2 ;
-(id)conversionPathFromUTIPath:(id)arg1 error:(id*)arg2 ;
-(id)conversionActionPathsFromInputType:(id)arg1 toOutputType:(id)arg2 ;
-(id)conversionPathsFromInputTypes:(id)arg1 toOutputType:(id)arg2 ;
-(id)conversionFromUTI:(id)arg1 toUTI:(id)arg2 ;
-(id)conversionPathsFromInputType:(id)arg1 toOutputTypes:(id)arg2 ;
-(id)convertValue:(id)arg1 toContainerType:(id)arg2 ;
-(id)executeConversionPath:(id)arg1 connector:(id)arg2 withInput:(id)arg3 runner:(id)arg4 error:(id*)arg5 ;
-(id)bestGuessOfTypeOfData:(id)arg1 ;
-(id)convertValue:(id)arg1 fromType:(id)arg2 toType:(id)arg3 ;
-(char)doAnyOfTheseTypes:(id)arg1 conformToAnyOfTheseTypes:(id)arg2 ;
-(id)conversionPathsFromInputTypes:(id)arg1 toOutputTypes:(id)arg2 ;
-(id)executeConnector:(id)arg1 withInput:(id)arg2 runner:(id)arg3 error:(id*)arg4 ;
-(id)convertValue:(id)arg1 toType:(id)arg2 ;
-(id)actionsInArray:(id)arg1 whichCanConvertFrom:(id)arg2 ;
-(char)doesUTIType:(id)arg1 conformToAnyOfTheseTypes:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

