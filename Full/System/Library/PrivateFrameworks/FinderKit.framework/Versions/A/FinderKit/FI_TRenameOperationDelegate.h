/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TFileSystemOperationDelegate.h>

@interface FI_TRenameOperationDelegate : FI_TFileSystemOperationDelegate {

	TString* _newName;
	TriStateBool _extensionHiddenState;

}
+(int)validateNewName:(const TString*)arg1 forNode:(const TFENode*)arg2 isDisplayName:(BOOL)arg3 allowInteraction:(BOOL)arg4 ;
+(BOOL)isReservedName:(const TString*)arg1 syntaxHint:(const NodeNameSyntaxHint*)arg2 ;
-(int)asyncNodeOperation:(id)arg1 errorNotification:(const OperationMonitor*)arg2 error:(const OperationErrorRecord*)arg3 reply:(NodeEventReply*)arg4 ;
-(int)asyncNodeOperation:(id)arg1 subOperationCompleted:(unsigned)arg2 targetNode:(const TFENode*)arg3 ;
-(int)configureNewName:(TString*)arg1 forNode:(const TFENode*)arg2 isDisplayName:(BOOL)arg3 allowInteraction:(BOOL)arg4 ;
-(const TriStateBool*)extensionHiddenState;
-(const TString*)newName;
@end
