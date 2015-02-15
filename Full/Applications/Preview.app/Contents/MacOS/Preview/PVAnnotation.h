/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preview/Preview-Structs.h>
#import <Preview/NSCopying.h>
#import <Preview/NSCoding.h>
#import <Preview/NSPasteboardReading.h>
#import <Preview/NSPasteboardWriting.h>

@protocol PVMediaElement;
@class NSObject, NSString, NSDate, NSColor, NSNumber, PDFAnnotationPopup;

@interface PVAnnotation : NSObject <NSCopying, NSCoding, NSPasteboardReading, NSPasteboardWriting> {

	NSObject*<PVMediaElement> _parentElement;
	char _selectionDrawingEnabled;

}

@property (readonly) unsigned long long type; 
@property (copy) NSString * author; 
@property (retain) NSDate * date; 
@property (readonly) NSString * authorAndDateString; 
@property (readonly) NSString * displayName; 
@property (readonly) char supportsColor; 
@property (retain) NSColor * color; 
@property (readonly) char supportsInteriorColor; 
@property (retain) NSColor * interiorColor; 
@property (readonly) char supportsBorder; 
@property (assign) double lineWidth; 
@property (assign) char isDashed; 
@property (readonly) char supportsShadow; 
@property (assign) char hasShadow; 
@property (readonly) char supportsIconType; 
@property (assign) long long iconType; 
@property (assign) char selectionDrawingEnabled;                           //@synthesize selectionDrawingEnabled=_selectionDrawingEnabled - In the implementation block
@property (retain) NSString * contents; 
@property (readonly) id pageNumber; 
@property (readonly) NSNumber * pageIndex; 
@property (assign) CGRect bounds; 
@property (readonly) CGRect drawingBounds; 
@property (readonly) CGRect selectionBounds; 
@property (readonly) double selectionDrawingOutsetX; 
@property (readonly) double selectionDrawingOutsetY; 
@property (readonly) char isEditable; 
@property (readonly) char isEmpty; 
@property (readonly) char canResize; 
@property (readonly) char canMove; 
@property (readonly) unsigned long long handleLocations; 
@property (readonly) char isMarkupType; 
@property (assign) long long markupType; 
@property (assign) NSObject*<PVMediaElement> parentElement;                //@synthesize parentElement=_parentElement - In the implementation block
@property (readonly) unsigned long long encodedParentElement; 
@property (readonly) char supportsNSCoding; 
@property (assign) char hasPopup; 
@property (assign) char popupIsOpen; 
@property (assign) CGRect popupBounds; 
@property (readonly) PDFAnnotationPopup * popup; 
@property (readonly) char supportsEndpoints; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (readonly) char isFormElement; 
@property (readonly) NSString * markupText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)persistentColorForType:(unsigned long long)arg1 ;
+(void)translateAnnotations:(id)arg1 byX:(double)arg2 andY:(double)arg3 viewSpaceConverter:(/*^block*/id)arg4 ;
+(CGRect)boundsOfAnnotations:(id)arg1 coordinateTransformer:(/*^block*/id)arg2 ;
+(id)annotationOfType:(unsigned long long)arg1 withBounds:(CGRect)arg2 ;
+(double)persistentLineWidthForType:(unsigned long long)arg1 ;
+(void)scaleAnnotations:(id)arg1 withXFactor:(double)arg2 andYFactor:(double)arg3 ;
+(Class)classForPDFAnnotationClass:(Class)arg1 ;
+(Class)bestPDFAnnotationClassToRepresentAKAnnotation:(id)arg1 ;
+(unsigned long long)mapTypeToTypeForColorGroup:(unsigned long long)arg1 ;
+(id)keyPathsForValuesAffectingDrawingContents;
+(id)defaultTextContents;
+(id)defaultMarkupTextContents;
+(id)dashPatternForLineWidth:(double)arg1 ;
+(id)presentablePropertyNameForKey:(id)arg1 ;
+(void)setPersistentColor:(id)arg1 forType:(unsigned long long)arg2 ;
+(id)persistentInteriorColorForType:(unsigned long long)arg1 ;
+(void)setPersistentInteriorColor:(id)arg1 forType:(unsigned long long)arg2 ;
+(void)setPersistentLineWidth:(double)arg1 forType:(unsigned long long)arg2 ;
+(char)persistentDashedStateForType:(unsigned long long)arg1 ;
+(void)setPersistentDashedState:(char)arg1 forType:(unsigned long long)arg2 ;
+(char)persistentShadowedStateForType:(unsigned long long)arg1 ;
+(void)setPersistentShadowedState:(char)arg1 forType:(unsigned long long)arg2 ;
+(id)persistentFontForType:(unsigned long long)arg1 ;
+(void)setPersistentFont:(id)arg1 forType:(unsigned long long)arg2 ;
+(void)setPersistentTextAlignment:(unsigned long long)arg1 forType:(unsigned long long)arg2 ;
+(unsigned long long)persistentTextAlignmentForType:(unsigned long long)arg1 ;
+(void)setPersistentTextStyle:(unsigned long long)arg1 forType:(unsigned long long)arg2 ;
+(unsigned long long)persistentTextStyleForType:(unsigned long long)arg1 ;
+(unsigned long long)persistentArrowStyleForType:(unsigned long long)arg1 ;
+(void)setPersistentArrowStyle:(unsigned long long)arg1 forType:(unsigned long long)arg2 ;
+(id)mostRecentlyModifiedAnnotationOfType:(unsigned long long)arg1 inArray:(id)arg2 ;
+(id)readableTypesForPasteboard:(id)arg1 ;
+(unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(char)isDashed;
-(char)hasPopup;
-(void)setPopupIsOpen:(char)arg1 ;
-(double)selectionDrawingOutsetX;
-(double)selectionDrawingOutsetY;
-(void)drawInSelectedStateInView:(id)arg1 ;
-(unsigned long long)encodedParentElement;
-(void)setParentElement:(NSObject*<PVMediaElement>)arg1 ;
-(char)isMarkupType;
-(char)popupIsOpen;
-(void)setHasPopup:(char)arg1 ;
-(char)canMove;
-(char)supportsEndpoints;
-(void)setSelectionDrawingEnabled:(char)arg1 ;
-(char)hitTestAtPoint:(CGPoint)arg1 inView:(id)arg2 isSelected:(char)arg3 ;
-(id)markupCharacterIndexes;
-(char)supportsInteriorColor;
-(char)supportsIconType;
-(void)setMarkupCharacterIndexes:(id)arg1 ;
-(CGImageRef)CGImageRepresentation;
-(char)selectionDrawingEnabled;
-(void)drawThickSelectionBorderInView:(id)arg1 ;
-(CGPathRef)newMarkupPath;
-(CGPathRef)newMarkupPathForHitTestingAtZoomFactor:(double)arg1 ;
-(NSString *)authorAndDateString;
-(char)supportsColor;
-(char)canResize;
-(unsigned long long)handleLocations;
-(char)supportsBorder;
-(void)setIsDashed:(char)arg1 ;
-(char)supportsShadow;
-(char)supportsPopup;
-(CGRect)popupBounds;
-(void)setPopupBounds:(CGRect)arg1 ;
-(NSString *)markupText;
-(char)isFormElement;
-(void)drawHandleInView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)pageNumber;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)endPoint;
-(long long)iconType;
-(void)setIconType:(long long)arg1 ;
-(NSObject*<PVMediaElement>)parentElement;
-(NSString *)author;
-(NSNumber *)pageIndex;
-(PDFAnnotationPopup *)popup;
-(void)setContents:(NSString *)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)contents;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(char)isEditable;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(char)isEmpty;
-(void)moveToPoint:(CGPoint)arg1 ;
-(NSDate *)date;
-(void)setHasShadow:(char)arg1 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(char)hasShadow;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)displayName;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGRect)drawingBounds;
-(void)setNilValueForKey:(id)arg1 ;
-(CGRect)selectionBounds;
-(void)removeAllAppearanceStreams;
-(char)supportsNSCoding;
-(NSColor *)interiorColor;
-(void)setInteriorColor:(NSColor *)arg1 ;
-(long long)markupType;
-(void)setMarkupType:(long long)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
@end
