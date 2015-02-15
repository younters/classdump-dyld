/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/IPropertyScrollViewController.h>
#import <Finder/NSTextViewDelegate.h>

@class NSString;

@interface TPropertyTextViewController : IPropertyScrollViewController <NSTextViewDelegate> {

	unsigned long long _maxChars;

}

@property (assign,nonatomic) unsigned long long maxChars;              //@synthesize maxChars=_maxChars - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initCommon;
-(unsigned long long)maxChars;
-(void)setMaxChars:(unsigned long long)arg1 ;
-(void)setSubview:(id)arg1 ;
-(int)applyValueToNodes:(id)arg1 ;
-(void)nodesWillChange;
-(void)dealloc;
-(void)flush;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)textDidEndEditing:(id)arg1 ;
@end
