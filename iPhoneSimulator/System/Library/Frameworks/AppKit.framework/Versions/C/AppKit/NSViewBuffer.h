/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:30 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSView;

@interface NSViewBuffer : NSObject {

	char _isValid;
	NSView* _view;
	CGRect _viewRect;

}
-(void)invalidate;
-(id)initWithView:(id)arg1 ;
-(char)cacheRect:(CGRect)arg1 ;
-(char)restore;
-(char)isValid;
-(void)validate;
@end
