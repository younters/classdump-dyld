/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/PlugIns/PersonIcon.plugin/Contents/MacOS/PersonIcon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PersonIcon/PersonIcon-Structs.h>
#import <AppKit/NSView.h>

@class IMHandle, NSString, BuddyPicture;

@interface PersonIconView : NSView {

	IMHandle* _imHandle;
	NSString* _pictureKey;
	BuddyPicture* _picture;
	char _shouldAnimate;

}
-(void)setIMHandle:(id)arg1 ;
-(void)_needsDrawFromAnimate:(id)arg1 ;
-(void)_pictureChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withIMHandle:(id)arg2 ;
-(void)setShouldAnimate:(char)arg1 ;
-(void)setPictureKey:(id)arg1 ;
-(void)setBuddyPicture:(id)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
@end
