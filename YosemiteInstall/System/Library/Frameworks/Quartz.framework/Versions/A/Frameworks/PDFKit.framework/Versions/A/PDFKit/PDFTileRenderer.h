/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class NSOperationQueue, NSMutableSet, PDFDocument, PDFTileRenderingOperation, PDFViewLayout, NSLock, NSMutableDictionary, NSColorSpace;

@interface PDFTileRenderer : NSObject {

	NSOperationQueue* _renderQueue;
	NSMutableSet* _operations;
	PDFDocument* _document;
	PDFTileRenderingOperation* _completedOperation;
	PDFTileRenderingOperation* _currentOperation;
	/*^block*/id _completionBlock;
	unsigned long long _startRenderTime;
	unsigned long long _stopRenderTime;
	PDFViewLayout* _layout;
	id _delegate;
	int _tileSize;
	NSLock* _bitmapCacheLock;
	NSMutableDictionary* _bitmapCache;
	NSColorSpace* _colorSpace;

}

@property (retain) PDFDocument * document;                                      //@synthesize document=_document - In the implementation block
@property (getter=isComplete,readonly) char complete; 
@property (assign) unsigned long long startRenderTime;                          //@synthesize startRenderTime=_startRenderTime - In the implementation block
@property (assign) unsigned long long stopRenderTime;                           //@synthesize stopRenderTime=_stopRenderTime - In the implementation block
@property (retain) NSOperationQueue * renderQueue;                              //@synthesize renderQueue=_renderQueue - In the implementation block
@property (copy) id completionBlock;                                            //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) CGImageRef renderedImage; 
@property (retain) PDFViewLayout * layout;                                      //@synthesize layout=_layout - In the implementation block
@property (assign) id delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) PDFTileRenderingOperation * currentOperation;                //@synthesize currentOperation=_currentOperation - In the implementation block
@property (retain) PDFTileRenderingOperation * completedOperation;              //@synthesize completedOperation=_completedOperation - In the implementation block
+(id)rendererForDocument:(id)arg1 withLayout:(id)arg2 andDelegate:(id)arg3 ;
+(id)keyPathsForValuesAffectingComplete;
-(CGRect)clipRect;
-(NSOperationQueue *)renderQueue;
-(void)setTileSize:(int)arg1 ;
-(CGImageRef)renderedImage;
-(char)isComplete;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setColorSpace:(id)arg1 ;
-(PDFViewLayout *)layout;
-(id)delegate;
-(CGSize)size;
-(PDFDocument *)document;
-(CGColorSpaceRef)colorSpace;
-(PDFTileRenderingOperation *)currentOperation;
-(void)setDocument:(PDFDocument *)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setCurrentOperation:(PDFTileRenderingOperation *)arg1 ;
-(id)completionBlock;
-(void)setLayout:(PDFViewLayout *)arg1 ;
-(id)requestBitmapData:(int*)arg1 ;
-(void)returnBitmapData:(id)arg1 forIndex:(id)arg2 ;
-(void)setRenderQueue:(NSOperationQueue *)arg1 ;
-(void)setCompletedOperation:(PDFTileRenderingOperation *)arg1 ;
-(void)_operationDidComplete:(id)arg1 ;
-(PDFTileRenderingOperation *)completedOperation;
-(void)recreateBitmapCache;
-(char)renderWithClipRect:(CGRect)arg1 forLayer:(id)arg2 withContentSize:(CGSize)arg3 andScaleFactor:(double)arg4 andScrollOffset:(CGPoint)arg5 ;
-(void)waitUntilCurrentRenderCompletes;
-(unsigned long long)startRenderTime;
-(void)setStartRenderTime:(unsigned long long)arg1 ;
-(unsigned long long)stopRenderTime;
-(void)setStopRenderTime:(unsigned long long)arg1 ;
@end
