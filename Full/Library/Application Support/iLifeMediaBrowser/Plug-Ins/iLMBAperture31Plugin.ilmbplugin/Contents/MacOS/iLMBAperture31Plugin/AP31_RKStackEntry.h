/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperture31Plugin.ilmbplugin/Contents/MacOS/iLMBAperture31Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBAperture31Plugin/AP31_RKModel.h>

@class AP31_RKStackContent, NSString;

@interface AP31_RKStackEntry : AP31_RKModel {

	AP31_RKStackContent* m_stackContent;
	NSString* m_stackUuid;
	NSString* m_versionUuid;
	unsigned long long m_orderNumber;

}
+(id)stackEntriesWithStackUuidIn:(id)arg1 ;
+(id)stackEntriesWithStackUuid:(id)arg1 ;
-(id)versionUuid;
-(id)initWithStackUuid:(id)arg1 versionUuid:(id)arg2 orderNumber:(unsigned long long)arg3 inDatabase:(id)arg4 ;
-(id)initWithStackUuid:(id)arg1 versionUuid:(id)arg2 inDatabase:(id)arg3 ;
-(void)cacheVersionUuid:(id)arg1 ;
-(void)cacheOrderNumber:(unsigned long long)arg1 ;
-(void)cacheStackUuid:(id)arg1 ;
-(void)setStackContent:(id)arg1 ;
-(id)stackUuid;
-(void)dealloc;
-(id)description;
-(unsigned long long)orderNumber;
@end
