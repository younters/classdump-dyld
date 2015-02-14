/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/CALCanvasAttributedText.h>

@class NSMutableArray;

@interface CALCanvasURLEnabledText : CALCanvasAttributedText {

	NSMutableArray* _urlInfoList;
	char _activateOnDoubleClick;

}
+(void)initialize;
-(void)applyAttributes;
-(char)mouseDown:(id)arg1 sender:(id)arg2 ;
-(char)scanner:(id)arg1 scanUpToString:(id)arg2 intoString:(id*)arg3 ;
-(char)activateOnDoubleClick;
-(void)urlClicked:(id)arg1 sender:(id)arg2 ;
-(void)setActivateOnDoubleClick:(char)arg1 ;
-(id)setText:(id)arg1 ;
-(id)init;
@end
