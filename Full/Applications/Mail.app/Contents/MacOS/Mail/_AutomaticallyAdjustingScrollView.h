/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSScrollView.h>

@interface _AutomaticallyAdjustingScrollView : NSScrollView {

	double _additionalTopInset;

}

@property (assign,nonatomic) double additionalTopInset;              //@synthesize additionalTopInset=_additionalTopInset - In the implementation block
-(void)_updateContentInsets;
-(double)additionalTopInset;
-(void)setAdditionalTopInset:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewDidMoveToWindow;
-(void)viewWillMoveToWindow:(id)arg1 ;
@end
