/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:08:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Installation/CDIS/OS X Installer.app/Contents/MacOS/OS X Installer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OS X Installer/OS X Installer-Structs.h>
#import <AppKit/NSView.h>

@class NSTextFieldCell, NSCell, NSPanel, NSBundle, NSStatusItem, NSArray, BatteryImageCreator;

@interface OSIBatteryView : NSView {

	NSTextFieldCell* _timeCell;
	NSCell* _batteryCell;
	NSPanel* _warningPanel;
	NSBundle* _bundle;
	NSStatusItem* _parent;
	int _displayType;
	float _cachedWidth;
	float _timeSize;
	float _batterySize;
	NSArray* _images;
	BatteryImageCreator* _imageCreator;

}
+(char)machineIsPluggedIn;
+(char)machineHasBattery;
-(id)initWithFrame:(CGRect)arg1 bundle:(id)arg2 parent:(id)arg3 ;
-(void)setDisplayType:(int)arg1 ;
-(void)_showLowBatteryWarning:(char)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)_setup;
-(void)_update;
-(void)_resizeIfNecessary;
@end
