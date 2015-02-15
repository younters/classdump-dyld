/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:59:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSString, NSNumber;

@interface IAPisaPrefsViewController : NSWindowController {

	NSString* _urlString;
	NSNumber* _allowUnsigned;
	id _delegate;
	char _reload;

}

@property (copy) NSNumber * allowUnsigned;              //@synthesize allowUnsigned=_allowUnsigned - In the implementation block
@property (copy) NSString * urlString;                  //@synthesize urlString=_urlString - In the implementation block
@property (assign) id delegate;                         //@synthesize delegate=_delegate - In the implementation block
-(void)reloadClicked:(id)arg1 ;
-(void)showForWindow:(id)arg1 ;
-(NSNumber *)allowUnsigned;
-(void)setAllowUnsigned:(NSNumber *)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)cancelClicked:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
@end
