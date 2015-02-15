/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <Messages/ViewTableRow.h>
#import <Messages/FileDragOutViewDelegate.h>

@class FileTransfer, FileDragOutView, NSTextField, NSProgressIndicator, NSButton, NSImage, NSString;

@interface FileTransferView : ViewTableRow <FileDragOutViewDelegate> {

	FileTransfer* _fileTransfer;
	char _canUpdate;
	FileDragOutView* _fileIcon;
	NSTextField* _fileNameField;
	NSTextField* _statusField;
	NSProgressIndicator* _progressBar;
	NSButton* _stopButton;
	NSButton* _revealButton;
	NSImage* _pressedCancel;
	NSImage* _selectedCancel;
	NSImage* _activeCancel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)typeOfFileTransfer:(id)arg1 ;
+(id)_bytesTransferredPerSecondforTransfer:(id)arg1 ;
+(id)_timeRemainingStringWithProgress:(double)arg1 forTransfer:(id)arg2 ;
+(id)statusStringForFileTransfer:(id)arg1 ;
-(void)fileDragOutView:(id)arg1 fileDoubleClicked:(id)arg2 ;
-(char)fileDragOutView:(id)arg1 shouldDragFile:(id)arg2 ;
-(void)fileDragOutView:(id)arg1 file:(id)arg2 draggedTo:(id)arg3 ;
-(double)dwToFit;
-(id)initWithFileTransfer:(id)arg1 saveNib:(char)arg2 ;
-(id)fileIcon;
-(void)_userVisiblePathCopyBegan:(id)arg1 ;
-(void)_removeProgressBar;
-(void)windowKeyChanged;
-(void)_updateTextColor;
-(id)fileTransfer;
-(void)stopTransfer:(id)arg1 ;
-(void)acceptTransfer:(id)arg1 ;
-(void)selectedDidChange;
-(void)_update:(id)arg1 ;
-(void)_userVisiblePathCreated:(id)arg1 ;
-(void)revealInFinder:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 ;
-(void)update;
-(void)viewDidMoveToWindow;
-(void)awakeFromNib;
-(void)_updateButtons;
-(void)quickLookWithEvent:(id)arg1 ;
@end
