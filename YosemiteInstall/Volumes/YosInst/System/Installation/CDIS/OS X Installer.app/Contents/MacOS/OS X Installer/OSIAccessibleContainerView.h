/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:08:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Installation/CDIS/OS X Installer.app/Contents/MacOS/OS X Installer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class OSITargetSelectViewItem;

@interface OSIAccessibleContainerView : NSView {

	OSITargetSelectViewItem* _item;

}

@property (assign) OSITargetSelectViewItem * item;              //@synthesize item=_item - In the implementation block
-(id)accessibilityFocusedUIElement;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(OSITargetSelectViewItem *)item;
-(void)setItem:(OSITargetSelectViewItem *)arg1 ;
@end
