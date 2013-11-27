/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSURL, NSData, NSDictionary, NSArray;

@interface AVAudioPlayer : NSObject {

	id _impl;

}

@property (getter=isPlaying,readonly) BOOL playing; 
@property (readonly) unsigned numberOfChannels; 
@property (readonly) double duration; 
@property (assign) <AVAudioPlayerDelegate> * delegate; 
@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
@property (assign) float pan; 
@property (assign) float volume; 
@property (assign) BOOL enableRate; 
@property (assign) float rate; 
@property (assign) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (assign) int numberOfLoops; 
@property (readonly) NSDictionary * settings; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(id)impl;
-(BOOL)isMeteringEnabled;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned)arg1 ;
-(float)averagePowerForChannel:(unsigned)arg1 ;
-(id)baseInit;
-(void)finishedPlaying:(id)arg1 ;
-(void)decodeError:(id)arg1 ;
-(id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(BOOL)playAtTime:(double)arg1 ;
-(void)setEnableRate:(BOOL)arg1 ;
-(BOOL)enableRate;
-(void)setPan:(float)arg1 ;
-(float)pan;
-(double)deviceCurrentTime;
-(void)setNumberOfLoops:(int)arg1 ;
-(int)numberOfLoops;
-(id)channelAssignments;
-(void)setChannelAssignments:(id)arg1 ;
-(double)currentTime;
-(BOOL)prepareToPlay;
-(BOOL)play;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)isPlaying;
-(void)beginInterruption;
-(void)endInterruptionWithFlags:(id)arg1 ;
-(void)endInterruption;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(double)duration;
-(id)data;
-(id)url;
-(id)settings;
-(void)stop;
-(void)pause;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(unsigned)numberOfChannels;
-(float)rate;
-(void)finalize;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
@end
