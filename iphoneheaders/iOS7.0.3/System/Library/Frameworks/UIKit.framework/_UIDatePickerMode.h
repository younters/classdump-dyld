/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDateComponents, NSString, NSArray, UIColor, UIFont, _UIDatePickerView, NSDate;

@interface _UIDatePickerMode : NSObject {

	NSDateComponents* _selectedDateComponents;
	NSDateComponents* _baseDateComponents;
	unsigned* _elements;
	int _yearsSinceBaseDate;
	NSRange _maxDayRange;
	NSRange _maxMonthRange;
	NSString* _localizedFormatString;
	NSArray* _dateFormatters;
	UIColor* _todayTextColor;
	UIFont* _amPmFont;
	UIFont* _font;
	UIFont* _defaultTimeFont;
	NSString* _amString;
	NSString* _pmString;
	NSDateComponents* _todayDateComponents;
	_UIDatePickerView* _datePickerView;
	unsigned _numberOfComponents;
	int _minuteInterval;
	NSDate* _minimumDate;
	NSDateComponents* _minimumDateComponents;
	NSDate* _maximumDate;
	NSDateComponents* _maximumDateComponents;
	NSDate* _baseDate;
	NSDate* _originatingDate;
	double _todaySinceReferenceDate;

}

@property (nonatomic,readonly) int datePickerMode; 
@property (nonatomic,readonly) float rowHeight; 
@property (assign,nonatomic) unsigned numberOfComponents;                                               //@synthesize numberOfComponents=_numberOfComponents - In the implementation block
@property (nonatomic,readonly) int displayedCalendarUnits; 
@property (nonatomic,readonly) UIColor * todayTextColor; 
@property (assign,nonatomic) int minuteInterval;                                                        //@synthesize minuteInterval=_minuteInterval - In the implementation block
@property (nonatomic,retain) NSDateComponents * todayDateComponents; 
@property (assign,nonatomic) double todaySinceReferenceDate;                                            //@synthesize todaySinceReferenceDate=_todaySinceReferenceDate - In the implementation block
@property (nonatomic,readonly) NSDate * minimumDate;                                                    //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * minimumDateComponents;                                //@synthesize minimumDateComponents=_minimumDateComponents - In the implementation block
@property (nonatomic,readonly) NSDate * maximumDate;                                                    //@synthesize maximumDate=_maximumDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * maximumDateComponents;                                //@synthesize maximumDateComponents=_maximumDateComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * selectedDateComponents;                                 //@synthesize selectedDateComponents=_selectedDateComponents - In the implementation block
@property (nonatomic,@dynamic,readonly) float totalComponentWidth; 
@property (getter=is24Hour,nonatomic,@dynamic,readonly) BOOL is24Hour; 
@property (getter=isTimeIntervalMode,nonatomic,@dynamic,readonly) BOOL isTimeIntervalMode; 
@property (assign,nonatomic) _UIDatePickerView * datePickerView;                                        //@synthesize datePickerView=_datePickerView - In the implementation block
@property (nonatomic,readonly) UIFont * amPmFont; 
@property (nonatomic,readonly) UIFont * font; 
@property (nonatomic,readonly) UIFont * defaultTimeFont; 
@property (nonatomic,readonly) UIFont * sizedFont; 
@property (nonatomic,readonly) NSString * amString; 
@property (nonatomic,readonly) NSString * pmString; 
@property (assign,nonatomic) unsigned* elements; 
@property (nonatomic,retain) NSString * localizedFormatString;                                          //@synthesize localizedFormatString=_localizedFormatString - In the implementation block
@property (nonatomic,retain) NSDate * baseDate;                                                         //@synthesize baseDate=_baseDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * baseDateComponents; 
@property (assign,nonatomic) int yearsSinceBaseDate;                                                    //@synthesize yearsSinceBaseDate=_yearsSinceBaseDate - In the implementation block
@property (nonatomic,retain) NSDate * originatingDate;                                                  //@synthesize originatingDate=_originatingDate - In the implementation block
+(void)initialize;
+(int)datePickerMode;
+(id)_datePickerModeWithMode:(int)arg1 datePickerView:(id)arg2 ;
+(unsigned)extractableCalendarUnits;
+(id)newDateFromGregorianYear:(int)arg1 month:(int)arg2 day:(int)arg3 timeZone:(id)arg4 ;
+(id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2 ;
-(void)dealloc;
-(unsigned)numberOfComponents;
-(id)init;
-(int)numberOfRowsInComponent:(int)arg1 ;
-(float)rowHeight;
-(id)font;
-(id)amString;
-(id)pmString;
-(unsigned*)elements;
-(void)setMinuteInterval:(int)arg1 ;
-(int)datePickerMode;
-(id)timeZone;
-(id)calendar;
-(id)minimumDate;
-(id)maximumDate;
-(int)minuteInterval;
-(id)locale;
-(void)setTodayDateComponents:(id)arg1 ;
-(BOOL)isTimeIntervalMode;
-(void)noteCalendarChanged;
-(void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2 ;
-(int)displayedCalendarUnits;
-(int)componentForCalendarUnit:(unsigned)arg1 ;
-(BOOL)is24Hour;
-(int)hourForRow:(int)arg1 ;
-(void)updateSelectedDateComponentsWithNewValueInComponent:(int)arg1 ;
-(void)loadDate:(id)arg1 animated:(BOOL)arg2 ;
-(int)minuteForRow:(int)arg1 ;
-(BOOL)areValidDateComponents:(id)arg1 comparingUnits:(int)arg2 ;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(int)arg2 ;
-(id)selectedDateComponents;
-(id)fontForCalendarUnit:(unsigned)arg1 ;
-(id)viewForRow:(int)arg1 inComponent:(int)arg2 reusingView:(id)arg3 ;
-(unsigned)calendarUnitForComponent:(int)arg1 ;
-(void)updateEnabledStateOfViewForRow:(int)arg1 inComponent:(int)arg2 ;
-(float)totalComponentWidth;
-(float)widthForComponent:(int)arg1 maxWidth:(float)arg2 ;
-(void)resetComponentWidths;
-(void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
-(void)setDatePickerView:(id)arg1 ;
-(void)_shouldReset:(id)arg1 ;
-(id)datePickerView;
-(id)dateFormatterForCalendarUnit:(unsigned)arg1 ;
-(id)dateFormatForCalendarUnit:(unsigned)arg1 ;
-(void)setTodaySinceReferenceDate:(double)arg1 ;
-(id)todayDateComponents;
-(void)setOriginatingDate:(id)arg1 ;
-(void)setBaseDateComponents:(id)arg1 ;
-(void)setBaseDate:(id)arg1 ;
-(void)setYearsSinceBaseDate:(int)arg1 ;
-(id)baseDateComponents;
-(id)baseDate;
-(id)amPmFont;
-(id)sizedFont;
-(float)totalComponentWidthWithFont:(id)arg1 ;
-(float)widthForCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(void)setNumberOfComponents:(unsigned)arg1 ;
-(id)localizedFormatString;
-(void)setElements:(unsigned*)arg1 ;
-(int)numberOfRowsForCalendarUnit:(unsigned)arg1 ;
-(void)clearBaseDate;
-(void)setLocalizedFormatString:(id)arg1 ;
-(unsigned)nextUnitSmallerThanUnit:(unsigned)arg1 ;
-(unsigned)nextUnitLargerThanUnit:(unsigned)arg1 ;
-(NSRange)rangeForCalendarUnit:(unsigned)arg1 ;
-(int)_incrementForStaggeredTimeIntervals;
-(id)_dateForYearRow:(int)arg1 ;
-(int)secondForRow:(int)arg1 ;
-(int)dayForRow:(int)arg1 ;
-(int)monthForRow:(int)arg1 ;
-(int)yearForRow:(int)arg1 ;
-(int)eraForYearRow:(int)arg1 ;
-(int)valueForRow:(int)arg1 inCalendarUnit:(unsigned)arg2 ;
-(id)_dateByEnsuringValue:(int)arg1 forCalendarUnit:(unsigned)arg2 ;
-(id)dateForRow:(int)arg1 inCalendarUnit:(unsigned)arg2 ;
-(int)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned)arg3 ;
-(int)rowForValue:(int)arg1 forCalendarUnit:(unsigned)arg2 currentRow:(int)arg3 ;
-(int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4 ;
-(void)setSelectedDateComponents:(id)arg1 ;
-(void)_updateSelectedDateComponentsWithNewValueInComponent:(int)arg1 usingSelectionBarValue:(BOOL)arg2 ;
-(id)originatingDate;
-(BOOL)_monthExists:(int)arg1 inYear:(int)arg2 ;
-(int)_numberOfDaysInDateComponents:(id)arg1 ;
-(int)titleAlignmentForCalendarUnit:(unsigned)arg1 ;
-(id)titleForRow:(int)arg1 inComponent:(int)arg2 ;
-(BOOL)_shouldEnableValueForRow:(int)arg1 column:(int)arg2 ;
-(id)todayTextColor;
-(BOOL)_isComponentScrolling:(int)arg1 ;
-(BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned)arg3 ;
-(BOOL)_scrollingAnyColumnExcept:(int)arg1 ;
-(float)componentWidthForTwoDigitCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(double)todaySinceReferenceDate;
-(int)yearsSinceBaseDate;
-(id)defaultTimeFont;
-(int)validateValue:(int)arg1 forCalendarUnit:(unsigned)arg2 ;
-(id)minimumDateComponents;
-(id)maximumDateComponents;
@end
