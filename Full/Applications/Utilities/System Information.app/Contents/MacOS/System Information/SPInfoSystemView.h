/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:27:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/System Information.app/Contents/MacOS/System Information
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System Information/SPInfoView.h>

@class SPInfoGrayImageView, NSButton, NSTextField, NSLayoutConstraint, NSString;

@interface SPInfoSystemView : SPInfoView {

	SPInfoGrayImageView* _osIconView;
	NSButton* _osUpdateButton;
	NSButton* _reportButton;
	NSButton* _licenseButton;
	NSTextField* _osNameField;
	NSTextField* _copyrightField;
	NSTextField* _macModelField;
	NSTextField* _osVersionField;
	NSTextField* _macSpeedField;
	NSTextField* _macMemoryField;
	NSTextField* _osBootField;
	NSTextField* _macGraphicsField;
	NSTextField* _macSerialField;
	NSTextField* _osVersionLabel;
	NSTextField* _macSpeedLabel;
	NSTextField* _macMemoryLabel;
	NSTextField* _osBootLabel;
	NSTextField* _macGraphicsLabel;
	NSTextField* _macSerialLabel;
	NSLayoutConstraint* _preBootConstraint;
	NSLayoutConstraint* _postBootConstraint;
	NSString* _macMemoryFormat;
	NSString* _macGraphicsFormat;
	NSString* _warrantyPath;
	char _showingBuild;

}
+(id)createFromNib;
-(void)updateVersionString;
-(void)updateSystemInfo:(id)arg1 ;
-(void)updateSystemInfoNotify:(id)arg1 ;
-(void)setupCopyright;
-(void)setupLicenseButton;
-(void)licenseButtonPressed:(id)arg1 ;
-(void)osVersionPressed:(id)arg1 ;
-(void)osUpdatePressed:(id)arg1 ;
-(void)newReportPressed:(id)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(void)loadData;
@end
