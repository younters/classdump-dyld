/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Image Capture/Support/Application/AutoImporter.app/Contents/MacOS/AutoImporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSWindow, NSPopUpButton, ICADPathControl, NSButton, ADTokenField, NSTextField, NSString;

@interface PreferenceHandler : NSObject {

	NSWindow* _window;
	NSPopUpButton* _cameraPopUp;
	ICADPathControl* _pathPopUp;
	NSButton* _createSubFolderCheckbox;
	ADTokenField* _subFolderName;
	NSTextField* _subFolderNamePreview;
	NSButton* _deleteAfterImportButton;

}

@property (nonatomic,retain) NSWindow * window;                               //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSPopUpButton * cameraPopUp;                     //@synthesize cameraPopUp=_cameraPopUp - In the implementation block
@property (nonatomic,retain) ICADPathControl * pathPopUp;                     //@synthesize pathPopUp=_pathPopUp - In the implementation block
@property (nonatomic,retain) NSButton * createSubFolderCheckbox;              //@synthesize createSubFolderCheckbox=_createSubFolderCheckbox - In the implementation block
@property (nonatomic,retain) ADTokenField * subFolderName;                    //@synthesize subFolderName=_subFolderName - In the implementation block
@property (nonatomic,retain) NSTextField * subFolderNamePreview;              //@synthesize subFolderNamePreview=_subFolderNamePreview - In the implementation block
@property (nonatomic,retain) NSButton * deleteAfterImportButton;              //@synthesize deleteAfterImportButton=_deleteAfterImportButton - In the implementation block
@property (readonly) NSString * dateToken; 
@property (readonly) NSString * cameraToken; 
@property (readonly) NSString * userToken; 
@property (readonly) NSString * sequenceToken; 
+(id)sharedPreferencesHandler;
-(void)showPreferences;
-(id)resolveTokenArray:(id)arg1 camera:(id)arg2 ;
-(id)nonlocalizedTokens;
-(id)localizedArray:(id)arg1 ;
-(void)updateSubFolderNamePreview;
-(void)updateDownloadPath:(id)arg1 ;
-(void)createSubFolderChanged:(id)arg1 ;
-(void)deleteAfterImportChanged:(id)arg1 ;
-(id)standardizedArray:(id)arg1 ;
-(id)replacementString:(id)arg1 camera:(id)arg2 ;
-(void)savePreferences;
-(NSString *)dateToken;
-(NSString *)cameraToken;
-(NSString *)userToken;
-(NSString *)sequenceToken;
-(NSPopUpButton *)cameraPopUp;
-(void)setCameraPopUp:(NSPopUpButton *)arg1 ;
-(ICADPathControl *)pathPopUp;
-(void)setPathPopUp:(ICADPathControl *)arg1 ;
-(NSButton *)createSubFolderCheckbox;
-(void)setCreateSubFolderCheckbox:(NSButton *)arg1 ;
-(ADTokenField *)subFolderName;
-(void)setSubFolderName:(ADTokenField *)arg1 ;
-(NSTextField *)subFolderNamePreview;
-(void)setSubFolderNamePreview:(NSTextField *)arg1 ;
-(NSButton *)deleteAfterImportButton;
-(void)setDeleteAfterImportButton:(NSButton *)arg1 ;
-(id)tokens;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSWindow *)window;
-(void)controlTextDidChange:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(void)setWindow:(NSWindow *)arg1 ;
-(unsigned long long)pathControl:(id)arg1 validateDrop:(id)arg2 ;
-(char)pathControl:(id)arg1 acceptDrop:(id)arg2 ;
-(void)pathControl:(id)arg1 willDisplayOpenPanel:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(void)setup;
@end
