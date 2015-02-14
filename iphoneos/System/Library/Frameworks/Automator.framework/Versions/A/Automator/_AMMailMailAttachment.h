/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSString;

@interface _AMMailMailAttachment : SBObject

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * MIMEType; 
@property (readonly) long long fileSize; 
@property (readonly) char downloaded; 
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(id)id;
-(char)downloaded;
-(void)saveIn:(id)arg1 as:(int)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(NSString *)MIMEType;
-(NSString *)name;
-(long long)fileSize;
@end
