/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/class-dump
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <class-dump/class-dump-Structs.h>
#import <class-dump/CDLoadCommand.h>

@class NSString;

@interface CDLCDylib : CDLoadCommand {

	dylib_command _dylibCommand;
	NSString* _path;

}

@property (readonly) NSString * path;                                                 //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) unsigned timestamp; 
@property (nonatomic,readonly) unsigned currentVersion; 
@property (nonatomic,readonly) unsigned compatibilityVersion; 
@property (nonatomic,readonly) NSString * formattedCurrentVersion; 
@property (nonatomic,readonly) NSString * formattedCompatibilityVersion; 
-(unsigned)cmd;
-(NSString *)formattedCurrentVersion;
-(NSString *)formattedCompatibilityVersion;
-(id)initWithDataCursor:(id)arg1 ;
-(unsigned)cmdsize;
-(unsigned)compatibilityVersion;
-(NSString *)path;
-(unsigned)timestamp;
-(unsigned)currentVersion;
@end
