/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:57:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Stickies.app/Contents/MacOS/Stickies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stickies/Stickies-Structs.h>
#import <AppKit/NSDocument.h>

@class NSTextView, Document, NSColor, NSString, NSPasteboard;

@interface StickiesDocument : NSDocument {

	NSTextView* mTextView;
	Document* mDocument;
	NSColor* mStickyColor[4];
	NSString* mPathInit;
	NSPasteboard* mPasteboard;

}
-(id)stickiesWindow;
-(char)_loadFromPath:(id)arg1 ;
-(char)exportSticky:(id)arg1 ;
-(void)addHyperlink:(id)arg1 ;
-(id)mDocument;
-(void)syncWindowMenuItem;
-(void)_textDidChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(void)windowDidBecomeKey:(id)arg1 ;
-(id)document;
-(void)runPageLayout:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(char)isEmpty;
-(id)textView;
-(id)initWithPasteboard:(id)arg1 ;
-(char)isDocumentEdited;
-(char)loadDataRepresentation:(id)arg1 ofType:(id)arg2 ;
-(id)dataRepresentationOfType:(id)arg1 ;
-(void)printDocumentWithSettings:(id)arg1 showPrintPanel:(char)arg2 delegate:(id)arg3 didPrintSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(id)windowNibName;
-(void)setDocument:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)windowControllerDidLoadNib:(id)arg1 ;
-(char)windowShouldClose:(id)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
@end

