/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SLFacebookPostPrivacySetting : NSObject <NSSecureCoding> {

	int _type;
	NSString* _identifier;
	NSString* _name;
	NSDictionary* _parameters;

}

@property (retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign) int type;                               //@synthesize type=_type - In the implementation block
+(int)_privacySettingTypeFromTypeIdentifier:(id)arg1 ;
+(id)postPrivacySettingWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3 parameters:(id)arg4 ;
+(id)postPrivacySettingForPrivacyOptionDictionary:(id)arg1 ;
+(id)postPrivacySettingsForPrivacyOptions:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)_parametersJSONStringRepresentation;
-(id)parametersFormValueString;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
@end
