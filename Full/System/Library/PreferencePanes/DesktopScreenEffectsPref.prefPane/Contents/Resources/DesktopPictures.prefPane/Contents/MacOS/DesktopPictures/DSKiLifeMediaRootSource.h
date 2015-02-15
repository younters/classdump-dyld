/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/DesktopScreenEffectsPref.prefPane/Contents/Resources/DesktopPictures.prefPane/Contents/MacOS/DesktopPictures
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DesktopPictures/DSKRootSource.h>

@class ILMediaManager;

@interface DSKiLifeMediaRootSource : DSKRootSource {

	ILMediaManager* mediaManager;
	char dataWasLoaded;

}
-(void)loadDataSynchronously;
-(void)unloadDataSynchronously;
-(id)initWithMediaManager:(id)arg1 ;
-(id)sourceOfPictureWithMediaGroup:(id)arg1 ;
-(id)childrenWithMediaGroupArray:(id)arg1 parent:(id)arg2 ;
-(void)dealloc;
-(id)name;
-(char)isValid;
@end
