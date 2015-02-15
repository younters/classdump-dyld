/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/DesktopScreenEffectsPref.prefPane/Contents/Resources/DesktopPictures.prefPane/Contents/MacOS/DesktopPictures
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DesktopPictures/DSKAbstractSourceOfPictures.h>

@class DSKAbstractSourceOfPictures;

@interface DSKRootSource : DSKAbstractSourceOfPictures {

	DSKAbstractSourceOfPictures* rootElement;

}

@property (retain) DSKAbstractSourceOfPictures * rootElement; 
+(id)rootSource;
-(void)loadDataSynchronouslyThreadSafe;
-(void)unloadDataSynchronouslyThreadSafe;
-(void)loadDataSynchronously;
-(void)unloadDataSynchronously;
-(char)loadOnASeparateThread;
-(char)arePicturesMutable;
-(id)pictures;
-(char)hierarcal;
-(id)displayInfo;
-(char)removeChild:(id)arg1 ;
-(void)setRootElement:(DSKAbstractSourceOfPictures *)arg1 ;
-(void)dealloc;
-(id)name;
-(id)identifier;
-(id)icon;
-(char)isValid;
-(id)children;
-(char)addChild:(id)arg1 ;
-(char)hasChildren;
-(DSKAbstractSourceOfPictures *)rootElement;
@end
