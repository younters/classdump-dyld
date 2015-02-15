/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>
#import <ImageKit/IKUIHelper.h>

@class IKCameraDeviceViewHandler, IKUIHelper, NSView, NSMatrix, IKGradientHorizontalSeparatorGrooved, IKChooserView, IKCButton, NSTextField, IKPathPopupButton, NSButton, NSSlider, NSMutableDictionary;

@interface IKCameraBackgroundView : NSView <IKUIHelper> {

	IKCameraDeviceViewHandler* _cameraViewHandler;
	IKUIHelper* _uiHelper;
	NSView* _container;
	NSMatrix* _tabMatrix;
	IKGradientHorizontalSeparatorGrooved* _bottomSeparator;
	IKChooserView* _bottomFiller;
	IKCButton* _rotateLeftButton;
	IKCButton* _deleteButton;
	NSTextField* _downloadToLabel;
	IKPathPopupButton* _downloadToPopupButton;
	NSButton* _downloadButton;
	NSButton* _downloadAllButton;
	char _hideDownloadToLabel;
	char _hideRotateLeftButton;
	char _hideDeleteButton;
	char _hideDownloadToPopupButton;
	char _hideSegmentedControl;
	NSSlider* _iconSlider;
	NSTextField* _statusInfo1;
	NSTextField* _statusInfo2;
	NSView* _spacer1L;
	NSView* _spacer1R;
	NSView* _spacer2L;
	NSView* _spacer2R;
	NSMutableDictionary* _bindingInfo;

}

@property (assign,nonatomic) IKCameraDeviceViewHandler * cameraViewHandler;              //@synthesize cameraViewHandler=_cameraViewHandler - In the implementation block
@property (assign) NSView * container;                                                   //@synthesize container=_container - In the implementation block
@property (assign) NSMatrix * tabMatrix;                                                 //@synthesize tabMatrix=_tabMatrix - In the implementation block
@property (assign) IKGradientHorizontalSeparatorGrooved * bottomSeparator;               //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (assign) IKChooserView * bottomFiller;                                         //@synthesize bottomFiller=_bottomFiller - In the implementation block
@property (assign) NSButton * rotateLeftButton;                                          //@synthesize rotateLeftButton=_rotateLeftButton - In the implementation block
@property (assign) NSButton * deleteButton;                                              //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign) NSTextField * downloadToLabel;                                        //@synthesize downloadToLabel=_downloadToLabel - In the implementation block
@property (assign) IKPathPopupButton * downloadToPopupButton;                            //@synthesize downloadToPopupButton=_downloadToPopupButton - In the implementation block
@property (assign) NSButton * downloadButton;                                            //@synthesize downloadButton=_downloadButton - In the implementation block
@property (assign) NSButton * downloadAllButton;                                         //@synthesize downloadAllButton=_downloadAllButton - In the implementation block
@property (assign) NSSlider * iconSlider;                                                //@synthesize iconSlider=_iconSlider - In the implementation block
@property (assign) NSTextField * statusInfo1;                                            //@synthesize statusInfo1=_statusInfo1 - In the implementation block
@property (assign) NSTextField * statusInfo2;                                            //@synthesize statusInfo2=_statusInfo2 - In the implementation block
@property (assign) char hideDownloadToLabel;                                             //@synthesize hideDownloadToLabel=_hideDownloadToLabel - In the implementation block
@property (assign) char hideRotateLeftButton;                                            //@synthesize hideRotateLeftButton=_hideRotateLeftButton - In the implementation block
@property (assign) char hideDeleteButton;                                                //@synthesize hideDeleteButton=_hideDeleteButton - In the implementation block
@property (assign) char hideDownloadToPopupButton;                                       //@synthesize hideDownloadToPopupButton=_hideDownloadToPopupButton - In the implementation block
@property (assign) char hideSegmentedControl;                                            //@synthesize hideSegmentedControl=_hideSegmentedControl - In the implementation block
-(void)unbindAll;
-(void)installView:(id)arg1 ;
-(void)setCameraViewHandler:(IKCameraDeviceViewHandler *)arg1 ;
-(void)doUpdateConstraintsAfterDelay;
-(void)setupBindings;
-(void)setupActions;
-(void)setHideDownloadToLabel:(char)arg1 ;
-(IKCameraDeviceViewHandler *)cameraViewHandler;
-(void)setHideRotateLeftButton:(char)arg1 ;
-(void)setHideDeleteButton:(char)arg1 ;
-(void)setHideDownloadToPopupButton:(char)arg1 ;
-(void)setHideSegmentedControl:(char)arg1 ;
-(void)setBottomFiller:(IKChooserView *)arg1 ;
-(void)setTabMatrix:(NSMatrix *)arg1 ;
-(void)setBottomSeparator:(IKGradientHorizontalSeparatorGrooved *)arg1 ;
-(void)setRotateLeftButton:(NSButton *)arg1 ;
-(void)setDeleteButton:(NSButton *)arg1 ;
-(void)setDownloadToPopupButton:(IKPathPopupButton *)arg1 ;
-(IKPathPopupButton *)downloadToPopupButton;
-(void)setDownloadToLabel:(NSTextField *)arg1 ;
-(NSTextField *)downloadToLabel;
-(void)setDownloadButton:(NSButton *)arg1 ;
-(void)setDownloadAllButton:(NSButton *)arg1 ;
-(void)setIconSlider:(NSSlider *)arg1 ;
-(void)setStatusInfo1:(NSTextField *)arg1 ;
-(void)setStatusInfo2:(NSTextField *)arg1 ;
-(void)addBindingInfo:(id)arg1 object:(id)arg2 ;
-(void)createAllViews;
-(char)useAquaTheme;
-(CGRect)defaultRectForIdentifier:(id)arg1 ;
-(unsigned long long)controlSizeForIdentifier:(id)arg1 ;
-(void)updateConstraintsAfterDelay:(id)arg1 ;
-(NSMatrix *)tabMatrix;
-(IKGradientHorizontalSeparatorGrooved *)bottomSeparator;
-(NSButton *)rotateLeftButton;
-(NSButton *)deleteButton;
-(NSButton *)downloadButton;
-(NSButton *)downloadAllButton;
-(NSSlider *)iconSlider;
-(NSTextField *)statusInfo1;
-(NSTextField *)statusInfo2;
-(char)hideDownloadToLabel;
-(char)hideRotateLeftButton;
-(char)hideDeleteButton;
-(char)hideDownloadToPopupButton;
-(char)hideSegmentedControl;
-(IKChooserView *)bottomFiller;
-(void)updateConstraints;
-(void)drawRect:(CGRect)arg1 ;
-(void)layout;
-(void)awakeFromNib;
-(void)flagsChanged:(id)arg1 ;
-(NSView *)container;
-(void)setContainer:(NSView *)arg1 ;
-(void)setup;
-(void)changeMode:(id)arg1 ;
@end
