/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/CalUIListRowView.h>

@interface CalUIOccurrenceRowView : CalUIListRowView {

	char _showsSeparator;

}

@property (assign) char showsSeparator;              //@synthesize showsSeparator=_showsSeparator - In the implementation block
+(id)_dashPatternColor;
-(void)setShowsSeparator:(char)arg1 ;
-(char)showsSeparator;
-(void)drawSeparatorInRect:(CGRect)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)drawSelectionInRect:(CGRect)arg1 ;
@end
