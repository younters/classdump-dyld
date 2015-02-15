/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/DesktopScreenEffectsPref.prefPane/Contents/Resources/DesktopPictures.prefPane/Contents/MacOS/DesktopPictures
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class DSKDesktopConfig;

@interface DSKApplyDesktopConfigOperation : NSOperation {

	DSKDesktopConfig* desktopConfig;
	unsigned displayID;

}

@property (copy) DSKDesktopConfig * desktopConfig; 
@property (assign) unsigned displayID; 
-(DSKDesktopConfig *)desktopConfig;
-(void)setDesktopConfig:(DSKDesktopConfig *)arg1 ;
-(id)initWithDesktopConfig:(id)arg1 displayID:(unsigned)arg2 ;
-(void)setDisplayID:(unsigned)arg1 ;
-(unsigned)displayID;
-(void)dealloc;
-(void)main;
@end
