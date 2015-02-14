/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFPage, NSString, NSDate, PDFBorder, NSColor, PDFAction, PDFAnnotationPopup;

@interface PDFAnnotationPrivateVars : NSObject {

	CGPDFDictionaryRef dictionary;
	CFDictionaryRef dictionaryRef;
	PDFPage* page;
	NSString* type;
	NSString* contents;
	NSDate* modificationDate;
	NSString* textString;
	PDFBorder* border;
	NSColor* color;
	unsigned long long flags;
	CGRect bounds;
	PDFAction* action;
	PDFAction* downAction;
	PDFAnnotationPopup* popup;
	CGPDFDictionaryRef popupDictionary;
	CGPDFFormRef normalAppearance;
	CGPDFFormRef rolloverAppearance;
	CGPDFFormRef downAppearance;
	CGPDFFormRef normalOffAppearance;
	CGPDFFormRef rolloverOffAppearance;
	CGPDFFormRef downOffAppearance;
	char saveAppearance;
	char export;
	id accessibilityParent;

}
@end
