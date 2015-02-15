/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FamilyControls/FamilyControls-Structs.h>
@class NSMutableDictionary;

@interface FCWidget : NSObject {

	NSMutableDictionary* _dictionary;

}
+(id)widgetWithPath:(id)arg1 ;
+(id)widgetWithDictionary:(id)arg1 ;
+(id)installedWidgets;
-(id)bundleID;
-(void)setIsFromAppStore:(char)arg1 ;
-(void)setAppStoreRating:(id)arg1 ;
-(char)isFromAppStore;
-(id)appStoreRating;
-(id)plistRepresentation;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setPath:(id)arg1 ;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBundleID:(id)arg1 ;
@end
