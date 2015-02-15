/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <AppKit/NSPanel.h>

@class NVPlaceCardActionHandler, NVPlace, NVDetailsStandaloneCloseButton, _MKPlaceViewController;

@interface NVDetailsStandaloneWindow : NSPanel {

	NVPlaceCardActionHandler* _actionHandler;
	NVPlace* _place;
	NVDetailsStandaloneCloseButton* _closeButton;
	_MKPlaceViewController* _viewController;

}

@property (retain) NVPlace * place;                                           //@synthesize place=_place - In the implementation block
@property (retain) NVDetailsStandaloneCloseButton * closeButton;              //@synthesize closeButton=_closeButton - In the implementation block
@property (retain) _MKPlaceViewController * viewController;                   //@synthesize viewController=_viewController - In the implementation block
-(id)initWithContentRect:(CGRect)arg1 viewController:(id)arg2 widthConstraint:(id)arg3 place:(id)arg4 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)setCloseButton:(NVDetailsStandaloneCloseButton *)arg1 ;
-(void)setPlace:(NVPlace *)arg1 ;
-(NVPlace *)place;
-(void)dealloc;
-(char)canBecomeKeyWindow;
-(void)setViewController:(_MKPlaceViewController *)arg1 ;
-(NVDetailsStandaloneCloseButton *)closeButton;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(id)standardWindowButton:(unsigned long long)arg1 ;
-(_MKPlaceViewController *)viewController;
@end
