/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCGSContext.h>
#import <AppKit/NSPrintGraphicsContextAdvancing.h>

@class NSDictionary, NSFocusStack;

@interface NSPrintCopyingGraphicsContext : NSCGSContext <NSPrintGraphicsContextAdvancing> {

	NSDictionary* _attributes;
	NSFocusStack* _focusStack;
	char _isCopyingToPDF;

}
-(void)dealloc;
-(id)initWithContextAttributes:(id)arg1 ;
-(id)focusStack;
-(char)isDrawingToScreen;
-(id)attributes;
-(void)setFocusStack:(id)arg1 ;
-(void)endDocument;
-(void)beginDocumentWithTitle:(id)arg1 ;
-(void)beginPageWithBounds:(CGRect)arg1 ;
-(void)endPage;
@end
