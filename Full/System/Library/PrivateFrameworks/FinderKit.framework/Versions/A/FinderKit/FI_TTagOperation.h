/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_IAsyncNodeOperation.h>

@interface FI_TTagOperation : FI_IAsyncNodeOperation {

	TTagsTask* _task;
	TNSRef<FI_TTagOperationDelegate *> _opDelegate;

}
-(id)initWithNodes:(const TFENodeVector*)arg1 forTask:(TTagsTask*)arg2 ;
-(int)startSubOperation:(unsigned)arg1 ;
-(int)cancelOperation;
-(void)configureOperationRecord:(TOperationRecord*)arg1 forIndex:(unsigned long long)arg2 ;
-(void)runOperation;
@end
