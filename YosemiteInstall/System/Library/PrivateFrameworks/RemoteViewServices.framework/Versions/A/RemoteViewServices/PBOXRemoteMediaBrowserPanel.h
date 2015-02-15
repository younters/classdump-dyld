/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteViewServices/RemoteViewServices-Structs.h>
#import <RemoteViewServices/NSRemotePanel.h>

@class NSString;

@interface PBOXRemoteMediaBrowserPanel : NSRemotePanel {

	unsigned long long _browserType;
	CGRect _frame;
	NSString* _autosaveName;
	char _isVisible;

}

@property (assign) unsigned long long browserType;              //@synthesize browserType=_browserType - In the implementation block
@property (assign) CGRect frame; 
@property (copy) NSString * autosaveName;                       //@synthesize autosaveName=_autosaveName - In the implementation block
@property (readonly) char isVisible; 
+(id)keyPathsForPanelSettings;
-(unsigned long long)_panelType;
-(id)dictionaryForObservedValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)serializeSettings;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)orderOut:(id)arg1 ;
-(void)orderFront:(id)arg1 ;
-(char)isVisible;
-(void)setAutosaveName:(NSString *)arg1 ;
-(NSString *)autosaveName;
-(void)setBrowserType:(unsigned long long)arg1 ;
-(unsigned long long)browserType;
@end
