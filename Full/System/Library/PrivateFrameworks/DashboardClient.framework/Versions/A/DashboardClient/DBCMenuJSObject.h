/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:51:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DashboardClient.framework/Versions/A/DashboardClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DBCWidgetProtocol;
@class NSMenu;

@interface DBCMenuJSObject : NSObject {

	NSMenu* _menu;
	id<DBCWidgetProtocol> _widget;
	int _selectedItem;

}
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(void)_menuItemSelected:(id)arg1 ;
-(void)addMenuItem:(id)arg1 ;
-(void)removeMenuItemAtIndex:(int)arg1 ;
-(void)removeAllMenuItems;
-(void)setMenuItemEnabledAtIndex:(int)arg1 enabled:(int)arg2 ;
-(void)setMenuItemTagAtIndex:(int)arg1 tag:(int)arg2 ;
-(int)getMenuItemTagAtIndex:(int)arg1 ;
-(int)popup:(int)arg1 y:(int)arg2 ;
-(void)addSeparatorMenuItem;
-(void)dealloc;
@end
