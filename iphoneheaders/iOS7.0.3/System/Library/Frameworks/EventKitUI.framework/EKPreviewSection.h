/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray, NSDate;

@interface EKPreviewSection : NSObject {

	NSArray* _events;
	NSDate* _date;

}

@property (nonatomic,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(id)sectionWithDate:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(id)events;
-(id)date;
-(void)setDate:(id)arg1 ;
-(void).cxx_destruct;
@end
