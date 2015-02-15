/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/nehelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nehelper/NEHelperDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSArray, NSUUID, NSMutableDictionary;

@interface NEHelperConfigurationManager : NSObject <NEHelperDelegate> {

	char _entitled;
	char _superEntitled;
	char _filteringOnly;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _applicationID;
	NSArray* _pluginTypes;
	NSUUID* _userUUID;
	NSMutableDictionary* _filter;
	NSString* _clientName;
	NSString* _bundleID;

}

@property (readonly) char entitled;                                   //@synthesize entitled=_entitled - In the implementation block
@property (readonly) char superEntitled;                              //@synthesize superEntitled=_superEntitled - In the implementation block
@property (readonly) char filteringOnly;                              //@synthesize filteringOnly=_filteringOnly - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) NSString * applicationID;                        //@synthesize applicationID=_applicationID - In the implementation block
@property (readonly) NSArray * pluginTypes;                           //@synthesize pluginTypes=_pluginTypes - In the implementation block
@property (readonly) NSUUID * userUUID;                               //@synthesize userUUID=_userUUID - In the implementation block
@property (readonly) NSMutableDictionary * filter;                    //@synthesize filter=_filter - In the implementation block
@property (readonly) NSString * clientName;                           //@synthesize clientName=_clientName - In the implementation block
@property (readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
-(NSUUID *)userUUID;
-(NSString *)applicationID;
-(char)entitled;
-(NSArray *)pluginTypes;
-(char)filteringOnly;
-(char)superEntitled;
-(NSString *)bundleID;
-(NSMutableDictionary *)filter;
-(NSString *)clientName;
-(void)handleMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
