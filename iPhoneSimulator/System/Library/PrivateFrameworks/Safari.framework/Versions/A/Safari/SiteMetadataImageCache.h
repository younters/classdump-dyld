/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Safari/Safari-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface SiteMetadataImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	NSMutableDictionary* _imagesForKeyStrings;
	NSMutableDictionary* _imageQualityToRetainCountMaps;
	NSMutableSet* _pendingKeyStringRequests;
	NSMutableSet* _missingImageKeyStrings;
	NSMutableDictionary* _cacheSettings;
	unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >* _cacheSettingsWriter;
	char _terminating;

}

@property (getter=isTerminating,nonatomic,readonly) char terminating;              //@synthesize terminating=_terminating - In the implementation block
+(const char*)_diskAccessQueueName;
+(id)_cacheSettingsFileURL;
+(id)_imageDirectoryURL;
-(void)savePendingChangesBeforeTermination;
-(char)isTerminating;
-(void)purgeUnneededImages;
-(void)_notifyDidFinishLoadingSettings;
-(void)_dispatchDiskAccessBlock:(/*^block*/id)arg1 ;
-(id)_fileNameForKeyString:(id)arg1 quality:(int)arg2 ;
-(void)_removeImagesPassingTest:(/*^block*/id)arg1 ;
-(id)_loadImageFromDiskForKeyString:(id)arg1 quality:(int)arg2 ;
-(void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 quality:(int)arg3 ;
-(id)_fileLocationForKeyString:(id)arg1 quality:(int)arg2 ;
-(int)_imageStateForKeyString:(id)arg1 ;
-(void)_setImageState:(int)arg1 forKeyString:(id)arg2 ;
-(void)_notifyImageWasLoaded:(id)arg1 forKeyString:(id)arg2 quality:(int)arg3 ;
-(void)_requestImageForKeyString:(id)arg1 quality:(int)arg2 ;
-(id)_keyStringsToRetainCountsForQuality:(int)arg1 ;
-(void)_didRemoveImageForKeyString:(id)arg1 quality:(int)arg2 ;
-(void)_didFinishLoadingSettings;
-(void)_saveCacheSettingsSoon;
-(id)_imageForKeyString:(id)arg1 quality:(int)arg2 ;
-(void)_saveImageToDisk:(id)arg1 forKeyString:(id)arg2 quality:(int)arg3 ;
-(void)_removeAllImages;
-(void)_retainImageForKeyString:(id)arg1 quality:(int)arg2 ;
-(void)_releaseImageForKeyString:(id)arg1 quality:(int)arg2 ;
-(char)_isImageRetainedForKeyString:(id)arg1 quality:(int)arg2 ;
-(char)_areSettingsLoaded;
-(id)_settingForKey:(id)arg1 ;
-(void)_setSetting:(id)arg1 forKey:(id)arg2 ;
-(id)init;
@end

