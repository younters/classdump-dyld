/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/ReadingListSidebarViewControllerBase.h>
#import <Safari/ReadingListTableViewControllerDelegate.h>
#import <Safari/SidebarScrollViewAccessibilityDelegate.h>
#import <Safari/CustomKeyViewLoop.h>
#import <Safari/SidebarContentFiltering.h>
#import <Safari/SidebarSearchFieldViewDelegate.h>

@class NSSearchField, NSArray, SidebarScrollView, SidebarPlaceholderViewController, SharedLinksBottomBarView, SharedLinksSubscriptionsViewController, AutomaticReadingListContentProvider, NSString;

@interface AutomaticReadingListSidebarViewController : ReadingListSidebarViewControllerBase <ReadingListTableViewControllerDelegate, SidebarScrollViewAccessibilityDelegate, CustomKeyViewLoop, SidebarContentFiltering, SidebarSearchFieldViewDelegate> {

	SidebarScrollView* _scrollView;
	SidebarPlaceholderViewController* _placeholderViewController;
	SharedLinksBottomBarView* _bottomBarView;
	SharedLinksSubscriptionsViewController* _subscriptionsViewController;
	AutomaticReadingListContentProvider* _contentProvider;

}

@property (nonatomic,retain) AutomaticReadingListContentProvider * contentProvider;              //@synthesize contentProvider=_contentProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSearchField * searchField; 
@property (nonatomic,readonly) NSArray * allFilteringControls; 
-(NSSearchField *)searchField;
-(id)_contentFilter;
-(void)_socialAccountsDidChange:(id)arg1 ;
-(AutomaticReadingListContentProvider *)contentProvider;
-(void)_editSubscriptions:(id)arg1 ;
-(void)_updatePlaceholderViewVisibility;
-(void)setContentProvider:(AutomaticReadingListContentProvider *)arg1 ;
-(void)_sharedLinksDidChange:(id)arg1 ;
-(void)_loadAutomaticReadingListItem:(id)arg1 withPolicy:(long long)arg2 ;
-(id)_menuItemsForRetweetOfAutomaticReadingListItem:(id)arg1 ;
-(id)_menuItemForRetweetOfAutomaticReadingListItemFromSourceAccount:(id)arg1 ;
-(void)tableViewController:(id)arg1 receivedNavigationActionWithPolicy:(long long)arg2 forItem:(id)arg3 ;
-(id)tableViewController:(id)arg1 menuForEvent:(id)arg2 withExistingMenu:(id)arg3 andItem:(id)arg4 ;
-(void)tableViewController:(id)arg1 didActivateItem:(id)arg2 ;
-(id)tableViewController:(id)arg1 accessibilityDescriptionForItem:(id)arg2 ;
-(void)displayedItemsDidChange:(id)arg1 ;
-(void)tableViewDidMoveToWindow:(id)arg1 ;
-(id)sideBarScrollViewAccessibilityChildren:(id)arg1 ;
-(id)safari_keyViews;
-(NSArray *)allFilteringControls;
-(void)sidebarSearchFieldViewSearchStringDidChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setWindowController:(id)arg1 ;
-(void)loadView;
@end
