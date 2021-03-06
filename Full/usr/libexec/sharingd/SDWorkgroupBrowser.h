/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <sharingd/SDBonjourBrowserDelegate.h>

@class SDBonjourBrowser, NSArray, NSSet, NSString;

@interface SDWorkgroupBrowser : NSObject <SDBonjourBrowserDelegate> {

	int _clientCount;
	SDBonjourBrowser* _browser;

}

@property (copy,readonly) NSArray * nodes; 
@property (copy,readonly) NSSet * workgroups; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBrowser;
-(void)bonjourNodesDidChange:(id)arg1 ;
-(NSSet *)workgroups;
-(id)init;
-(void)stop;
-(void)start;
-(NSArray *)nodes;
@end

