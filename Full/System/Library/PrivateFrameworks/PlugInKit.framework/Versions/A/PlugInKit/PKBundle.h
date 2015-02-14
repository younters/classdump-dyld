/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/Versions/A/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSString, NSObject, NSURL, NSDictionary;

@interface PKBundle : NSObject {

	NSString* _supportPath;
	NSObject*<OS_xpc_object> __bundle;

}

@property (retain) NSObject*<OS_xpc_object> _bundle;              //@synthesize _bundle=__bundle - In the implementation block
@property (readonly) NSURL * url; 
@property (readonly) NSString * path; 
@property (readonly) NSDictionary * infoDictionary; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * supportPath;                      //@synthesize supportPath=_supportPath - In the implementation block
@property (readonly) NSString * executablePath; 
@property (readonly) NSString * plugInsPath; 
-(NSString *)path;
-(NSURL *)url;
-(NSString *)bundleIdentifier;
-(NSDictionary *)infoDictionary;
-(NSString *)executablePath;
-(id)initWithPath:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSObject*<OS_xpc_object>)_bundle;
-(id)initWithXPCBundle:(id)arg1 ;
-(id)initWithExecutablePath:(id)arg1 ;
-(void)set_bundle:(NSObject*<OS_xpc_object>)arg1 ;
-(id)stringProperty:(int)arg1 ;
-(NSString *)supportPath;
-(id)bundleDirectory:(id)arg1 ;
-(id)initForMainBundle;
-(id)initWithExecutableURL:(id)arg1 ;
-(NSString *)plugInsPath;
@end
