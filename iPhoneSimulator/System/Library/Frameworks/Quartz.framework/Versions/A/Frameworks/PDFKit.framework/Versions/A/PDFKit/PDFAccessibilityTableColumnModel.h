/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPReadingModel, NSMutableArray;

@interface PDFAccessibilityTableColumnModel : NSObject {

	CPReadingModel* _readingModel;
	id _parent;
	int _index;
	int _columnIndex;
	NSMutableArray* _cells;

}
-(id)pdfView;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)accessibilityIsIgnored;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(unsigned long long)index;
-(id)parent;
-(id)pdfPage;
-(id)initWithReadingModel:(id)arg1 andParent:(id)arg2 andColumnIndex:(int)arg3 andIndex:(int)arg4 ;
@end
