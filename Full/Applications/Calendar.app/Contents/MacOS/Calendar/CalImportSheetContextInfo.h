/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext, CalManagedCalendar;

@interface CalImportSheetContextInfo : NSObject {

	unsigned long long _numMalformedEntities;
	NSManagedObjectContext* _context;
	CalManagedCalendar* _calendar;
	/*^block*/id _answerBlock;

}

@property (assign,nonatomic) unsigned long long numMalformedEntities;              //@synthesize numMalformedEntities=_numMalformedEntities - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CalManagedCalendar * calendar;                        //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) id answerBlock;                                         //@synthesize answerBlock=_answerBlock - In the implementation block
-(unsigned long long)numMalformedEntities;
-(void)setNumMalformedEntities:(unsigned long long)arg1 ;
-(id)answerBlock;
-(void)setAnswerBlock:(id)arg1 ;
-(NSManagedObjectContext *)context;
-(CalManagedCalendar *)calendar;
-(void)setCalendar:(CalManagedCalendar *)arg1 ;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
@end
