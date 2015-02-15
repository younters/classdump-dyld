/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class NSMutableString, NSData, NSAttributedString;

@interface CPArchive : NSObject <CPDisposable> {

	CFArrayRef selections;
	CFArrayRef imageNodes;
	NSMutableString* plainText;
	NSMutableString* htmlString;
	NSMutableString* htmlStringNoImages;
	NSData* webArchiveData;
	NSAttributedString* structuredString;
	NSData* RTFDData;

}
-(id)plainText;
-(id)structuredString;
-(id)RTFDData;
-(id)html;
-(void)addSelection:(CGPDFSelectionRef)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)dispose;
-(id)webArchiveData;
@end
