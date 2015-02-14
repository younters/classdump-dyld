/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumberFormatter, NSMutableDictionary, NSParagraphStyle, NSWindow;

@interface NSTextRulerOptions : NSObject {

	id addFavoritePanel;
	id favoriteNameField;
	id includeFontOptionsButton;
	id includeFontButton;
	id confirmAddFavoriteButton;
	id replaceFavoritePanel;
	id removeFavoritePanel;
	id removeFavoritePopUp;
	id spacingPanel;
	id multipleField;
	id minField;
	id maxField;
	id lineSpacingField;
	id multipleStepper;
	id minStepper;
	id maxStepper;
	id lineSpacingStepper;
	id minMatrix;
	id maxButton;
	id spaceBeforeField;
	id spaceAfterField;
	id spaceBeforeStepper;
	id spaceAfterStepper;
	id listPanel;
	id beforeField;
	id numberingPopUp;
	id afterField;
	id startLabel;
	id startField;
	id startStepper;
	id prependButton;
	id linkPanel;
	id linkField;
	NSNumberFormatter* _numberFormatter;
	NSMutableDictionary* _favoriteRulers;
	NSMutableDictionary* _selectedAttributes;
	NSParagraphStyle* _prespacingParagraphStyle;
	NSWindow* _windowForSheets;
	NSWindow* _windowForSpacing;
	id _delegateForSpacing;
	NSWindow* _windowForMarkerFormat;
	id _delegateForMarkerFormat;
	NSWindow* _windowForLink;
	id _delegateForLink;

}
+(id)sharedTextRulerOptions;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)controlTextDidChange:(id)arg1 ;
-(void)updateFavoritesFromDefaults;
-(id)displayStringForLineHeightMultiple:(double)arg1 min:(double)arg2 max:(double)arg3 lineSpacing:(double)arg4 paragraphSpacingBefore:(double)arg5 after:(double)arg6 ;
-(id)favoriteAttributesNames;
-(void)loadUI;
-(void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)updateFavoritesUI;
-(void)removeFavoriteInWindow:(id)arg1 ;
-(id)favoriteAttributesForName:(id)arg1 ;
-(id)selectedAttributes;
-(void)saveFavoritesToDefaults;
-(void)addFavorite;
-(void)modifyOptionsViaPanel:(id)arg1 ;
-(void)confirmSheet:(id)arg1 ;
-(void)cancelSheet:(id)arg1 ;
-(void)updateLineSpacingUI;
-(void)setStartFieldAndStepper;
-(void)addFavorite:(id)arg1 inWindow:(id)arg2 ;
-(void)setSpacing:(id)arg1 inWindow:(id)arg2 delegate:(id)arg3 ;
-(void)setMarkerFormatInWindow:(id)arg1 textList:(id)arg2 delegate:(id)arg3 ;
-(void)setLinkInWindow:(id)arg1 string:(id)arg2 delegate:(id)arg3 ;
-(void)removeLink:(id)arg1 ;
@end
