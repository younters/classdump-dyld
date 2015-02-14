/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFPage, NSString;

@interface PDFOutputLink : NSObject {

	PDFPage* _page;
	CGPoint _point;
	NSString* _name;
	PDFPage* _source;
	CGRect _bounds;

}
-(CGRect)bounds;
-(id)name;
-(id)page;
-(id)source;
-(CGPoint)point;
-(id)initWithPage:(id)arg1 point:(CGPoint)arg2 name:(id)arg3 sourcePage:(id)arg4 bounds:(CGRect)arg5 ;
@end
