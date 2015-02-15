/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>
#import <Maps/NSToolbarDelegate.h>

@class MapsDebugTopLevelValuesViewController, NSToolbar, NSArray, NSView, NSString;

@interface MapsDebugTopLevelPanelController : NSWindowController <NSToolbarDelegate> {

	MapsDebugTopLevelValuesViewController* _topLevelController;
	NSToolbar* _toolbar;
	NSArray* _identifiers;
	NSView* _shownView;

}

@property (assign,nonatomic,__weak) id<MapsDebugViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTopLevelValuesViewController:(id)arg1 ;
-(id)_identifiersForChildViewControllers;
-(void)_toolbarSelectedItemDidChange:(id)arg1 ;
-(id)_viewControllerForIdentifier:(id)arg1 ;
-(id)_identifierForViewController:(id)arg1 ;
-(void)setDelegate:(id<MapsDebugViewControllerDelegate>)arg1 ;
-(id)window;
-(id<MapsDebugViewControllerDelegate>)delegate;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(id)toolbarSelectableItemIdentifiers:(id)arg1 ;
@end
