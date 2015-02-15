/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FezAudioRecordingAdapter, FezVideoRecordingAdapter;
#import <Messages/Messages-Structs.h>
@class NSString, NSLock, NSURL, NSObject, FezMPEG4AACAudioRecorder, FezH264VideoRecorder;

@interface FezAVRecorder : NSObject {

	id _delegate;
	NSString* _outputFilePathName;
	char _isRecording;
	char _didRecordVideo;
	NSLock* _fileWriterLock;
	NSURL* _outputFileURL;
	OpaqueCMByteStreamRef _outputByteStreamRef;
	OpaqueFigFormatWriterRef _outputFormatWriterRef;
	SCD_Struct_Fe25 _firstFrameTime;
	NSObject*<FezAudioRecordingAdapter> _audioAdapter;
	FezMPEG4AACAudioRecorder* _audioRecorder;
	NSObject*<FezVideoRecordingAdapter> _videoAdapter;
	FezH264VideoRecorder* _videoRecorder;
	SCD_Struct_Fe25 _refFirstPresentationTime;

}
-(void)setVideoAdapter:(id)arg1 ;
-(void)setAudioAdapter:(id)arg1 ;
-(void)setOutputFilePathName:(id)arg1 ;
-(int)prepareRecording;
-(int)saveRecording;
-(id)outputFilePathName;
-(id)videoAdapter;
-(void)recordFrame:(CVBufferRef)arg1 ;
-(void)recordAudioBufferList:(AudioBufferList*)arg1 description:(AudioStreamBasicDescription)arg2 channelLayout:(AudioChannelLayout*)arg3 channelLayoutSize:(unsigned)arg4 presentationTime:(SCD_Struct_Fe25)arg5 ;
-(id)fileWriterLock;
-(id)audioAdapter;
-(char)didRecordVideo;
-(void)setDidRecordVideo:(char)arg1 ;
-(SCD_Struct_Fe25)normalizeDuration:(SCD_Struct_Fe25)arg1 ;
-(SCD_Struct_Fe25)normalizePresentationTime:(SCD_Struct_Fe25)arg1 ;
-(void)recorder:(id)arg1 didEncounterError:(int)arg2 ;
-(void)audioRecordingAdapter:(id)arg1 didEncounterError:(int)arg2 ;
-(void)videoRecordingAdapter:(id)arg1 didEncounterError:(int)arg2 ;
-(int)cancelRecording;
-(int)startRecording;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)_cleanup;
@end
