/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:55:40 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/Spotify.app/Contents/MacOS/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <AppKit/NSMenu.h>
#import <Spotify/NSMenuDelegate.h>

@interface SPMenu : NSMenu <NSMenuDelegate> {

	PopupMenuOSX* _menu;
	SPMenu* _parent;
	FastDelegate1<unsigned int, void>* _onSelect;
	BOOL _callbacked;

}
+(int)selectedPopupItem;
-(FastDelegate1<unsigned int, void>*)selectItem;
-(void)setParent:(id)arg1 ;
-(id)initWithMenu:(PopupMenuOSX*)arg1 title:(id)arg2 ;
-(void)doAction:(id)arg1 ;
-(void)setCallback:(FastDelegate1<unsigned int, void>*)arg1 ;
-(FastDelegate1<unsigned int, void>*)getCallback;
-(PopupMenu*)menuHandle;
-(void)wrapperDidDie;
-(void)dealloc;
-(int)numberOfItemsInMenu:(id)arg1 ;
-(char)menu:(id)arg1 updateItem:(id)arg2 atIndex:(int)arg3 shouldCancel:(char)arg4 ;
-(char)performKeyEquivalent:(id)arg1 ;
@end
