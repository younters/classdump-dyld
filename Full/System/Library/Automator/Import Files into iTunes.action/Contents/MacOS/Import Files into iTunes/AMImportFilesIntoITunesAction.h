/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:22:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Import Files into iTunes.action/Contents/MacOS/Import Files into iTunes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class AMPopUpButton, NSProgressIndicator;

@interface AMImportFilesIntoITunesAction : AMBundleAction {

	AMPopUpButton* playlistNamePopUpButton;
	NSProgressIndicator* loadProgressIndicator;

}
-(void)_updateUIWithPlaylistNames:(id)arg1 ;
-(id)_getPlaylistNames;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)opened;
@end
