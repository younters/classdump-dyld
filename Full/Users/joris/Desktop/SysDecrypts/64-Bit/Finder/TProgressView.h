/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TUpdateLayerView.h>

@interface TProgressView : TUpdateLayerView {

	TNSRef<NSView *> _statusView;
	TNSRef<NSLayoutConstraint *> _statusViewBottomConstraint;
	TNSRef<NSView *> _errorView;
	TNSRef<NSLayoutConstraint *> _errorViewBottomConstraint;
	TNSRef<TUpdateLayerView *> _separator;

}

@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden; 
@property (nonatomic,readonly) BOOL isShowingStatus; 
-(void)hideErrorView;
-(void)showErrorView:(id)arg1 withInitialKeyView:(id)arg2 ;
-(BOOL)isShowingStatus;
-(void)showStatusView:(id)arg1 ;
-(void)initCommon;
-(BOOL)isSeparatorHidden;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)updateConstraints;
@end
