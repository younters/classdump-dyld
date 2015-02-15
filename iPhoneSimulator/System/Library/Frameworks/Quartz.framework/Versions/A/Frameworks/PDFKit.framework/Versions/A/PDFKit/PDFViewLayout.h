/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, PDFViewLayoutPrivateVars;

@interface PDFViewLayout : NSObject {

	id _delegate;
	PDFDocument* _document;
	unsigned long long _pageCount;
	NSRange _pageSubrange;
	PDFViewLayoutPrivateVars* _pdfPriv;

}

@property (assign,nonatomic) id delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PDFDocument * document;                      //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) unsigned long long pageCount;              //@synthesize pageCount=_pageCount - In the implementation block
@property (assign,nonatomic) NSRange pageSubrange;                        //@synthesize pageSubrange=_pageSubrange - In the implementation block
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(PDFDocument *)document;
-(unsigned long long)pageCount;
-(void)setDocument:(PDFDocument *)arg1 ;
-(CGRect)boundsForPage:(id)arg1 ;
-(void)setPageSubrange:(NSRange)arg1 ;
-(NSRange)pageSubrange;
-(long long)functionalDisplayMode;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 ;
-(id)facingPageForPage:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 ;
-(CGRect)normalizedPageBounds:(id)arg1 ;
-(id)pageNearestPoint:(CGPoint)arg1 currentPage:(id)arg2 ;
-(void)invalidateInternalDocumentGeometry;
-(CGSize)contentSizeWithCurrentPage:(id)arg1 ;
-(NSRange)visiblePageRangeInBounds:(CGRect)arg1 currentPage:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(id)visiblePagesInBounds:(CGRect)arg1 currentPage:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(void)generateInternalDocumentGeometry;
-(CGRect*)layoutBounds;
-(CGPoint)layoutOriginForPage:(id)arg1 ;
@end
