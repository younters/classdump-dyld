/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhotoPlugin2012.ilmbplugin/Contents/MacOS/iLMBiPhotoPlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBiPhotoPlugin2012/iLMBiPhotoPlugin2012-Structs.h>
#import <iLMBiPhotoPlugin2012/IP2012_RKModel.h>

@class NSString, NSNumber, NSData, ILMB_IPHOTO_2012_HgRecentChange, NSMutableArray;

@interface IP2012_RKImageAdjustment : IP2012_RKModel {

	NSString* m_versionUuid;
	NSString* m_maskUuid;
	NSString* m_name;
	NSNumber* m_index;
	NSData* m_adjustmentData;
	ILMB_IPHOTO_2012_HgRecentChange* m_recentChange;
	NSMutableArray* m_undoInfoStack;
	NSString* m_lastExternalChangeKey;

}
+(id)maskPathForMaskUuid:(id)arg1 fromDatabase:(id)arg2 ;
+(id)adjustmentsForVersionUuids:(id)arg1 fromDatabase:(id)arg2 ;
+(id)adjustmentsForVersion:(id)arg1 ;
+(id)adjustmentIdentifiersSortedByDefaultIndex;
+(unsigned long long)defaultIndexForAdjustmentIdentifier:(id)arg1 renderPipelineVersion:(long long)arg2 ;
+(id)imageAdjustmentWithIdentifier:(id)arg1 ;
+(id)imageAdjustmentWithAdjustmentSettings:(id)arg1 ;
+(id)decodeAdjustmentData:(id)arg1 ;
-(void)setRecentChange:(id)arg1 ;
-(id)recentChange;
-(char)isUnsupported;
-(id)versionUuid;
-(void)cacheAdjIndex:(id)arg1 ;
-(id)maskUuid;
-(id)adjIndex;
-(void)cacheIndex:(id)arg1 ;
-(void)cacheMaskUuid:(id)arg1 ;
-(void)cacheIsEnabled:(char)arg1 ;
-(id)localizedStringFor:(id)arg1 ;
-(id)initWithUuid:(id)arg1 infoDictionary:(id)arg2 version:(id)arg3 upgrade:(char)arg4 ;
-(void)cacheAdjustmentData:(id)arg1 ;
-(char)isMaskable;
-(id)indexAsNumber;
-(void)masterRectChangedForVersion:(id)arg1 oldMasterRect:(CGRect)arg2 newMasterRect:(CGRect)arg3 ;
-(id)maskPathForMaskUuid:(id)arg1 ;
-(void)registerMaskUuid:(id)arg1 ;
-(id)settingsInfoDictionary;
-(id)identityValueForInputKey:(id)arg1 ;
-(char)startInteractiveChange;
-(void)endInteractiveChange;
-(id)archiveDictionary;
-(void)applyArchiveDictionary:(id)arg1 ;
-(void)applySettingsDictionary:(id)arg1 ;
-(id)_localizedUndoActionNameForKey:(id)arg1 changeType:(unsigned long long)arg2 ;
-(void)_turnOffShowMaster;
-(void)persistAdjustmentForVersion:(id)arg1 ;
-(void)delayedPersistAdjustmentForVersion:(id)arg1 ;
-(id)initWithInfoDictionary:(id)arg1 version:(id)arg2 ;
-(id)initWithUuid:(id)arg1 infoDictionary:(id)arg2 version:(id)arg3 ;
-(id)longDisplayName;
-(void)cacheVersionUuid:(id)arg1 ;
-(void)cacheName:(id)arg1 ;
-(void)cacheData:(id)arg1 ;
-(char)flushModel;
-(id)settingsDictionary;
-(id)summary;
-(id)adjustmentData;
-(void)_willChangeValuesForKeys:(id)arg1 ;
-(void)_didChangeValuesForKeys:(id)arg1 ;
-(char)isAvailable;
-(id)maskPath;
-(char)isInteractive;
-(char)hasMask;
-(void)setIdentity;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)description;
-(id)name;
-(id)identifier;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)index;
-(char)isEnabled;
-(id)data;
-(id)displayName;
-(id)attributes;
-(id)version;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(char)isDefault;
-(id)inputKeys;
-(id)outputKeys;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setDefaults;
-(id)defaultValueForInputKey:(id)arg1 ;
@end
