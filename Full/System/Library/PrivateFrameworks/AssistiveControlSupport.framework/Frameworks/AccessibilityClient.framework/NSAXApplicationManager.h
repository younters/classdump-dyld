/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Frameworks/AccessibilityClient.framework/AccessibilityClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityClient/AccessibilityClient-Structs.h>
@class NSMutableSet, NSAXApplication, NSArray, NSLock, NSMutableArray, NSMutableDictionary;

@interface NSAXApplicationManager : NSObject {

	void* _lsNotificationID;
	NSMutableSet* _applications;
	NSAXApplication* _focusedApplication;
	unsigned _cgsConnection;
	ProcessSerialNumber _keyboardPSN;
	long long* _menuExtraBlockGen;
	CGRect _menubarRect;
	CGRect _menuExtrasRect;
	NSArray* _menuExtras;
	char _unresponsiveAppCheckPending;
	NSLock* _unresponsiveAppLock;
	NSMutableArray* _unresponsiveApps;
	NSLock* _bundleIDForPIDCacheLock;
	NSMutableDictionary* _bundleIDForPID;

}
+(Class)applicationClassForBundleIdentifier:(CFStringRef)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)sharedManager;
-(void)markApplicationAsUnresponsive:(id)arg1 ;
-(void)openMenuExtra:(id)arg1 ;
-(id)applicationWithID:(long long)arg1 ;
-(char)_registerForCGEvents;
-(void)_registerCurrentlyRunningApplications;
-(void)updateMenuExtraInformation;
-(void)_setPSNIsFrontMostIfNeeded:(ProcessSerialNumber)arg1 ;
-(id)_getApplicationWithPSN:(ProcessSerialNumber)arg1 ;
-(ProcessSerialNumber)_frontmostPSNAccordingToSystem;
-(id)_knownApplicationWithPSN:(ProcessSerialNumber)arg1 ;
-(id)applicationWithMenubar;
-(id)_frontmostApplicationAccordingToSystem;
-(void)setFrontmostApplication:(id)arg1 ;
-(void)_updateFrontmostApplication;
-(char)_isPSNPermittedFrontmost:(ProcessSerialNumber)arg1 ;
-(void)_forgetApplicationWithPSN:(ProcessSerialNumber)arg1 ;
-(id)applicationWithType:(int)arg1 ;
-(void)_updateMenuExtraInformation:(id)arg1 focusedApplication:(id)arg2 systemUIServer:(id)arg3 blockGen:(long long)arg4 ;
-(void)markApplicationAsResponsive:(id)arg1 ;
-(void)_scheduleUnresponsiveAppTestIfNeeded;
-(void)_checkUnresponsiveApps;
-(Class)classForUIElement:(id)arg1 ;
-(ProcessSerialNumber)_zoomPsn;
-(void)startObservingApplications;
-(void)stopObservingApplications;
-(id)focusedApplication;
-(void)switchAwayFromApplication:(id)arg1 ;
-(id)bundleIDForApplicationWithPID:(unsigned long long)arg1 ;
-(void)_handleNotification:(int)arg1 time:(double)arg2 data:(void*)arg3 asn:(LSASNRef)arg4 context:(const void*)arg5 session:(int)arg6 notificationID:(void*)arg7 ;
-(id)mockElementsForMenuExtras;
-(char)isSpotlightActive;
-(char)isApplicationRunning:(id)arg1 ;
-(char)isApplicationResponsive:(id)arg1 ;
-(void)_handleCGEvent:(CGEventRef)arg1 ;
-(unsigned)_cgsConnection;
-(void)switchToApplication:(id)arg1 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(void)dealloc;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)frontmostApplication;
@end
