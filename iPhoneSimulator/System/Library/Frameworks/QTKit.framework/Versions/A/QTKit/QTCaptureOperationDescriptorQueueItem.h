/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QTCaptureOperationDescriptor;
#import <QTKit/QTKit-Structs.h>
@interface QTCaptureOperationDescriptorQueueItem : NSObject {

	id<QTCaptureOperationDescriptor> _operationDescriptor;
	SCD_Struct_QT36 _operationTime;

}
-(id)initWithOperationDescriptor:(id)arg1 operationTime:(SCD_Struct_QT36)arg2 ;
-(id)operationDescriptor;
-(SCD_Struct_QT36)operationTime;
-(id)init;
-(void)dealloc;
@end

