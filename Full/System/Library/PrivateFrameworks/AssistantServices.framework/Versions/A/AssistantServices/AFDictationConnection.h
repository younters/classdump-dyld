/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFDictationDelegate;
@class NSXPCConnection, NSString, AFLocalDictationProxy;

@interface AFDictationConnection : NSObject {

	NSXPCConnection* _assistantConnection;
	NSString* _lastUsedLanguage;
	id<AFDictationDelegate> _delegate;
	float _averagePower;
	float _peakPower;
	AFLocalDictationProxy* _localDictationProxy;
	char _isCapturingSpeech;
	char _hasActiveRequest;

}

@property (assign,nonatomic,__weak) id<AFDictationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(char)dictationIsEnabled;
+(char)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(void)fetchSupportedLanguageCodes:(/*^block*/id)arg1 ;
-(void)endSession;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)preheat;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(void)_checkAndSetIsCapturingSpeech:(char)arg1 ;
-(void)_speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_tellSpeechDelegateRecordingDidBegin;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(void)stopSpeech;
-(float)averagePower;
-(float)peakPower;
-(void)cancelAvailabilityMonitoring;
-(void)_clearConnections;
-(void)_willFailDictationWithError:(id)arg1 ;
-(void)_willCompleteDictation;
-(void)_registerInvalidationHandlerForXPCConnection:(id)arg1 ;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 ;
-(void)preheatWithRecordDeviceIdentifier:(id)arg1 ;
-(id)_assistantConnection;
-(id)_localDictationProxy;
-(id)_assistantDictationService;
-(id)_dictationServiceForLanguage:(id)arg1 ;
-(void)_availabilityChanged:(id)arg1 ;
-(id)_dictationServiceForLastUsedLanguage;
-(void)_willStartDictation;
-(void)_willCancelDictation;
-(void)_tellSpeechDelegateDidHypothesizeSpeechPhrases:(id)arg1 languageModel:(id)arg2 ;
-(void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 ;
-(char)dictationIsAvailableForLanguage:(id)arg1 ;
-(void)beginAvailabilityMonitoring;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 ;
-(void)setRecordingAlertRoute:(int)arg1 ;
-(void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(char)arg2 options:(id)arg3 forLanguage:(id)arg4 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3 ;
-(void)cancelSpeech;
-(void)setDelegate:(id<AFDictationDelegate>)arg1 ;
-(void)dealloc;
-(id<AFDictationDelegate>)delegate;
@end
