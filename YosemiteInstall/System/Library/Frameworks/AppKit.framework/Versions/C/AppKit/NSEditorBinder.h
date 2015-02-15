/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBinder.h>

@interface NSEditorBinder : NSBinder {

	struct {
		unsigned _conditionallySetsEditable : 1;
		unsigned _objectSupportsEditable : 1;
		unsigned _explicitlyRequestEditable : 1;
		unsigned _explicitEditableState : 1;
		unsigned _conditionallySetsEnabled : 1;
		unsigned _objectSupportsEnabled : 1;
		unsigned _explicitlyRequestEnabled : 1;
		unsigned _explicitEnabledState : 1;
		unsigned _conditionallySetsHidden : 1;
		unsigned _objectSupportsHidden : 1;
		unsigned _explicitlyRequestHidden : 1;
		unsigned _explicitHiddenState : 1;
		unsigned _reservedEditorBinder : 20;
	}  _editorBinderFlags;
	id _editableBinder;

}
+(id)_pluginProtocol;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_init;
-(void)_copyDetailsFromBinder:(id)arg1 ;
-(void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3 ;
-(id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(char)arg2 ;
-(char)_conditionallySetsStates;
-(void)_adjustStatesOfObject:(id)arg1 mode:(_NSKeyValueCodingControllerModeType)arg2 state:(char)arg3 triggerRedisplay:(char)arg4 ;
-(char)selectionSupportsEnabledState;
-(void)_setObject:(id)arg1 ;
-(void)_clearDependenciesWithAllPeerBinders;
-(char)shouldProcessObservations;
-(void)_noticeEditablePeerBinder:(id)arg1 ;
-(void)setConditionallySetsEditable:(char)arg1 ;
-(void)setConditionallySetsEnabled:(char)arg1 ;
-(void)setConditionallySetsHidden:(char)arg1 ;
-(char)conditionallySetsEditable;
-(char)conditionallySetsEnabled;
-(char)conditionallySetsHidden;
-(char)_isReferenceBinding:(id)arg1 ;
-(char)_isExplicitlyNonEditable;
@end
