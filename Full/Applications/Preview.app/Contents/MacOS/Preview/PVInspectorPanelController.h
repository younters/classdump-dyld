/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSImage, NSString;

@interface PVInspectorPanelController : NSViewController {

	id _auxiliaryController;
	NSImage* _tabImage;
	NSString* _panelTitle;
	NSString* _tooltip;
	id _inspectedWindowController;

}

@property (retain) id inspectedWindowController;              //@synthesize inspectedWindowController=_inspectedWindowController - In the implementation block
@property (readonly) NSImage * tabImage;                      //@synthesize tabImage=_tabImage - In the implementation block
@property (readonly) NSString * title;                        //@synthesize panelTitle=_panelTitle - In the implementation block
@property (readonly) NSString * tooltip;                      //@synthesize tooltip=_tooltip - In the implementation block
@property (readonly) id auxiliaryController;                  //@synthesize auxiliaryController=_auxiliaryController - In the implementation block
-(id)inspectedWindowController;
-(void)setInspectedWindowController:(id)arg1 ;
-(id)initWithNibName:(id)arg1 tabImage:(id)arg2 title:(id)arg3 tooltip:(id)arg4 ;
-(id)auxiliaryController;
-(NSImage *)tabImage;
-(NSString *)tooltip;
-(void)dealloc;
-(NSString *)title;
@end
