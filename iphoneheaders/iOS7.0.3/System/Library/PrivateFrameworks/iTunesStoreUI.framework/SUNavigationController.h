/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>
#import <iTunesStoreUI/SUScriptNativeObject.h>

@class SUClientInterface, SUSection;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject> {

	BOOL _canBeWeakScriptReference;
	SUClientInterface* _clientInterface;
	BOOL _loading;
	SUSection* _section;
	int _storeBarStyle;

}

@property (assign,getter=isLoading,nonatomic) BOOL loading;                    //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (nonatomic,retain) SUSection * section;                              //@synthesize section=_section - In the implementation block
-(void)setLoading:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2 ;
-(id)section;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setParentViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(id)moreListImage;
-(id)moreListSelectedImage;
-(void)addChildViewController:(id)arg1 ;
-(void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)setViewControllers:(id)arg1 ;
-(void)setToolbarHidden:(BOOL)arg1 ;
-(BOOL)isLoading;
-(void)setSection:(id)arg1 ;
-(id)clientInterface;
-(void)setClientInterface:(id)arg1 ;
-(int)ITunesStoreUIBarStyle;
-(void)_setStoreBarStyle:(int)arg1 clientInterface:(id)arg2 ;
-(id)copyArchivableContext;
-(id)initWithSection:(id)arg1 rootViewController:(id)arg2 ;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(id)_sectionForViewController:(id)arg1 ;
-(BOOL)clearsWeakScriptReferences;
-(void)_loadingDidChangeNotification:(id)arg1 ;
-(id)copyScriptViewController;
@end
