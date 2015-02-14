/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary;

@interface AMActionMetadataStore : NSObject {

	char _cacheDataIsDirty;
	NSURL* _cacheFileURL;
	NSMutableDictionary* _actionMetadataByBundleIdentifier;

}

@property (retain) NSURL * cacheFileURL;                                                //@synthesize cacheFileURL=_cacheFileURL - In the implementation block
@property (retain) NSMutableDictionary * actionMetadataByBundleIdentifier;              //@synthesize actionMetadataByBundleIdentifier=_actionMetadataByBundleIdentifier - In the implementation block
@property (assign) char cacheDataIsDirty;                                               //@synthesize cacheDataIsDirty=_cacheDataIsDirty - In the implementation block
+(id)actionMetadataCacheFileURL;
-(NSMutableDictionary *)actionMetadataByBundleIdentifier;
-(void)setCacheDataIsDirty:(char)arg1 ;
-(void)writeUpdatedStoreFileIfNeeded;
-(NSURL *)cacheFileURL;
-(void)setActionMetadataByBundleIdentifier:(NSMutableDictionary *)arg1 ;
-(void)_removeDeadEntries;
-(void)setCacheFileURL:(NSURL *)arg1 ;
-(void)_loadCacheFileData;
-(char)cacheDataIsDirty;
-(id)initWithCacheFileURL:(id)arg1 ;
-(id)valueForKey:(id)arg1 forActionWithBundleIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 forActionWithBundleIdentifier:(id)arg3 ;
-(void)dealloc;
@end
