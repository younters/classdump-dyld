/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:29:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Terminal.app/Contents/MacOS/Terminal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Terminal/Terminal-Structs.h>
#import <AppKit/NSTextView.h>

@interface RawTextView : NSTextView {

	char inPaste;
	char skipShouldChange;

}
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(char)shouldChangeTextInRange:(NSRange)arg1 replacementString:(id)arg2 ;
-(void)delete:(id)arg1 ;
-(NSRange)selectionRangeForProposedRange:(NSRange)arg1 granularity:(unsigned long long)arg2 ;
-(void)deleteBackward:(id)arg1 ;
@end
