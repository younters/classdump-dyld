/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISDDataObject.h>
#import <SyncServices/NSCoding.h>

@class NSString, ISDFileReference, NSMutableArray;

@interface ISDDataClass : ISDDataObject <NSCoding> {

	NSString* _name;
	ISDFileReference* _bundleRef;
	NSString* _uiHelperClassName;
	NSString* _imagePath;
	NSString* _appProviderIdentifier;
	NSString* _category;
	NSString* _longName;
	NSMutableArray* _versionInfo;

}
+(void)initialize;
-(id)bundle;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)displayName;
-(void)setImagePath:(id)arg1 ;
-(id)fastName;
-(id)bundleRef;
-(char)morphInToObject:(id)arg1 ;
-(id)uiHelperClassName;
-(void)setBundleRef:(id)arg1 ;
-(void)setUIHelperClassName:(id)arg1 ;
-(id)versionInfo;
-(void)setVersionInfo:(id)arg1 ;
-(void)setCategory:(id)arg1 ;
-(void)setLongName:(id)arg1 ;
-(id)imagePath;
-(id)singularDisplayName;
-(id)category;
-(id)longName;
-(Class)uiHelperClass;
-(id)appProviderIdentifier;
-(void)setAppProviderIdentifier:(id)arg1 ;
@end
