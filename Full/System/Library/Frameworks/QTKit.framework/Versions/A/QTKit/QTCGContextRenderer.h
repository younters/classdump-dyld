/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:20 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTImageConsumer.h>

@class QTCGContextRendererInternal, NSString;

@interface QTCGContextRenderer : NSObject <QTImageConsumer> {

	QTCGContextRendererInternal* _internal;
	long long _reserved;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPreferredAttributes;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)diagnosticString;
-(void)renderWithFrame:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)preferredAttributes;
-(void)flushImageBuffersAfterHostTime:(unsigned long long)arg1 ;
-(void)setImageBuffer:(CVBufferRef)arg1 forHostTime:(unsigned long long)arg2 ;
-(void)_postImageAvailableNotification;
-(void)setTargetWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
@end

