/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/loginwindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <loginwindow/loginwindow-Structs.h>
@interface LWMounter : NSObject
+(id)sharedMounter;
-(void)mountStartupVolumesFromPrefs;
-(char)lwMountWithArrayOfPaths:(id)arg1 ;
-(id)lwMountURLAtPathWithCurrentUserAuthentication:(id)arg1 path:(id)arg2 flags:(unsigned long long)arg3 mountResult:(int*)arg4 ;
-(char)mountMCXItemsUsingManagedPrefsDict:(id)arg1 ;
-(char)mountLoginItemsForUser:(CFStringRef)arg1 host:(CFStringRef)arg2 ;
-(char)shouldLaunchNonManagedPrefs:(id)arg1 ;
-(id)shortName;
@end
