/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:11:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/MonitorPanels/Arrange.monitorPanel/Contents/MacOS/Arrange
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Arrange/Arrange-Structs.h>
#import <MonitorPanel/MonitorPanel.h>

@class DisplayProxy, NSString;

@interface ArrangePanel : MonitorPanel {

	DisplayProxy* _proxyView;
	id _mirrorSwitch;
	NSString* _canMirrorString;
	NSString* _cannotMirrorString;
	char _mirrored;
	CGPoint _warpOrigin;
	char _warpCursor;
	void* _gDisplayList;

}
+(int)fidelityForDisplayID:(int)arg1 ;
-(void)displayWillReconfigure;
-(void)displayDidReconfigure;
-(void)mirrorSwitchHit:(id)arg1 ;
-(void)mirrorState:(char)arg1 ;
-(id)proxyView;
-(void)didLoadNib;
@end
