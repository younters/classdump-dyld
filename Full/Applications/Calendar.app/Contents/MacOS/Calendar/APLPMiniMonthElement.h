/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/APLPCanvasElement.h>

@class NSDate, CalDateRange, NSFont, NSColor;

@interface APLPMiniMonthElement : APLPCanvasElement {

	int variant;
	NSDate* date;
	NSDate* firstDayOfMonth;
	CalDateRange* range;
	double daySize;
	double leftMargin;
	double internalMargin;
	double circleSize;
	long long weekStartDay;
	NSFont* headerFont;
	NSFont* dayFont;
	NSColor* minimonthColor;
	char setupDone;

}
-(char)recursiveEndResolveWithDataSource:(id)arg1 type:(int)arg2 ;
-(char)resolveWithDataSource:(id)arg1 ;
-(CGSize)optimumSize;
-(char)canGrowVertically;
-(char)canGrowHorizontally;
-(void)calculateSizes;
-(void)setupHeader;
-(void)setupWeekRectangles;
-(void)setupDays;
@end
