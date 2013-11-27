/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIActivity.h>
#import <StoreKitUI/SKUIGiftViewControllerDelegate.h>

@class SKUIClientContext, SKUIProductPageItem;

@interface SKUIGiftActivity : UIActivity <SKUIGiftViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	SKUIProductPageItem* _item;

}
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
-(id)_beforeActivity;
-(void)giftViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
-(void).cxx_destruct;
@end
