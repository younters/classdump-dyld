/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/TimeMachine.prefPane/Contents/MacOS/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class NSTextField;

@interface TMDestinationTableCellView : NSTableCellView {

	NSTextField* _nameField;
	NSTextField* _descriptionField;

}

@property (assign) NSTextField * nameField;                     //@synthesize nameField=_nameField - In the implementation block
@property (assign) NSTextField * descriptionField;              //@synthesize descriptionField=_descriptionField - In the implementation block
-(NSTextField *)nameField;
-(void)setNameField:(NSTextField *)arg1 ;
-(NSTextField *)descriptionField;
-(void)setDescriptionField:(NSTextField *)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
@end
