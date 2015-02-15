/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <Dock/ECEventHandling.h>
#import <Dock/DOCKStackDataSourceClient.h>
#import <Dock/ECModalEventHandler.h>

@protocol OS_dispatch_source, DOCKStackExpandedDataSourceDOCKStackCollapsedDataSourceDOCKStackActionHandling;
@class CALayer, DOCKStackAnimator, NSMutableArray, NSObject, NSMutableString, DOCKStackPreview, Tile, NSDictionary, NSString;

@interface DOCKStack : NSObject <ECEventHandling, DOCKStackDataSourceClient, ECModalEventHandler> {

	DOCKStackAnimator* _stackAnimator;
	NSMutableArray* _expandedItems;
	NSMutableArray* _collapsedImages;
	id _savedTileLayerContents;
	unsigned char _viewAs;
	int _preferredItemSize;
	CGRect _stageFrame;
	double _expandedEdge;
	NSObject*<OS_dispatch_source> _typeAheadTimer;
	NSObject*<OS_dispatch_source> _typeAheadSelectTimer;
	NSMutableString* _typeAheadString;
	unsigned char _typeAheadLastNumberOfCharacters;
	unsigned char _maxNumberOfCollapsedItems;
	DOCKStackPreview* _preview;
	char _ignoreMouseDraggedEvents;
	unsigned _displayAsStack : 1;
	unsigned _expanded : 1;
	unsigned _leftMouseDown : 1;
	unsigned _seemlessOpening : 1;
	double _timeLastCollapsed;
	Tile* _tile;
	id<DOCKStackExpandedDataSource><DOCKStackCollapsedDataSource><DOCKStackActionHandling> _primaryHandler;

}

@property (assign,nonatomic,__weak) Tile * tile;                                                                                                        //@synthesize tile=_tile - In the implementation block
@property (assign,nonatomic,__weak) id<DOCKStackExpandedDataSource><DOCKStackCollapsedDataSource><DOCKStackActionHandling> primaryHandler;              //@synthesize primaryHandler=_primaryHandler - In the implementation block
@property (assign,nonatomic) unsigned char viewAs;                                                                                                      //@synthesize viewAs=_viewAs - In the implementation block
@property (assign,nonatomic) int preferredItemSize;                                                                                                     //@synthesize preferredItemSize=_preferredItemSize - In the implementation block
@property (assign,nonatomic) char displayAsStack;                                                                                                       //@synthesize displayAsStack=_displayAsStack - In the implementation block
@property (nonatomic,readonly) char expanded;                                                                                                           //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) CALayer * modalEventLayer; 
@property (assign,nonatomic) unsigned char maxNumberOfCollapsedItems;                                                                                   //@synthesize maxNumberOfCollapsedItems=_maxNumberOfCollapsedItems - In the implementation block
@property (nonatomic,retain) id savedTileLayerContents;                                                                                                 //@synthesize savedTileLayerContents=_savedTileLayerContents - In the implementation block
@property (nonatomic,readonly) char ignoreMouseDraggedEvents;                                                                                           //@synthesize ignoreMouseDraggedEvents=_ignoreMouseDraggedEvents - In the implementation block
@property (nonatomic,readonly) char previewIsShown; 
@property (assign,nonatomic) char seemlessOpening;                                                                                                      //@synthesize seemlessOpening=_seemlessOpening - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemInfoForTopLevel; 
@property (nonatomic,readonly) BOOL canBeExpanded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentExpandedStack;
+(unsigned)axGenerationCount;
-(void)setTile:(Tile *)arg1 ;
-(void)scaleFactorChanged;
-(AXUIElementRef)axCopyElement;
-(int)preferredItemSize;
-(void)setPreferredItemSize:(int)arg1 ;
-(BOOL)hideImmediately;
-(int)axCopyAttributeValue:(CFStringRef)arg1 value:(const void*)arg2 withStackData:(SCD_Struct_DO26*)arg3 ;
-(int)axRemoveObserver:(void*)arg1 notification:(CFStringRef)arg2 withStackData:(SCD_Struct_DO26*)arg3 ;
-(int)axAddObserver:(void*)arg1 notification:(CFStringRef)arg2 withStackData:(SCD_Struct_DO26*)arg3 ;
-(AXUIElementRef)axCopyElementAtPoint:(CGPoint)arg1 ;
-(int)axPerformAction:(CFStringRef)arg1 withStackData:(SCD_Struct_DO26*)arg2 ;
-(int)axCopyActionDescription:(CFStringRef)arg1 description:(const _CFString*)arg2 withStackData:(SCD_Struct_DO26*)arg3 ;
-(int)axCopyActionNames:(const _CFArray*)arg1 withStackData:(SCD_Struct_DO26*)arg2 ;
-(int)axSetAttributeValue:(CFStringRef)arg1 value:(void*)arg2 withStackData:(SCD_Struct_DO26*)arg3 ;
-(int)axIsAttributeSettable:(CFStringRef)arg1 settable:(const _CFBoolean*)arg2 withStackData:(SCD_Struct_DO26*)arg3 ;
-(AXUIElementRef)axCopyFocusedElement;
-(int)axCopyAttributeValues:(CFStringRef)arg1 index:(long long)arg2 maxValues:(long long)arg3 values:(const _CFArray*)arg4 withStackData:(SCD_Struct_DO26*)arg5 ;
-(int)axGetAttributeValueCount:(CFStringRef)arg1 count:(long long*)arg2 withStackData:(SCD_Struct_DO26*)arg3 ;
-(int)axCopyAttributeNames:(const _CFArray*)arg1 withStackData:(SCD_Struct_DO26*)arg2 ;
-(void)setViewAs:(unsigned char)arg1 ;
-(CGPoint)convertPointFromGlobal:(CGPoint)arg1 ;
-(void)updateStackMenu:(OpaqueMenuRefRef)arg1 ;
-(void)expandUsingHandler:(id)arg1 fromKeyboard:(char)arg2 ignoringMouseDraggedEvents:(char)arg3 ;
-(id)initWithTile:(id)arg1 viewAs:(unsigned char)arg2 displayAsStack:(char)arg3 preferredItemSize:(int)arg4 ;
-(void)setDisplayAsStack:(char)arg1 ;
-(void)setPrimaryHandler:(id<DOCKStackExpandedDataSource><DOCKStackCollapsedDataSource><DOCKStackActionHandling>)arg1 ;
-(void)stackDataSourceInvalidated:(id)arg1 ;
-(void)setCollapsedStackValue:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setExpandedStackValue:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3 withDataSource:(id)arg4 ;
-(unsigned char)viewAs;
-(CGRect)convertRectToGlobal:(CGRect)arg1 ;
-(void)_loadCollapsedImages;
-(id)_imageForCollapsedImages;
-(void)_setTileImage:(id)arg1 fadingIn:(char)arg2 ;
-(void)_hidePreview:(id)arg1 ;
-(void)_generateMouseMoveEvent;
-(BOOL)canBeExpanded;
-(CGRect)_stageFrame;
-(Class)_layerClassForViewAsType:(unsigned char)arg1 forStage:(CGRect)arg2 withNumberOfItems:(unsigned long long)arg3 ;
-(unsigned char)axFocusedElementType;
-(void)axPostNotification:(CFStringRef)arg1 withStackData:(SCD_Struct_DO26*)arg2 ;
-(void)goBackOneLevel;
-(void)goBackToLevelUsingHandler:(id)arg1 ;
-(char)_mouseEventInTile:(id)arg1 ;
-(void)_handleEscape;
-(void)_showPreviewForIndex:(unsigned long long)arg1 forEvent:(id)arg2 ;
-(char)leftMouseDown:(id)arg1 ;
-(char)leftMouseUp:(id)arg1 ;
-(void)stackDataSourceInvalidatedForRange:(NSRange)arg1 withDataSource:(id)arg2 ;
-(id)indexSetForVisibleExpandedItems;
-(char)handlesModalDragEvents;
-(CALayer *)modalEventLayer;
-(char)previewIsShown;
-(NSDictionary *)itemInfoForTopLevel;
-(void)drillUsingHandler:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)goBackToTopLevel;
-(void)showAllPreviousExpandedLayers;
-(void)hidePreviousExpandedLayers;
-(void)selectedIndexChanged:(unsigned long long)arg1 ;
-(void)getCollapsedLayoutFrames:(CGRect*)arg1 count:(unsigned long long)arg2 ;
-(void)lostKeyFocus:(id)arg1 ;
-(id)savedTileLayerContents;
-(void)setSavedTileLayerContents:(id)arg1 ;
-(char)displayAsStack;
-(unsigned char)maxNumberOfCollapsedItems;
-(void)setMaxNumberOfCollapsedItems:(unsigned char)arg1 ;
-(char)ignoreMouseDraggedEvents;
-(char)seemlessOpening;
-(void)setSeemlessOpening:(char)arg1 ;
-(id<DOCKStackExpandedDataSource><DOCKStackCollapsedDataSource><DOCKStackActionHandling>)primaryHandler;
-(void)axObserverDied:(void*)arg1 withStackData:(SCD_Struct_DO26*)arg2 ;
-(void)collapse;
-(void)dealloc;
-(void)layout;
-(Tile *)tile;
-(char)keyDown:(id)arg1 ;
-(char)keyUp:(id)arg1 ;
-(char)expanded;
@end
