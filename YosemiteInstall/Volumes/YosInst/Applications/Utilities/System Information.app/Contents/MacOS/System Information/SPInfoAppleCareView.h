/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:01:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Applications/Utilities/System Information.app/Contents/MacOS/System Information
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System Information/SPInfoView.h>

@class NSWindow, NSImageView, NSButton, NSView;

@interface SPInfoAppleCareView : SPInfoView {

	NSWindow* _allowSerialSheet;
	NSImageView* _repairIconView;
	NSImageView* _sheetRepairIconView;
	NSButton* _checkWarrantyButton;
	NSButton* _serviceOptionsButton;
	NSButton* _appleCareInfoButton;
	NSView* _appleCareBox;
	char _serialNumberAllowed;

}

@property (assign) char serialNumberAllowed;              //@synthesize serialNumberAllowed=_serialNumberAllowed - In the implementation block
+(id)createFromNib;
-(void)openWarrantyPage;
-(void)showServiceOptions;
-(void)showAppleCareInfo;
-(void)showView:(id)arg1 ;
-(void)allowSerialDone:(id)arg1 ;
-(void)checkWarrantyPressed:(id)arg1 ;
-(void)serviceOptionsPressed:(id)arg1 ;
-(void)appleCareInfoPressed:(id)arg1 ;
-(char)serialNumberAllowed;
-(void)setSerialNumberAllowed:(char)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(void)loadData;
@end
