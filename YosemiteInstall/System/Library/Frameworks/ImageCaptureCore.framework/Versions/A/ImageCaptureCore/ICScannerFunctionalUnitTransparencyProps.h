/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface ICScannerFunctionalUnitTransparencyProps : NSObject {

	NSMutableIndexSet* _supportedDocumentTypes;
	unsigned long long _documentType;

}

@property (retain) NSMutableIndexSet * supportedDocumentTypes;              //@synthesize supportedDocumentTypes=_supportedDocumentTypes - In the implementation block
@property (assign) unsigned long long documentType;                         //@synthesize documentType=_documentType - In the implementation block
-(unsigned long long)documentType;
-(void)setDocumentType:(unsigned long long)arg1 ;
-(void)setSupportedDocumentTypes:(NSMutableIndexSet *)arg1 ;
-(NSMutableIndexSet *)supportedDocumentTypes;
-(void)finalize;
-(void)dealloc;
@end

