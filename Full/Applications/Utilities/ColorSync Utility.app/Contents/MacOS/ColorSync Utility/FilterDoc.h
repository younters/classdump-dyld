/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:05:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/ColorSync Utility.app/Contents/MacOS/ColorSync Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ColorSync Utility/ColorSync Utility-Structs.h>
#import <AppKit/NSDocument.h>
#import <ColorSync Utility/NSApplicationDelegate.h>
#import <ColorSync Utility/NSWindowDelegate.h>
#import <ColorSync Utility/NSToolbarDelegate.h>

@class NSWindow, FilterPageView, FilterPageViewMatte, NSScrollView, NSBox, NSPopUpButton, NSButton, NSTextField, FilterDocExportAccessoryView, FilterToolbarPageFieldView, NSMutableDictionary, NSMenu, NSMenuItem, NSPanel, NSMutableArray, QuartzFilter, FilterDocProfile, NSString, FilterImageCorrection, FilterDocPDEController, NSPrintInfo;

@interface FilterDoc : NSDocument <NSApplicationDelegate, NSWindowDelegate, NSToolbarDelegate> {

	NSWindow* mWindow;
	FilterPageView* pageView;
	FilterPageViewMatte* pageViewMatte;
	NSScrollView* pageScrollView;
	NSBox* controlBox;
	NSPopUpButton* filterPopup;
	NSButton* filterApplyButton;
	NSTextField* filterControlBoxText;
	NSTextField* intentControlBoxText;
	NSButton* pdfxSoftProofSwitch;
	FilterDocExportAccessoryView* exportAccessoryView;
	FilterToolbarPageFieldView* toolbarPageFieldView;
	NSTextField* toolbarPageField;
	NSTextField* toolbarPageFieldMax;
	NSMutableDictionary* toolbarItems;
	NSPopUpButton* profileMode;
	NSPopUpButton* profilePopup;
	NSMenu* profileMenu;
	NSPopUpButton* intentPopup;
	NSMenu* AbstractSubmenu;
	NSMenu* ColorSpaceSubmenu;
	NSMenu* DisplaySubmenu;
	NSMenu* InputSubmenu;
	NSMenu* NamedColorSubmenu;
	NSMenu* OutputSubmenu;
	NSMenuItem* AbstractSubmenuItem;
	NSMenuItem* ColorSpaceSubmenuItem;
	NSMenuItem* DisplaySubmenuItem;
	NSMenuItem* InputSubmenuItem;
	NSMenuItem* NamedColorSubmenuItem;
	NSMenuItem* OutputSubmenuItem;
	NSPanel* imageInfoPanel;
	NSTextField* imageInfoColorModelField;
	NSTextField* imageInfoDPIField;
	NSButton* imageInfoOKButton;
	NSTextField* imageInfoProfileField;
	NSTextField* imageInfoSizeField;
	NSTextField* imageInfoAssumedProfileField;
	NSPanel* imageSizePanel;
	NSButton* imageSizeApplyButton;
	NSButton* imageSizeCancelButton;
	NSTextField* imageSizeDPITextField;
	NSTextField* imageSizeFloatToField;
	NSTextField* imageSizeDimensionsField;
	NSTextField* imageSizeIntToField;
	NSTextField* imageSizePercentSign;
	NSPopUpButton* imageSizeQualityPopup;
	NSPopUpButton* imageSizeResizeTypePopup;
	CGSize pageViewSize;
	float pageViewAspectRatio;
	CGPoint pageViewOrigin;
	float mScaleFactor;
	NSMutableArray* mFilters;
	unsigned long long currentFilterIndex;
	QuartzFilter* mCurrentFilter;
	FilterDocProfile* mProfile;
	NSMutableArray* mProfiles;
	NSString* mLocalizedNoneName;
	long long mImageCount;
	long long mCurrentImage;
	CFArrayRef mMetadataArray;
	FilterImageCorrection* mImageCorrection;
	opaque_pthread_mutex_t infoDictLock;
	unsigned imRenderingIntent;
	char mBPC;
	char noUpdateDuringAction;
	char docIsLocked;
	FilterDocPDEController* mPDEController;
	NSPrintInfo* mPrintInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)docTypeForImageType:(id)arg1 ;
-(void*)filterDocument;
-(long long)filterPage;
-(id)retainCurrentFilter;
-(char)softProof;
-(int)filterDocumentType;
-(CGColorSpaceRef)softproofSpaceCopy;
-(CGPDFDocumentRef)applyFilterToPDFDoc:(CGPDFDocumentRef)arg1 filter:(id)arg2 ;
-(id)wholeDocumentAndSettings;
-(void)setWholeDocumentAndSettings:(id)arg1 ;
-(void)setIntent:(int)arg1 ;
-(void)setFilterPage:(long long)arg1 ;
-(void)applyFilterAndScaleImage:(id)arg1 ;
-(char)okToWriteMultiPage;
-(void*)exportData:(int)arg1 operation:(unsigned long long)arg2 ;
-(char)writeExportDataToURL:(id)arg1 data:(void*)arg2 info:(void*)arg3 ;
-(void)setWholeDocument:(void*)arg1 ;
-(void)exportFilterDocument:(id)arg1 ;
-(void)loadFilters:(id)arg1 ;
-(void)loadProfiles:(id)arg1 ;
-(void)setProfileMode;
-(void)addToolbarItems;
-(void)pageViewResizeRequest:(float)arg1 ;
-(void)filterAddNotification:(id)arg1 ;
-(void)filterRemoveNotification:(id)arg1 ;
-(void)filterUpdateNotification:(id)arg1 ;
-(void)filterSelectNotification:(id)arg1 ;
-(void)zoomInAction:(id)arg1 ;
-(void)zoomOutAction:(id)arg1 ;
-(void)leftArrowAction:(id)arg1 ;
-(void)rightArrowAction:(id)arg1 ;
-(void)imageInfoAction:(id)arg1 ;
-(void)imageSizeAction:(id)arg1 ;
-(void)imageCorrectionAction:(id)arg1 ;
-(void)setCurrentFilter:(id)arg1 ;
-(void)profileMenuAction:(id)arg1 ;
-(id)imageFilter;
-(void)genericAction;
-(void)displayPage;
-(void)updatePageInfo;
-(CGRect)imageRectForPDFPage:(CGRect)arg1 ;
-(CGPDFDocumentRef)convertImageToPDFDoc:(CGImageRef)arg1 ;
-(void)currentPageAction:(id)arg1 ;
-(void)resetCurrentFilter;
-(void)setupApplyFilterUndo:(id)arg1 ;
-(void)setupApplyProfileUndo:(id)arg1 ;
-(void)newPageViewFrame:(float)arg1 ;
-(void)centerPageViewFrame;
-(void)handleZoomToScale:(float)arg1 ;
-(void)zoomAction:(float)arg1 ;
-(id)wholeDocumentAndMetadata;
-(void)setupAdjustImageSizeUndo:(id)arg1 ;
-(id)wholeDocument;
-(void)filterPopupAction:(id)arg1 ;
-(unsigned)imRenderingIntent;
-(void)profileModeAction:(id)arg1 ;
-(void)intentAction:(id)arg1 ;
-(void)pdfxSoftProofSwitchAction:(id)arg1 ;
-(CGImageRef)applyFilterToImage:(CGImageRef)arg1 filter:(id)arg2 imageScaleFilter:(id)arg3 ;
-(CFArrayRef)oneImageArray:(CGImageRef)arg1 ;
-(CGPDFDocumentRef)convertImageArrayToPDFDoc:(CFArrayRef)arg1 ;
-(char)writeImageToFile:(id)arg1 image:(CGImageRef)arg2 type:(CFStringRef)arg3 metadata:(CFDictionaryRef)arg4 ;
-(char)canBePrintingTarget;
-(id)pdeController;
-(void)adjustFrameSizeAction:(id)arg1 ;
-(void)filterApplyAction:(id)arg1 ;
-(void)zoomToFitAction:(id)arg1 ;
-(void)imageInfoOKButtonAction:(id)arg1 ;
-(void)imageSizeApplyButtonAction:(id)arg1 ;
-(void)imageSizeCancelButtonAction:(id)arg1 ;
-(void)imageSizeQualityPopupAction:(id)arg1 ;
-(void)imageSizeResizeTypePopupAction:(id)arg1 ;
-(void)imageSizeTextFieldAction:(id)arg1 ;
-(id)currentURL;
-(CFDictionaryRef)metadata;
-(void)updatePreview;
-(void)setProfile:(id)arg1 ;
-(CGSize)originalSize;
-(CGAffineTransform)affineTransform;
-(id)imageCorrection;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(void)saveDocumentAs:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)close;
-(char)hasAlpha;
-(int)colorSpaceModel;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(long long)pageCount;
-(char)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(char)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)printInfo;
-(void)setPrintInfo:(id)arg1 ;
-(id)windowNibName;
-(void)windowControllerDidLoadNib:(id)arg1 ;
-(char)windowShouldClose:(id)arg1 ;
-(void)windowDidResize:(id)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(void)setMetadata:(id)arg1 ;
-(void)showInspector:(id)arg1 ;
@end
