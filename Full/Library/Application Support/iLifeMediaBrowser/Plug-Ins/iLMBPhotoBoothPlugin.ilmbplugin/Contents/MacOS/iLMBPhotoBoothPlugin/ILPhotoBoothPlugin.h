/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBPhotoBoothPlugin.ilmbplugin/Contents/MacOS/iLMBPhotoBoothPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/ILFolderPluginSDK.h>

@class NSRecursiveLock, NSImage;

@interface ILPhotoBoothPlugin : ILFolderPluginSDK {

	NSRecursiveLock* _appIconLock;
	NSImage* _appIcon;

}
-(id)photoBoothPaths;
-(char)canLoadData;
-(id)rootMediaGroupIcon;
-(id)contextMenuForMediaGroup:(id)arg1 ;
-(id)contextMenuForMediaObject:(id)arg1 inMediaGroup:(id)arg2 ;
-(void)contextMenuOpen:(id)arg1 ;
-(void)removeFolderPath:(id)arg1 ;
-(void)addFolderPath:(id)arg1 ;
-(void)contextMenuReveal:(id)arg1 ;
-(char)checkAndCreateRootMediaGroup:(char)arg1 ;
-(id)performLoadData;
-(id)rootMediaGroupTitle;
-(unsigned long long)mediaTypesSupported;
-(void)removeAllFolderPaths;
-(id)init;
-(void)dealloc;
-(id)uniqueID;
@end
