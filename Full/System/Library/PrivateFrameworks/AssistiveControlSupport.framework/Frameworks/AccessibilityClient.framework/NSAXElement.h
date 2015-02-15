/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Frameworks/AccessibilityClient.framework/AccessibilityClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityClient/AccessibilityClient-Structs.h>
@class NSAXUIElement, NSAXApplication;

@interface NSAXElement : NSObject {

	NSAXUIElement* _uiElement;
	CFArrayRef _xList;
	CFArrayRef _yList;
	char _trustBoundsAsVisibleBounds;
	CGPoint _deltaPointFromPreviousChild;

}

@property (nonatomic,readonly) NSAXUIElement * uiElement;                      //@synthesize uiElement=_uiElement - In the implementation block
@property (assign,nonatomic) CGPoint deltaPointFromPreviousChild;              //@synthesize deltaPointFromPreviousChild=_deltaPointFromPreviousChild - In the implementation block
@property (assign,nonatomic) char trustBoundsAsVisibleBounds;                  //@synthesize trustBoundsAsVisibleBounds=_trustBoundsAsVisibleBounds - In the implementation block
@property (nonatomic,retain) NSAXApplication * application; 
+(id)newElementForAXElement:(AXUIElementRef)arg1 forAppID:(unsigned long long)arg2 ;
+(id)newElementForUIElement:(id)arg1 ;
+(id)_newElementForUIElement:(id)arg1 ;
+(id)newMockContainerForElements:(id)arg1 ;
-(id)spokenDescription;
-(NSAXUIElement *)uiElement;
-(id)newElementForAXAttribute:(CFStringRef)arg1 ;
-(id)elementArrayForAXAttribute:(CFStringRef)arg1 ;
-(id)elementForAXAttribute:(CFStringRef)arg1 ;
-(char)hasAXRole:(CFStringRef)arg1 ;
-(void)setKeyboardFocus:(char)arg1 ;
-(char)hasAXSubrole:(CFStringRef)arg1 ;
-(id)_attachmentDescriptionForAttributedString:(id)arg1 ;
-(id)textForSpokenDescription;
-(id)_descriptionForAttributedString:(id)arg1 ;
-(id)childrenOfInterest;
-(id)_childrenSpokenDescription;
-(id)_elementsToIncludeInChildrenTree;
-(char)childrenIncludeVisibleOnly;
-(id)allVisibleChildren;
-(char)shouldIncludeElementInHierarchy;
-(char)shouldPromoteChildren;
-(void)performPressAction;
-(void)performIncrementAction;
-(void)performDecrementAction;
-(void)setSelected:(char)arg1 exclusive:(char)arg2 ;
-(char)canSetSelectionOnChildren;
-(char)hasRowBasedChildren;
-(unsigned long long)numberOfSelectedChildrenUIElements;
-(unsigned long long)childrenCount;
-(char)removeAllSelection;
-(char)addSelectionOnChildElement:(id)arg1 exclusive:(char)arg2 ;
-(char)removeSelectionOnChildElement:(id)arg1 ;
-(id)selectedChildrenUIElements;
-(void)setSelectionWithUIElementArray:(id)arg1 ;
-(NSRange)_rangeOfGlyphAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_lengthOfCharacterAtIndex:(unsigned long long)arg1 ;
-(id)nextCharacterFromIndex:(unsigned long long)arg1 ;
-(id)previousCharacterFromIndex:(unsigned long long)arg1 ;
-(void)startingToBuildMap;
-(void)_buildList:(_CFArray*)arg1 horizontal:(char)arg2 reversed:(char)arg3 ;
-(CGPoint)mapPositionForChild:(id)arg1 ;
-(void)_constrainRangeWithIndex:(unsigned long long)arg1 inRanges:(CFArrayRef)arg2 withRange:(SCD_Struct_NS12)arg3 ;
-(void)_insertEmptyRowToColumns:(CFArrayRef)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_insertRange:(SCD_Struct_NS12)arg1 toArray:(CFArrayRef)arg2 atIndex:(unsigned long long)arg3 ;
-(CFArrayRef)_insertEmptyColumnToColumns:(CFArrayRef)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addElement:(id)arg1 toRowWithIndex:(unsigned long long)arg2 columnWithIndex:(unsigned long long)arg3 columns:(CFArrayRef)arg4 rowRanges:(CFArrayRef)arg5 rowCount:(unsigned long long*)arg6 forceSplit:(char)arg7 addToTopRow:(char)arg8 ;
-(void)_rebuildColumnWithIndex:(unsigned long long)arg1 inColumns:(CFArrayRef)arg2 ranges:(CFArrayRef)arg3 ;
-(void)addElement:(id)arg1 toRowWithIndex:(unsigned long long)arg2 columnWithIndex:(unsigned long long)arg3 columns:(CFArrayRef)arg4 rowRanges:(CFArrayRef)arg5 rowCount:(unsigned long long*)arg6 ;
-(void)_squeezeMapIntoListsWithColumns:(CFArrayRef)arg1 columnRanges:(CFArrayRef)arg2 rowRanges:(CFArrayRef)arg3 ;
-(char)storeDeltaPointForChild:(id)arg1 fromPosition:(CGPoint)arg2 ;
-(void)_setXList:(CFArrayRef)arg1 ;
-(void)_setYList:(CFArrayRef)arg1 ;
-(void)setDeltaPointFromPreviousChild:(CGPoint)arg1 ;
-(CFArrayRef)alternateListForMapList:(CFArrayRef)arg1 ;
-(id)selectedChildren;
-(unsigned long long)allChildrenCount;
-(char)supportsAction:(id)arg1 ;
-(char)isActionable;
-(char)canBeActivated;
-(void)performCancelAction;
-(void)performSetKeyboardFocusAction;
-(id)axDescription;
-(id)axIdentifier;
-(double)valueAsFloat;
-(long long)valueAsInteger;
-(char)canHaveKeyboardFocus;
-(char)isPartOfSelection;
-(char)canHandleSelectedChildrenChange;
-(char)hasSelectedChildren;
-(char)hasMultipleSelection;
-(long long)blockquoteLevel;
-(id)invalidStatus;
-(char)isDescendentOfApplication:(id)arg1 ;
-(id)selectedTextRange;
-(id)characterPositionBeforePosition:(id)arg1 ;
-(id)childrenXList;
-(id)childrenYList;
-(void)buildChildrenMap;
-(CFArrayRef)_xList;
-(CFArrayRef)_yList;
-(void)_logMapWithColumns:(CFArrayRef)arg1 ColumnRanges:(CFArrayRef)arg2 rowRanges:(CFArrayRef)arg3 ;
-(CGPoint)deltaPointFromPreviousChild;
-(char)trustBoundsAsVisibleBounds;
-(void)setTrustBoundsAsVisibleBounds:(char)arg1 ;
-(id)help;
-(char)isDisabled;
-(CGRect)visibleBounds;
-(id)allChildren;
-(void)performSelectAction;
-(id)accessKey;
-(id)role;
-(id)subrole;
-(id)roleDescription;
-(char)hasKeyboardFocus;
-(void)dealloc;
-(CGRect)bounds;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)url;
-(char)isEnabled;
-(id)title;
-(void)activate;
-(char)isEditable;
-(char)isSelectable;
-(id)stringForRange:(id)arg1 ;
-(id)orientation;
-(id)parent;
-(id)children;
-(char)isSelected;
-(id)value;
-(char)isHorizontal;
-(unsigned long long)numberOfCharacters;
-(char)isRequired;
@end
