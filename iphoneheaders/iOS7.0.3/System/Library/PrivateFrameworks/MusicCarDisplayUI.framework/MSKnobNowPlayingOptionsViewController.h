/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MSCarDisplayServiceProvider;
@class UILabel, UIButton, MPMediaQueryNowPlayingItem, MPAVController, , UITableView;

@interface MSKnobNowPlayingOptionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UILabel* _titleLabel;
	UIButton* _backButton;
	MPMediaQueryNowPlayingItem* _nowPlayingItem;
	MPAVController* _player;
	<MSCarDisplayServiceProvider>* _serviceProvider;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView;
-(void)knobBackPressed:(id)arg1 ;
-(void)setCreatingGenius:(BOOL)arg1 ;
-(id)initWithItem:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(void).cxx_destruct;
@end
