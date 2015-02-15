/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Notifications.prefPane/Contents/MacOS/Notifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notifications/NCPrefEntity.h>

@class NSImage, SOFavoritesHelper, NSDate, NSString;

@interface NCPrefDNDEntity : NCPrefEntity {

	NSImage* _image;
	SOFavoritesHelper* _facetimeHelper;
	BOOL _loadedFacetimeInfo;
	char _dndEnabled;
	char _autoTurnOnDisplaySleep;
	char _autoTurnOnWhenMirroring;
	char _autoTurnOnFromTo;
	char _allowFaceTimeCalls;
	char _allowRepeatedCallsFromSamePerson;
	char _faceTimeSPIAvailable;
	NSDate* _autoTurnOnFromDate;
	NSDate* _autoTurnOnFromMinDate;
	NSDate* _autoTurnOnFromMaxDate;
	NSDate* _autoTurnOnToDate;
	NSDate* _autoTurnOnToMinDate;
	NSDate* _autoTurnOnToMaxDate;

}

@property (nonatomic,readonly) NSImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,__weak,readonly) NSString * summary; 
@property (assign,nonatomic) char dndEnabled;                                    //@synthesize dndEnabled=_dndEnabled - In the implementation block
@property (assign,nonatomic) char autoTurnOnDisplaySleep;                        //@synthesize autoTurnOnDisplaySleep=_autoTurnOnDisplaySleep - In the implementation block
@property (assign,nonatomic) char autoTurnOnWhenMirroring;                       //@synthesize autoTurnOnWhenMirroring=_autoTurnOnWhenMirroring - In the implementation block
@property (assign,nonatomic) char autoTurnOnFromTo;                              //@synthesize autoTurnOnFromTo=_autoTurnOnFromTo - In the implementation block
@property (nonatomic,retain) NSDate * autoTurnOnFromDate;                        //@synthesize autoTurnOnFromDate=_autoTurnOnFromDate - In the implementation block
@property (nonatomic,retain) NSDate * autoTurnOnFromMinDate;                     //@synthesize autoTurnOnFromMinDate=_autoTurnOnFromMinDate - In the implementation block
@property (nonatomic,retain) NSDate * autoTurnOnFromMaxDate;                     //@synthesize autoTurnOnFromMaxDate=_autoTurnOnFromMaxDate - In the implementation block
@property (nonatomic,retain) NSDate * autoTurnOnToDate;                          //@synthesize autoTurnOnToDate=_autoTurnOnToDate - In the implementation block
@property (nonatomic,retain) NSDate * autoTurnOnToMinDate;                       //@synthesize autoTurnOnToMinDate=_autoTurnOnToMinDate - In the implementation block
@property (nonatomic,retain) NSDate * autoTurnOnToMaxDate;                       //@synthesize autoTurnOnToMaxDate=_autoTurnOnToMaxDate - In the implementation block
@property (assign,nonatomic) char allowFaceTimeCalls;                            //@synthesize allowFaceTimeCalls=_allowFaceTimeCalls - In the implementation block
@property (assign,nonatomic) char allowRepeatedCallsFromSamePerson;              //@synthesize allowRepeatedCallsFromSamePerson=_allowRepeatedCallsFromSamePerson - In the implementation block
@property (assign,nonatomic) char faceTimeSPIAvailable;                          //@synthesize faceTimeSPIAvailable=_faceTimeSPIAvailable - In the implementation block
-(void)setAutoTurnOnFromMinDate:(NSDate *)arg1 ;
-(void)setAutoTurnOnToMinDate:(NSDate *)arg1 ;
-(char)faceTimeSPIAvailable;
-(NSDate *)autoTurnOnFromMaxDate;
-(void)setAutoTurnOnDisplaySleep:(char)arg1 ;
-(void)setAutoTurnOnToMaxDate:(NSDate *)arg1 ;
-(void)setAutoTurnOnFromTo:(char)arg1 ;
-(void)setAutoTurnOnFromDate:(NSDate *)arg1 ;
-(void)setAutoTurnOnFromMaxDate:(NSDate *)arg1 ;
-(char)dndEnabled;
-(void)setAutoTurnOnWhenMirroring:(char)arg1 ;
-(NSDate *)autoTurnOnToMinDate;
-(void)setAutoTurnOnToDate:(NSDate *)arg1 ;
-(NSDate *)autoTurnOnFromMinDate;
-(NSDate *)autoTurnOnToMaxDate;
-(void)setDndEnabled:(char)arg1 ;
-(char)autoTurnOnFromTo;
-(void)_loadFacetimePreferences:(id)arg1 ;
-(char)autoTurnOnWhenMirroring;
-(void)setFaceTimeSPIAvailable:(char)arg1 ;
-(void)setAllowFaceTimeCalls:(char)arg1 ;
-(NSDate *)autoTurnOnToDate;
-(char)allowFaceTimeCalls;
-(NSDate *)autoTurnOnFromDate;
-(char)autoTurnOnDisplaySleep;
-(void)_syncLoadFacetimePreferencesWithTimeout:(double)arg1 ;
-(void)setAllowRepeatedCallsFromSamePerson:(char)arg1 ;
-(char)allowRepeatedCallsFromSamePerson;
-(NSString *)summary;
-(NSImage *)image;
-(id)initWithName:(id)arg1 ;
@end
