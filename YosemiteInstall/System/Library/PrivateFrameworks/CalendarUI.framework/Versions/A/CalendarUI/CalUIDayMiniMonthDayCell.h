/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSDate, NSAttributedString, NSColor;

@interface CalUIDayMiniMonthDayCell : NSTextFieldCell {

	NSDate* _date;
	CGRect _frame;
	char _isHovered;
	char _isActive;
	id _axParent;
	char _isInPreviousMonth;
	char _isInNextMonth;
	char _weekNumbersEnabled;
	char _alwaysDrawsBackground;
	char _backgroundHasRoundedCorners;
	char _backgroundIsCircle;
	char _backgroundSizeIsStatic;
	long long _weekRow;
	NSAttributedString* _weekNumberString;
	NSColor* _dayBackgroundColor;
	double _backgroundCircleRadius;
	double _backgroundXOffset;
	double _backgroundYOffset;
	CGSize _backgroundSize;

}

@property (retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign) CGRect frame;                                       //@synthesize frame=_frame - In the implementation block
@property (assign) char isHovered;                                     //@synthesize isHovered=_isHovered - In the implementation block
@property (assign) char isActive;                                      //@synthesize isActive=_isActive - In the implementation block
@property (assign) char isInPreviousMonth;                             //@synthesize isInPreviousMonth=_isInPreviousMonth - In the implementation block
@property (assign) char isInNextMonth;                                 //@synthesize isInNextMonth=_isInNextMonth - In the implementation block
@property (assign) char weekNumbersEnabled;                            //@synthesize weekNumbersEnabled=_weekNumbersEnabled - In the implementation block
@property (assign) long long weekRow;                                  //@synthesize weekRow=_weekRow - In the implementation block
@property (retain) NSAttributedString * weekNumberString;              //@synthesize weekNumberString=_weekNumberString - In the implementation block
@property (retain) id axParent;                                        //@synthesize axParent=_axParent - In the implementation block
@property (retain) NSColor * dayBackgroundColor;                       //@synthesize dayBackgroundColor=_dayBackgroundColor - In the implementation block
@property (assign) char alwaysDrawsBackground;                         //@synthesize alwaysDrawsBackground=_alwaysDrawsBackground - In the implementation block
@property (assign) char backgroundHasRoundedCorners;                   //@synthesize backgroundHasRoundedCorners=_backgroundHasRoundedCorners - In the implementation block
@property (assign) char backgroundIsCircle;                            //@synthesize backgroundIsCircle=_backgroundIsCircle - In the implementation block
@property (assign) double backgroundCircleRadius;                      //@synthesize backgroundCircleRadius=_backgroundCircleRadius - In the implementation block
@property (assign) double backgroundXOffset;                           //@synthesize backgroundXOffset=_backgroundXOffset - In the implementation block
@property (assign) double backgroundYOffset;                           //@synthesize backgroundYOffset=_backgroundYOffset - In the implementation block
@property (assign) char backgroundSizeIsStatic;                        //@synthesize backgroundSizeIsStatic=_backgroundSizeIsStatic - In the implementation block
@property (assign) CGSize backgroundSize;                              //@synthesize backgroundSize=_backgroundSize - In the implementation block
+(id)_localizedStringForNumber:(id)arg1 ;
+(id)_todayGradient;
+(id)_todayBorderGradient;
+(id)_todayInsetBorderGradient;
-(char)isHovered;
-(void)setIsHovered:(char)arg1 ;
-(void)setWeekRow:(long long)arg1 ;
-(void)setWeekNumberString:(NSAttributedString *)arg1 ;
-(long long)weekRow;
-(void)setWeekNumbersEnabled:(char)arg1 ;
-(NSAttributedString *)weekNumberString;
-(char)isInNextMonth;
-(id)initTextCellWithDate:(id)arg1 calendar:(id)arg2 isActive:(char)arg3 font:(id)arg4 textColor:(id)arg5 alignment:(unsigned long long)arg6 ;
-(void)setAlwaysDrawsBackground:(char)arg1 ;
-(void)setDayBackgroundColor:(NSColor *)arg1 ;
-(void)setIsInPreviousMonth:(char)arg1 ;
-(void)setIsInNextMonth:(char)arg1 ;
-(void)setBackgroundHasRoundedCorners:(char)arg1 ;
-(void)setBackgroundIsCircle:(char)arg1 ;
-(void)setBackgroundXOffset:(double)arg1 ;
-(void)setBackgroundYOffset:(double)arg1 ;
-(void)setAxParent:(id)arg1 ;
-(void)setBackgroundSizeIsStatic:(char)arg1 ;
-(void)setBackgroundSize:(CGSize)arg1 ;
-(char)alwaysDrawsBackground;
-(char)backgroundSizeIsStatic;
-(CGSize)backgroundSize;
-(double)backgroundXOffset;
-(double)backgroundYOffset;
-(char)backgroundIsCircle;
-(char)backgroundHasRoundedCorners;
-(NSColor *)dayBackgroundColor;
-(id)axParent;
-(char)isInPreviousMonth;
-(char)weekNumbersEnabled;
-(double)backgroundCircleRadius;
-(void)setBackgroundCircleRadius:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(char)isActive;
-(void)setIsActive:(char)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end
