/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickTime Player/QuickTime Player-Structs.h>
#import <AppKit/NSResponder.h>
#import <QuickTime Player/NSUserInterfaceValidations.h>
#import <QuickTime Player/NSOpenSavePanelDelegate.h>
#import <QuickTime Player/NSDraggingDestination.h>

@class NSMutableArray, MGMediaCompositionEditControllerInternal, MGPlayerDocument, MGMediaComposition, MGMediaCompositionViewController, NSString, NSArray;

@interface MGMediaCompositionEditController : NSResponder <NSUserInterfaceValidations, NSOpenSavePanelDelegate, NSDraggingDestination> {

	NSMutableArray* _mainMediaTrackDraggingMediaClips;
	NSMutableArray* _additionalMediaTrackDraggingMediaClips;
	unsigned long long _mainMediaTrackDraggingIndex;
	unsigned long long _additionalMediaTrackDraggingIndex;
	unsigned long long _editingDisabledCount;
	MGMediaCompositionEditControllerInternal* _internal;
	char _inDraggingDestinationOperation;
	MGPlayerDocument* _document;
	MGMediaComposition* _mediaComposition;
	MGMediaCompositionViewController* _mediaCompositionViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) MGPlayerDocument * document;                                                     //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) MGMediaComposition * mediaComposition;                                                    //@synthesize mediaComposition=_mediaComposition - In the implementation block
@property (nonatomic,retain) MGMediaCompositionViewController * mediaCompositionViewController;                        //@synthesize mediaCompositionViewController=_mediaCompositionViewController - In the implementation block
@property (assign,getter=isInDraggingDestinationOperation,nonatomic) char inDraggingDestinationOperation;              //@synthesize inDraggingDestinationOperation=_inDraggingDestinationOperation - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mainMediaTrackDraggingMediaClips; 
@property (nonatomic,copy,readonly) NSArray * additionalMediaTrackDraggingMediaClips; 
@property (nonatomic,readonly) unsigned long long mainMediaTrackDraggingIndex;                                         //@synthesize mainMediaTrackDraggingIndex=_mainMediaTrackDraggingIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalMediaTrackDraggingIndex;                                   //@synthesize additionalMediaTrackDraggingIndex=_additionalMediaTrackDraggingIndex - In the implementation block
+(char)automaticallyNotifiesObserversOfMainMediaTrackDraggingMediaClips;
+(char)automaticallyNotifiesObserversOfAdditionalMediaTrackDraggingMediaClips;
+(char)automaticallyNotifiesObserversOfMainMediaTrackDraggingIndex;
+(char)automaticallyNotifiesObserversOfAdditionalMediaTrackDraggingIndex;
-(id)mainMediaTrack;
-(id)additionalMediaTrack;
-(id)mediaClipSelection;
-(void)setMediaCompositionViewController:(MGMediaCompositionViewController *)arg1 ;
-(void)disableEditing;
-(void)enableEditing;
-(char)isInDraggingDestinationOperation;
-(NSArray *)additionalMediaTrackDraggingMediaClips;
-(void)setMediaComposition:(MGMediaComposition *)arg1 ;
-(MGMediaComposition *)mediaComposition;
-(id)mediaTrackSelection;
-(id)selectionController;
-(char)canPerformSelector:(SEL)arg1 ;
-(NSArray *)mainMediaTrackDraggingMediaClips;
-(unsigned long long)mainMediaTrackDraggingIndex;
-(char)moveMediaClips:(id)arg1 inMediaTrack:(id)arg2 afterMediaClip:(id)arg3 ;
-(void)fireMakeWindowKeyAndOrderFrontTimer:(id)arg1 ;
-(void)beginDraggingDestinationSessionWithMediaClips:(id)arg1 preloadedAssetProvider:(id)arg2 preloadingErrors:(id)arg3 atMouseLocation:(CGPoint)arg4 ;
-(char)isSupportedURL:(id)arg1 ;
-(void)setupMakeWindowKeyAndOrderFrontTimer;
-(void)invalidateMakeWindowKeyAndOrderFrontTimer;
-(void)updateDraggingDestinationSessionAtMouseLocation:(CGPoint)arg1 ;
-(void)cancelDraggingDestinationSessionAssetLoading;
-(void)cancelDraggingDestinationSessionAtMouseLocation:(CGPoint)arg1 ;
-(MGMediaCompositionViewController *)mediaCompositionViewController;
-(char)isEditingEnabled;
-(char)isLocalDocumentIconInvokingDragOperation:(id)arg1 ;
-(char)isLocalMediaTrackViewInvokingDragOperation:(id)arg1 ;
-(char)beginDraggingDestinationSessionWithDraggingInfo:(id)arg1 ;
-(char)updateDraggingDestinationSessionWithDraggingInfo:(id)arg1 ;
-(void)cancelDraggingDestinationSessionWithDraggingInfo:(id)arg1 ;
-(void)endDraggingDestinationSessionAtMouseLocation:(CGPoint)arg1 ;
-(void)setMainMediaTrackDraggingMediaClips:(NSArray *)arg1 ;
-(void)setAdditionalMediaTrackDraggingMediaClips:(NSArray *)arg1 ;
-(void)setInDraggingDestinationOperation:(char)arg1 ;
-(id)mainMediaClips;
-(id)additionalMediaClips;
-(void)setMainMediaTrackDraggingIndex:(unsigned long long)arg1 ;
-(void)setAdditionalMediaTrackDraggingIndex:(unsigned long long)arg1 ;
-(unsigned long long)additionalMediaTrackDraggingIndex;
-(void)setUndoManagerActionName:(id)arg1 ;
-(char)canModifySingleClipComposition;
-(void)alignClip:(id)arg1 ;
-(void)splitAtPlayhead:(id)arg1 ;
-(SCD_Struct_MG13)mediaClipTimeOffset:(id)arg1 inMediaTrack:(id)arg2 atTime:(SCD_Struct_MG13)arg3 ;
-(char)canSplitMediaClip:(id)arg1 atTime:(SCD_Struct_MG13)arg2 ;
-(char)canSplitAtPlayhead;
-(void)append:(id)arg1 ;
-(void)prepend:(id)arg1 ;
-(char)writeSelectedMediaClipsIntoPasteboard;
-(char)removeSelectedMediaClipsFromSelectedMediaTrack;
-(void)rotateMediaClipLeft:(id)arg1 ;
-(void)rotateMediaClipRight:(id)arg1 ;
-(void)flipMediaClipHorizontal:(id)arg1 ;
-(void)flipMediaClipVertical:(id)arg1 ;
-(id)mediaClipInMediaTrack:(id)arg1 atTime:(SCD_Struct_MG13)arg2 withOffset:(SCD_Struct_MG13*)arg3 ;
-(void)showOpenPanelAndAddSelectionToMediaCompositionAtEnd:(char)arg1 ;
-(void)flipHorizontal:(id)arg1 ;
-(void)flipVertical:(id)arg1 ;
-(void)rotateLeft:(id)arg1 ;
-(void)rotateRight:(id)arg1 ;
-(void)unbind:(id)arg1 ;
-(MGPlayerDocument *)document;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(char)wantsPeriodicDraggingUpdates;
-(void)delete:(id)arg1 ;
-(char)panel:(id)arg1 shouldEnableURL:(id)arg2 ;
-(SCD_Struct_MG13)currentTime;
@end
