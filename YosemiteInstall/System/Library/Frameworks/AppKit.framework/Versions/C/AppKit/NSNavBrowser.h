/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSBrowser.h>

@interface NSNavBrowser : NSBrowser {

	unsigned _delegate_labelColorForRow : 1;
	unsigned _delegate_isEnabledRow : 1;
	unsigned _delegate_didClickDisabledRow : 1;
	unsigned _reserved : 29;

}
+(Class)browserTableViewClass;
-(void)setDelegate:(id)arg1 ;
-(char)_useSnowLeopardBehavior;
-(long long)labelColorIndexForRow:(long long)arg1 column:(long long)arg2 ;
-(char)isEnabledRow:(long long)arg1 column:(long long)arg2 ;
-(void)didClickOnDisabledRow:(long long)arg1 column:(long long)arg2 ;
@end
