/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/TKTonePickerViewControllerDelegate.h>

@protocol TKTonePickerPopUpButtonControllerDelegate;
@class TKTonePickerViewController, NSString, NSPopUpButton;

@interface TKTonePickerPopUpButtonController : NSObject <TKTonePickerViewControllerDelegate> {

	id<TKTonePickerPopUpButtonControllerDelegate> _delegate;
	TKTonePickerViewController* _tonePickerViewController;

}

@property (nonatomic,readonly) int alertType; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (assign,nonatomic) char showsDefault; 
@property (nonatomic,copy) NSString * defaultToneIdentifier; 
@property (assign,nonatomic) char showsNone; 
@property (assign,getter=isNoneAtTop,nonatomic) char noneAtTop; 
@property (nonatomic,copy) NSString * selectedToneIdentifier; 
@property (assign,nonatomic) id<TKTonePickerPopUpButtonControllerDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSPopUpButton * popUpButton; 
@property (setter=_setTonePickerViewController:,nonatomic,retain) TKTonePickerViewController * _tonePickerViewController;              //@synthesize tonePickerViewController=_tonePickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowsDefault:(char)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setSelectedToneIdentifier:(NSString *)arg1 ;
-(NSString *)defaultToneIdentifier;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(NSPopUpButton *)popUpButton;
-(int)alertType;
-(id)initWithAlertType:(int)arg1 ;
-(char)showsDefault;
-(void)setDefaultToneIdentifier:(NSString *)arg1 ;
-(char)showsNone;
-(void)setShowsNone:(char)arg1 ;
-(char)isNoneAtTop;
-(void)setNoneAtTop:(char)arg1 ;
-(NSString *)selectedToneIdentifier;
-(void)_setTonePickerViewController:(id)arg1 ;
-(TKTonePickerViewController *)_tonePickerViewController;
-(id)init;
-(void)setDelegate:(id<TKTonePickerPopUpButtonControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<TKTonePickerPopUpButtonControllerDelegate>)delegate;
@end
