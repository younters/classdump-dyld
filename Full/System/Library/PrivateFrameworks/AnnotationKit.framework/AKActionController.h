/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AKController;

@interface AKActionController : NSObject {

	AKController* _controller;

}

@property (__weak) AKController * controller;              //@synthesize controller=_controller - In the implementation block
-(char)validateSender:(id)arg1 ;
-(void)performActionForSender:(id)arg1 ;
-(AKController *)controller;
-(char)validateMenuItem:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)setController:(AKController *)arg1 ;
@end
