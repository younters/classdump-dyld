/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DesktopServicesPriv/DesktopServicesPriv-Structs.h>
#import <DesktopServicesPriv/FINode.h>

@interface FITNode : FINode {

	void** _node[10];

}
-(void*)asTNode;
-(TNode*)asTNodeObject;
-(void)deleteTNode;
-(oneway void)releaseUnderMonitor;
-(oneway void)release;
-(void)finalize;
-(void)dealloc;
-(id)description;
@end
