/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Wireless Diagnostics.app/Contents/MacOS/Wireless Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <Wireless Diagnostics/NSTextFieldDelegate.h>

@class NSTextField, NSString;

@interface WDAdditionalInfoViewController : NSViewController <NSTextFieldDelegate> {

	NSTextField* _additionalInfoTextField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)screenViewName;
-(id)screenTitle;
-(void)loadScreen:(id)arg1 ;
-(void)showScreen;
-(void)unloadScreen;
-(id)nextTitle;
-(id)backTitle;
-(void)onNext:(id)arg1 ;
-(void)onBack:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)awakeFromNib;
@end
