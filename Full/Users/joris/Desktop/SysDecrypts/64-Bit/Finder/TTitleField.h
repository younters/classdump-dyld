/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/TTextField.h>

@class NSView, TLayoutBinder;

@interface TTitleField : TTextField {

	NSView* _masterView;
	TLayoutBinder* _layoutBinder;

}

@property (nonatomic,retain) NSView * masterView;              //@synthesize masterView=_masterView - In the implementation block
-(void)initCommon;
-(void)setMasterView:(NSView *)arg1 ;
-(void)setUpLayoutBinder;
-(void)adjustTitleWidth:(double)arg1 masterWidth:(double)arg2 ;
-(void)adjustTitleWidth:(double)arg1 ;
-(NSView *)masterView;
-(void)finalize;
-(void)dealloc;
-(void)viewDidMoveToSuperview;
@end
