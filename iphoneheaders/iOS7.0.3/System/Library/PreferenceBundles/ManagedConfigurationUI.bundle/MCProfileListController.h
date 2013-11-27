/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ManagedConfigurationUI/MCURLListenerListController.h>
#import <UIKit/UITableViewDelegate.h>

@class UIImage;

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate> {

	UIImage* _profileListIcon;

}

@property (nonatomic,retain) UIImage * profileListIcon;              //@synthesize profileListIcon=_profileListIcon - In the implementation block
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_profileListChanged:(id)arg1 ;
-(id)profileListIcon;
-(void)setProfileListIcon:(id)arg1 ;
-(id)specifiers;
-(void).cxx_destruct;
@end
