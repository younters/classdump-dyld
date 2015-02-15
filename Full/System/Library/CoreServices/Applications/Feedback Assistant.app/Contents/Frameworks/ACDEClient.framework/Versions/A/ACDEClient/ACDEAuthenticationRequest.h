/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/Frameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol ACDEAuthenticationRequest <NSObject>
@property (retain) NSString * realm; 
@property (retain) NSString * userName; 
@property (retain) NSNumber * appID; 
@property (retain) NSString * appIDKey; 
@property (retain) NSNumber * serverResponseTimeout; 
@required
-(NSNumber *)serverResponseTimeout;
-(NSString *)appIDKey;
-(void)setAppIDKey:(id)arg1;
-(void)setRealm:(id)arg1;
-(void)setServerResponseTimeout:(id)arg1;
-(NSString *)realm;
-(NSNumber *)appID;
-(void)setAppID:(id)arg1;
-(NSString *)userName;
-(void)setUserName:(id)arg1;

@end
