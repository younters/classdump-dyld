/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, ACAccountCredential;


@protocol MCPersistedAccount <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * canonicalEmailAddress; 
@property (nonatomic,copy) NSString * username; 
@property (assign,nonatomic) char allowInsecureAuthentication; 
@property (nonatomic,retain) ACAccountCredential * credential; 
@property (assign,nonatomic) char enabled; 
@required
-(NSString *)username;
-(ACAccountCredential *)credential;
-(void)setUsername:(id)arg1;
-(void)setCredential:(id)arg1;
-(NSString *)accountDescription;
-(void)setAccountDescription:(id)arg1;
-(char)enabled;
-(void)setAllowInsecureAuthentication:(char)arg1;
-(void)setCanonicalEmailAddress:(id)arg1;
-(char)allowInsecureAuthentication;
-(NSString *)canonicalEmailAddress;
-(NSString *)identifier;
-(void)setEnabled:(char)arg1;

@end
