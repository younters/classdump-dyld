/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TFileSystemOperation.h>

@interface FI_TRenameOperation : FI_TFileSystemOperation
-(void)setUpOperationRecordForIndex:(unsigned long long)arg1 withName:(const TString*)arg2 andExtensionState:(TriStateBool)arg3 ;
-(id)newDelegate;
-(void)configureOperationRecord:(TOperationRecord*)arg1 forNode:(const TFENode*)arg2 ;
@end
