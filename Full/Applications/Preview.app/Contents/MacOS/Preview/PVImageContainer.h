/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preview/Preview-Structs.h>
#import <Preview/PVMediaContainerBase.h>

@class NSDictionary, NSMutableArray;

@interface PVImageContainer : PVMediaContainerBase {

	NSDictionary* _imageOptions;
	unsigned long long _imageCount;
	NSMutableArray* _elements;
	char _elementsInsertedOrRemoved;

}

@property (assign) char elementsInsertedOrRemoved;              //@synthesize elementsInsertedOrRemoved=_elementsInsertedOrRemoved - In the implementation block
+(char)containerTypeSupportsSubFiles:(id)arg1 ;
+(void)initialize;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)removeAnnotationsAtIndexes:(id)arg1 ;
-(void)insertAnnotations:(id)arg1 atIndexes:(id)arg2 ;
-(id)pageContainer;
-(void)ensureAnnotationsAreLoaded;
-(NSRange)indexRangeOfAnnotationsForElement:(id)arg1 ;
-(char)isPDFContainer;
-(char)isImageContainer;
-(char)validateSource:(id*)arg1 ;
-(char)_validateImageSourceAtURL:(id)arg1 imageType:(id*)arg2 imageCount:(unsigned long long*)arg3 andReturnError:(id*)arg4 ;
-(void)setElementsInsertedOrRemoved:(char)arg1 ;
-(char)writeToURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4 ;
-(id)bestTypeForWriting;
-(char)writePDFToURL:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3 ;
-(char)writeElementsAtIndexes:(id)arg1 asImageType:(id)arg2 toURL:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5 ;
-(char)elementsInsertedOrRemoved;
-(CGRect)pdfBoundsForElement:(id)arg1 applyEXIFOrientation:(char)arg2 ;
-(void)setInvariantURL:(id)arg1 ;
-(void)insertObject:(id)arg1 inElementsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromElementsAtIndex:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 ofType:(id)arg2 windowController:(id)arg3 options:(id)arg4 validate:(char)arg5 error:(id*)arg6 ;
-(char)isRAWImage;
-(char)isC3DContainer;
-(char)isQuickLookContainer;
-(char)isContentLoadingContainer;
-(id)defaultSaveAsProperties;
-(char)currentFormatCanWriteAlpha;
-(char)canCancelWriting;
-(id)imageOptions;
-(id)aggregateKeywords;
-(unsigned long long)indexOfElement:(id)arg1 ;
-(unsigned long long)childAnnotationCount;
-(char)isAnnotationLeaf;
-(char)maintainsInvariantSource;
-(id)bookmarks;
-(id)elements;
-(void)cancelWriting;
-(id)annotations;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)elementCount;
-(id)elementAtIndex:(unsigned long long)arg1 ;
-(char)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)writableTypesForSaveOperation:(unsigned long long)arg1 ;
-(char)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)writeToURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(CGImageSourceRef)source;
-(id)fileAttributes;
-(char)isEdited;
-(id)documentAttributes;
@end
