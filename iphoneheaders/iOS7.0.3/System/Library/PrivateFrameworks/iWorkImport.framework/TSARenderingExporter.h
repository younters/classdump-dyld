/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKRenderingExporter.h>

@protocol TSARenderingExporterDelegate;
@class TSADocumentRoot, TSDImager, NSObject, TSUProgressContext, TSDBitmapRenderingQualityInfo;

@interface TSARenderingExporter : NSObject <TSKRenderingExporter> {

	TSADocumentRoot* mDocumentRoot;
	TSDImager* mImager;
	NSObject<TSARenderingExporterDelegate>* mRenderingExporterDelegate;
	BOOL mIsCancelled;
	BOOL mIsQuit;
	BOOL mPaginate;
	BOOL mDoesDrawAllPages;
	TSUProgressContext* mProgressContext;
	TSDBitmapRenderingQualityInfo* mBitmapRenderingQualityInfo;

}

@property (retain) TSUProgressContext * progressContext; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(CGRect)boundsRect;
-(id)currentInfos;
-(double)totalProgess;
-(id)p_renderingExporterDelegate;
-(id)initWithDocumentRoot:(id)arg1 imager:(id)arg2 ;
-(CGRect)unscaledClipRect;
-(BOOL)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(float)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4 ;
-(void)waitForRecalcToFinish;
-(BOOL)incrementPage;
-(void)p_drawCurrentPageWithContext:(CGContextRef)arg1 returnSuccess:(BOOL*)arg2 createPage:(BOOL)arg3 ;
-(BOOL)preparePage:(unsigned)arg1 ;
-(void)drawAllPagesWithContext:(CGContextRef)arg1 returnSuccess:(BOOL*)arg2 ;
-(void)drawCurrentPageWithContext:(CGContextRef)arg1 returnSuccess:(BOOL*)arg2 ;
-(BOOL)p_exportToURL:(id)arg1 pageNumber:(unsigned)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(double)progressForCurrentPage;
-(BOOL)setInfosToCurrentPage;
-(BOOL)exportToURL:(id)arg1 pageNumber:(unsigned)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)imager;
-(void)setPaginate:(BOOL)arg1 ;
-(BOOL)paginate;
-(BOOL)hasMoreThanOnePageToPrint;
-(id)bitmapRenderingQualityInfo;
-(void)dealloc;
-(BOOL)isCancelled;
-(void)cancel;
-(unsigned)pageCount;
-(void)teardown;
-(void)setup;
-(void)quit;
-(BOOL)isQuit;
-(id)progressContext;
-(void)setProgressContext:(id)arg1 ;
-(id)documentRoot;
@end
