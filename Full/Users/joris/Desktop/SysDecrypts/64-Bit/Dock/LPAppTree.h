/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/LPAppTreeNode.h>

@class NSMutableDictionary;

@interface LPAppTree : LPAppTreeNode {

	NSMutableDictionary* _nodesByBundleIdentifier;

}
-(id)addApp:(id)arg1 ;
-(void)addAppsFromGroup:(id)arg1 ;
-(void)iterateAllAppsAtPath:(id)arg1 matching:(/*^block*/id)arg2 ;
-(void)addApps:(id)arg1 ;
-(void)removeApp:(id)arg1 ;
-(id)splitOutTreeAtPath:(id)arg1 ;
-(void)mergeTree:(id)arg1 ;
-(void)removeApps:(id)arg1 ;
-(id)subNodeAtPath:(id)arg1 ;
-(id)nodesForBundleIdentifier:(id)arg1 ;
-(id)treeDescription;
-(id)init;
@end
