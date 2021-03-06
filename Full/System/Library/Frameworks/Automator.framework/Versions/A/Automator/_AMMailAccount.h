/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:29 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSString, NSArray, NSURL;

@interface _AMMailAccount : SBObject

@property (copy) id deliveryAccount; 
@property (copy) NSString * name; 
@property (copy) NSString * password; 
@property (assign) int authentication; 
@property (readonly) int accountType; 
@property (copy) NSArray * emailAddresses; 
@property (copy) NSString * fullName; 
@property (assign) long long emptyJunkMessagesFrequency; 
@property (assign) long long emptySentMessagesFrequency; 
@property (assign) long long emptyTrashFrequency; 
@property (assign) char emptyJunkMessagesOnQuit; 
@property (assign) char emptySentMessagesOnQuit; 
@property (assign) char emptyTrashOnQuit; 
@property (assign) char enabled; 
@property (copy) NSString * userName; 
@property (copy,readonly) NSURL * accountDirectory; 
@property (assign) long long port; 
@property (copy) NSString * serverName; 
@property (assign) char includeWhenGettingNewMail; 
@property (assign) char moveDeletedMessagesToTrash; 
@property (assign) char usesSsl; 
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(int)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(int)authentication;
-(void)setAuthentication:(int)arg1 ;
-(long long)emptyJunkMessagesFrequency;
-(void)setEmptyJunkMessagesFrequency:(long long)arg1 ;
-(char)emptyJunkMessagesOnQuit;
-(void)setEmptyJunkMessagesOnQuit:(char)arg1 ;
-(char)includeWhenGettingNewMail;
-(void)setIncludeWhenGettingNewMail:(char)arg1 ;
-(char)moveDeletedMessagesToTrash;
-(void)setMoveDeletedMessagesToTrash:(char)arg1 ;
-(char)usesSsl;
-(void)setUsesSsl:(char)arg1 ;
-(NSString *)password;
-(int)accountType;
-(char)enabled;
-(id)deliveryAccount;
-(void)setDeliveryAccount:(id)arg1 ;
-(NSURL *)accountDirectory;
-(long long)emptyTrashFrequency;
-(id)mailboxes;
-(void)setEmptyTrashFrequency:(long long)arg1 ;
-(long long)emptySentMessagesFrequency;
-(void)setEmptySentMessagesFrequency:(long long)arg1 ;
-(char)emptyTrashOnQuit;
-(void)setEmptyTrashOnQuit:(char)arg1 ;
-(char)emptySentMessagesOnQuit;
-(void)setEmptySentMessagesOnQuit:(char)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setEnabled:(char)arg1 ;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(NSArray *)emailAddresses;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(long long)port;
-(void)setPort:(long long)arg1 ;
@end

