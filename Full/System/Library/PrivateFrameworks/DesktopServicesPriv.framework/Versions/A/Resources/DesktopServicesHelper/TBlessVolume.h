/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:30:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/Resources/DesktopServicesHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TBlessVolume : NSObject
+(id)xattrStringValueForKey:(id)arg1 url:(id)arg2 ;
-(char)isSystemVolume:(id)arg1 ;
-(char)blessVolume:(id)arg1 error:(id*)arg2 ;
-(id)majorReleaseForVolume:(id)arg1 ;
-(id)systemVersionForVolume:(id)arg1 ;
-(char)_generateAndWriteDiskLabelForVolume:(id)arg1 pickerLabel:(id)arg2 scale:(int)arg3 error:(out id*)arg4 ;
-(char)_blessBooterforVolume:(id)arg1 pickerLabel:(id)arg2 error:(id*)arg3 ;
-(char)isAtLeastMountainLion:(id)arg1 ;
@end
