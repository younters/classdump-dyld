/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhotoPlugin2012.ilmbplugin/Contents/MacOS/iLMBiPhotoPlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ILMB_IPHOTO_2012_HgLockedDictionary;

@interface ILMB_IPHOTO_2012_HgModelIdMapper : NSObject {

	ILMB_IPHOTO_2012_HgLockedDictionary* m_modelIdMap;

}
-(id)modelIdMapForClass:(Class)arg1 ;
-(void)addMappingForModelId:(id)arg1 toModelId:(id)arg2 forClass:(Class)arg3 ;
-(id)convertModelId:(id)arg1 forClass:(Class)arg2 ;
-(id)init;
-(void)dealloc;
@end

