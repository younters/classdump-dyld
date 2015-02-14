/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AppSandbox.framework/Versions/A/AppSandbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet;

@interface AppSandboxFolderRedirector : NSObject {

	NSString* _homedir;
	NSSet* _redirectedPaths;

}
+(id)folderRedirectorForUserWithHomeDirectory:(id)arg1 error:(id*)arg2 ;
+(id)expandPathForFolder:(id)arg1 withUserHomeDirectory:(id)arg2 ;
+(id)folderRedirectorForUID:(unsigned)arg1 error:(id*)arg2 ;
+(id)redirectedFolders;
-(id)redirectedFolderPaths;
-(id)resolvedRedirectedFolders;
-(id)initForUserWithHomeDirectory:(id)arg1 error:(id*)arg2 ;
-(char)isRedirectionEnabledForPath:(id)arg1 ;
-(void)dealloc;
@end
