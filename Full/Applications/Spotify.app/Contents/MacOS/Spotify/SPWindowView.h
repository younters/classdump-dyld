/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:55:40 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/Spotify.app/Contents/MacOS/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPView.h>

@interface SPWindowView : SPView {

	WindowOSX* _windowOSX;

}
-(WindowOSX*)windowOSX;
-(GuiWindow*)guiWindow;
-(void)viewDidMoveToSuperview;
-(char)mouseDownCanMoveWindow;
@end
