/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol RCWaveformGeneratorSegmentOutputObserver <NSObject>
@optional
-(void)waveformGeneratorWillBeginLoading:(id)arg1;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;

@required
-(void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
@end
