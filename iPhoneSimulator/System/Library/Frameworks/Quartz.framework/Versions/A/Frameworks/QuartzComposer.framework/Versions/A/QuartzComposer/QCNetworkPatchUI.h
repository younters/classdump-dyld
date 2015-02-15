/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCInspector.h>

@class NSMatrix, NSTextField;

@interface QCNetworkPatchUI : QCInspector {

	NSMatrix* protocolMatrix;
	NSTextField* ipField_1;
	NSTextField* ipField_2;
	NSTextField* ipField_3;
	NSTextField* ipField_4;
	NSTextField* portField;

}
-(void)setupViewForPatch:(id)arg1 ;
-(void)_updateUI:(id)arg1 ;
-(void)updateProtocol:(id)arg1 ;
-(void)updatePort:(id)arg1 ;
@end
