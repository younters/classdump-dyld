/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:46:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/StagedFrameworks/Safari/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/WebInspector-Structs.h>
#import <WebInspector/RWIServiceConnectionDelegate.h>

@protocol RWIBaseManagerDelegate;
@class NSMutableDictionary, NSString, NSSet;

@interface RWIBaseManager : NSObject <RWIServiceConnectionDelegate> {

	id<RWIBaseManagerDelegate> _delegate;
	NSMutableDictionary* _targets;
	NSMutableDictionary* _floatingDebuggables;
	NSString* _uuid;

}

@property (assign,nonatomic) id<RWIBaseManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * targets; 
@property (nonatomic,retain,readonly) NSString * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)targetHasBasicInformation:(id)arg1 ;
-(void)_sendIdentifierToTarget:(id)arg1 ;
-(id)_keyForDeviceRef:(AMDeviceRef)arg1 ;
-(void)_removeApplication:(id)arg1 ;
-(id)managedTargetWithKey:(id)arg1 ;
-(void)_fetchListingForApplication:(id)arg1 ;
-(void)_addApplication:(id)arg1 immediatelyFetchListing:(char)arg2 ;
-(void)_removeDebuggable:(id)arg1 ;
-(void)_removeFloatingDebuggable:(id)arg1 ;
-(void)_addDebuggable:(id)arg1 ;
-(void)serviceConnectionDidClose:(id)arg1 ;
-(void)openServiceConnectionForTarget:(id)arg1 ;
-(void)targetEstablishedServiceConnection:(id)arg1 ;
-(id)manageDevice:(AMDeviceRef)arg1 ;
-(void)unmanageDevice:(AMDeviceRef)arg1 ;
-(id)managedDeviceWithRef:(AMDeviceRef)arg1 ;
-(id)manageTarget:(id)arg1 withKey:(id)arg2 ;
-(void)unmanageTargetWithKey:(id)arg1 ;
-(void)_addApplication:(id)arg1 ;
-(void)_addFloatingDebuggable:(id)arg1 forApplicationIdentifier:(id)arg2 ;
-(void)_adoptFloatingDebuggables:(id)arg1 ;
-(void)_fetchApplicationListingForTarget:(id)arg1 ;
-(void)_rpc_reportConnectedApplicationList:(id)arg1 ;
-(void)_rpc_applicationConnected:(id)arg1 ;
-(void)_rpc_applicationUpdated:(id)arg1 ;
-(void)_rpc_applicationDisconnected:(id)arg1 ;
-(void)_rpc_applicationSentListing:(id)arg1 ;
-(void)_rpc_applicationSentData:(id)arg1 ;
-(void)_rpc_reportSetup:(id)arg1 ;
-(NSString *)uuid;
-(id)init;
-(void)setDelegate:(id<RWIBaseManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<RWIBaseManagerDelegate>)delegate;
-(NSSet *)targets;
@end
