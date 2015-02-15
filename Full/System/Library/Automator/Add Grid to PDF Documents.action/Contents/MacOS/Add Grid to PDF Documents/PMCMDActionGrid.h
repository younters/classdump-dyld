/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:21:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Add Grid to PDF Documents.action/Contents/MacOS/Add Grid to PDF Documents
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Add Grid to PDF Documents/Add Grid to PDF Documents-Structs.h>
#import <Add Grid to PDF Documents/PMPDFActionGrid.h>

@class NSAppleEventDescriptor;

@interface PMCMDActionGrid : PMPDFActionGrid {

	NSAppleEventDescriptor* _theOutput;

}
-(id)commandParameters;
-(void)finalizeArgs:(id)arg1 ;
-(id)adjustParams:(id)arg1 ;
-(id)toolName;
-(void)processPDFDocument:(CGPDFDocumentRef)arg1 atURL:(id)arg2 toOuput:(id)arg3 ;
-(id)runTool:(id)arg1 withInput:(id)arg2 output:(id)arg3 params:(id)arg4 ;
-(void)appendComponent:(id)arg1 ofOption:(id)arg2 withFloatValue:(double)arg3 toArgs:(id)arg4 ;
-(void)append:(id)arg1 ofParams:(id)arg2 toArgs:(id)arg3 ;
-(void)appendInput:(id)arg1 toArgs:(id)arg2 ;
-(void)appendString:(id)arg1 toArgs:(id)arg2 ;
-(void)appendOutput:(id)arg1 toArgs:(id)arg2 ;
-(void)appendOption:(id)arg1 withValue:(id)arg2 toArgs:(id)arg3 ;
-(id)tool;
@end
