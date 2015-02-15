/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/NSUserInterfaceValidations.h>
#import <QTKit/QTHUDTimelineCellDelegate.h>
#import <QTKit/NSCoding.h>

@class NSString, QTMovie;

@interface QTMoviePlaybackController : NSObject <NSUserInterfaceValidations, QTHUDTimelineCellDelegate, NSCoding> {

	QTMoviePlaybackControllerInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_QT12 duration; 
@property (assign,nonatomic) SCD_Struct_QT12 currentTime; 
@property (assign,nonatomic) double rate; 
@property (assign,getter=isPlaying,nonatomic) char playing; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isMuted,nonatomic) char muted; 
@property (nonatomic,readonly) NSString * statusString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) QTMovie * movie; 
@property (nonatomic,readonly) id selection; 
@property (assign,nonatomic) char periodicallyUpdatesTime; 
@property (assign,nonatomic) double updateInterval; 
@property (assign,nonatomic) double updateResolution; 
+(id)keyPathsForValuesAffectingRate;
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingMuted;
+(id)keyPathsForValuesAffectingDuration;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingNaturalSize;
+(id)keyPathsForValuesAffectingStatusString;
+(void)initialize;
-(CGSize)naturalSize;
-(void)setMuted:(char)arg1 ;
-(void)togglePlaying:(id)arg1 ;
-(char)isMuted;
-(void)gotoBeginning:(id)arg1 ;
-(void)stepForward:(id)arg1 ;
-(void)stepBackward:(id)arg1 ;
-(void)gotoEnd:(id)arg1 ;
-(double)updateResolution;
-(double)updateInterval;
-(char)periodicallyUpdatesTime;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setUpdateResolution:(double)arg1 ;
-(void)setPeriodicallyUpdatesTime:(char)arg1 ;
-(void)gotoNextChapter:(id)arg1 ;
-(void)gotoPreviousChapter:(id)arg1 ;
-(void)scanForward:(id)arg1 ;
-(void)scanBackward:(id)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(SCD_Struct_QT12)timelineCell:(id)arg1 willChangeTimeValue:(SCD_Struct_QT12)arg2 ;
-(QTMovie *)movie;
-(id)init;
-(void)dealloc;
-(SCD_Struct_QT12)duration;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(id)selection;
-(char)isPlaying;
-(void)setVolume:(float)arg1 ;
-(SCD_Struct_QT12)currentTime;
-(void)setCurrentTime:(SCD_Struct_QT12)arg1 ;
-(float)volume;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void)setMovie:(QTMovie *)arg1 ;
-(NSString *)statusString;
-(void)setPlaying:(char)arg1 ;
@end
