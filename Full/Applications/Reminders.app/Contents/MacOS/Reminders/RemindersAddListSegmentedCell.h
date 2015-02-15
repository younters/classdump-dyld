/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:52:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Reminders.app/Contents/MacOS/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <AppKit/NSSegmentedCell.h>

@class NSImage;

@interface RemindersAddListSegmentedCell : NSSegmentedCell {

	NSImage* _plusImage;
	NSImage* _plusImagePressed;

}

@property (retain) NSImage * plusImage;                     //@synthesize plusImage=_plusImage - In the implementation block
@property (retain) NSImage * plusImagePressed;              //@synthesize plusImagePressed=_plusImagePressed - In the implementation block
-(void)setPlusImage:(NSImage *)arg1 ;
-(void)setPlusImagePressed:(NSImage *)arg1 ;
-(NSImage *)plusImagePressed;
-(NSImage *)plusImage;
-(id)init;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(SEL)action;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
@end
