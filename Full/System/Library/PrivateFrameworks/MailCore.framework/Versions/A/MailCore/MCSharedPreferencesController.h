/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MailCore/MailCore-Structs.h>
@class NSUserDefaults, NSString, NSArray;

@interface MCSharedPreferencesController : NSObject {

	NSUserDefaults* _sharedMailUserDefaults;

}

@property (retain) NSString * defaultFromAddress; 
@property (assign) char shouldExpandGroups; 
@property (assign) long long addressDisplayMode; 
@property (retain) NSArray * intranetDomains; 
@property (assign) char shouldCheckIntranetDomains; 
@property (readonly) char intranetDomainsManagedByProfile; 
@property (assign) char disableRemoteContent; 
@property (nonatomic,retain) NSUserDefaults * sharedMailUserDefaults;              //@synthesize sharedMailUserDefaults=_sharedMailUserDefaults - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(char)disableRemoteContent;
-(void)_preferencesChangedExternally:(id)arg1 ;
-(NSUserDefaults *)sharedMailUserDefaults;
-(void)_postPreferencesDidChangeNotifications;
-(char)intranetDomainsManagedByProfile;
-(void)setDefaultFromAddress:(NSString *)arg1 ;
-(NSString *)defaultFromAddress;
-(void)setShouldExpandGroups:(char)arg1 ;
-(void)setDisableRemoteContent:(char)arg1 ;
-(void)setAddressDisplayMode:(long long)arg1 ;
-(long long)addressDisplayMode;
-(void)setIntranetDomains:(NSArray *)arg1 ;
-(NSArray *)intranetDomains;
-(void)setShouldCheckIntranetDomains:(char)arg1 ;
-(char)shouldCheckIntranetDomains;
-(void)setSharedMailUserDefaults:(NSUserDefaults *)arg1 ;
-(char)shouldExpandGroups;
-(id)init;
-(void)dealloc;
@end
