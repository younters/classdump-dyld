/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:26:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Script Editor.app/Contents/PlugIns/ScriptManager.seplugin/Contents/MacOS/ScriptManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptManager/ScriptManager-Structs.h>
#import <ScriptManager/NSMenuDelegate.h>

@class NSString;

@interface SEScriptManager : NSObject <NSMenuDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedScriptManager;
-(void)openScriptsFolder:(id)arg1 ;
-(void)addScriptToScriptsFolder:(id)arg1 ;
-(void)menu:(id)arg1 forEvent:(id)arg2 inView:(id)arg3 ;
-(char)_isScriptAtPath:(id)arg1 ;
-(void)addScriptsAtPath:(id)arg1 toMenu:(id)arg2 sortItems:(char)arg3 sortFoldersFirst:(char)arg4 ;
-(void)_removeScriptMenuItemsFromMenu:(id)arg1 ;
-(id)_imageAtPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)runScript:(id)arg1 ;
@end
