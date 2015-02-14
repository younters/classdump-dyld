/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface WBSOpenSearchDescription : NSObject {

	NSString* _descriptionDocumentURLString;
	NSString* _searchURLTemplateString;
	NSString* _urlTemplateStringForSuggestionsInJSON;
	NSString* _urlTemplateStringForSuggestionsInXML;

}

@property (nonatomic,readonly) NSString * descriptionDocumentURLString;                       //@synthesize descriptionDocumentURLString=_descriptionDocumentURLString - In the implementation block
@property (nonatomic,readonly) NSString * searchURLTemplateString;                            //@synthesize searchURLTemplateString=_searchURLTemplateString - In the implementation block
@property (nonatomic,readonly) NSString * urlTemplateStringForSuggestionsInJSON;              //@synthesize urlTemplateStringForSuggestionsInJSON=_urlTemplateStringForSuggestionsInJSON - In the implementation block
@property (nonatomic,readonly) NSString * urlTemplateStringForSuggestionsInXML;               //@synthesize urlTemplateStringForSuggestionsInXML=_urlTemplateStringForSuggestionsInXML - In the implementation block
-(NSString *)searchURLTemplateString;
-(NSString *)urlTemplateStringForSuggestionsInJSON;
-(NSString *)descriptionDocumentURLString;
-(NSString *)urlTemplateStringForSuggestionsInXML;
-(id)initWithDescriptionDocumentURLString:(id)arg1 searchURLTemplateString:(id)arg2 urlTemplateStringForSuggestionsInJSON:(id)arg3 urlTemplateStringForSuggestionsInXML:(id)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
@end
