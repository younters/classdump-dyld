/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol RecentlyClosedTabViewControllerDelegate;
@class NSMutableArray, ;

@interface RecentlyClosedTabViewController : UITableViewController {

	NSMutableArray* _recentlyClosedTabs;
	<RecentlyClosedTabViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <RecentlyClosedTabViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)removeAllRecentlyClosedTabDocuments;
-(void)addRecentlyClosedTabDocument:(id)arg1 ;
-(void)removeRecentlyClosedTabDocument:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)loadView;
@end
