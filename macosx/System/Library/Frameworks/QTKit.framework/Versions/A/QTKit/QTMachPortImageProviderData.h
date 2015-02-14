/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QTImageConsumer;
#import <QTKit/QTKit-Structs.h>
@class NSCondition, QTRemoteCVImageBufferUnarchiver;

@interface QTMachPortImageProviderData : NSObject {

	unsigned port;
	id<QTImageConsumer> imageConsumer;
	unsigned imageSenderPort;
	unsigned long long imageSenderContext;
	unsigned replyMachPort;
	unsigned imageReceiverPort;
	CFRunLoopRef workRunLoop;
	NSCondition* workRunLoopAvailableCondition;
	CFRunLoopSourceRef stopRunLoopSource;
	char done;
	QTRemoteCVImageBufferUnarchiver* imageBufferUnarchiver;

}
@end
