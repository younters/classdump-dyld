/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/ITunesConnectFoundation.framework/ITunesConnectFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MZSecurityKeychainEntry : NSObject {

	NSString* _serviceName;
	NSString* _username;
	NSDate* _creationDate;
	NSDate* _modificationDate;

}

@property (nonatomic,copy) NSString * serviceName;                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * username;                    //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                  //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(id)description;
-(NSDate *)modificationDate;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
@end
