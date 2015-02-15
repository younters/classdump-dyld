/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MUITokenAddressDelegate.h>

@class NSString;

@interface MailAddressDelegate : NSObject <MUITokenAddressDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(void)_openNewMessageForTokenAddress:(id)arg1 ;
-(void)_addToVIPs:(id)arg1 ;
-(void)_removeFromVIPs:(id)arg1 ;
-(void)_searchForToken:(id)arg1 ;
-(char)tokenAddressIsVIP:(id)arg1 ;
-(void)tokenAddress:(id)arg1 didSelectAction:(long long)arg2 ;
-(void)dealloc;
@end
