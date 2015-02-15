/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTMovieModernizerInternal, NSURL, NSString, NSError;

@interface QTMovieModernizer : NSObject {

	QTMovieModernizerInternal* _internal;

}

@property (nonatomic,copy,readonly) NSURL * sourceURL; 
@property (nonatomic,copy,readonly) NSURL * destinationURL; 
@property (nonatomic,copy) NSString * outputFormat; 
@property (readonly) NSError * error; 
@property (assign) long long status; 
+(unsigned)isTrackMediaTypeIgnoredByCoreMedia:(unsigned)arg1 ;
+(unsigned)checkIfTrackTypeNeedsModernization:(unsigned)arg1 ;
+(unsigned)checkIfMediaTypeToPassthrough:(unsigned)arg1 subType:(unsigned)arg2 ;
+(char)checkMovieModernizeRequired:(id)arg1 isReferenceMovie:(char*)arg2 ;
+(OpaqueRFExportSourceRef)createExportSourceForTrackNumber:(int)arg1 sourceURL:(id)arg2 mediaType:(unsigned)arg3 ;
+(unsigned)checkIfTrackTypeToSkipDuringModernization:(unsigned)arg1 ;
+(unsigned)checkIfOldMP3Track:(unsigned)arg1 subType:(unsigned)arg2 ;
+(char)areWeRunningInASandbox;
+(char)isSubtypeSupportedInSandbox:(unsigned)arg1 subType:(unsigned)arg2 ;
+(unsigned)checkIfTrackSubtypeTypeForQuickTime:(unsigned)arg1 ;
+(unsigned)checkIfTrackTypeToSkipWhenNotSelfContained:(unsigned)arg1 ;
+(int)trackIndexForTrackID:(id)arg1 inArray:(id)arg2 ;
+(char)requiresModernization:(id)arg1 error:(id*)arg2 ;
-(NSURL *)sourceURL;
-(NSString *)outputFormat;
-(id)trackProcessArray;
-(void)setTrackProcessArray:(id)arg1 ;
-(id)modernizerProgress;
-(id)setupProgress;
-(id)transcodeProgress;
-(id)writeOutAssetProgress;
-(id)sourceReader;
-(id)destinationWriter;
-(id)internalOutputFormat;
-(void)setInternalOutputFormat:(id)arg1 ;
-(long long)durationInSeconds;
-(id)sourceVideoCodecType;
-(id)usableURL;
-(id)createTrackProcessArrayFromURL:(id)arg1 usableURL:(id)arg2 ;
-(void)checkModernizeDebug;
-(id)defaultTrackProcessList:(id)arg1 ;
-(char)processTrackWithCMASessions:(int)arg1 sourceURL:(id)arg2 mediaType:(unsigned)arg3 mediaTypeString:(id)arg4 error:(id*)arg5 ;
-(char)processTracks;
-(OpaqueRFExportSessionRef)createCMASession:(unsigned)arg1 mediaTypeString:(id)arg2 trackIndex:(int)arg3 sourceURL:(id)arg4 destURL:(id*)arg5 ;
-(char)runCMASession:(OpaqueRFExportSessionRef)arg1 destination:(id)arg2 parentTrackProgress:(id)arg3 ;
-(id)createUniqueLegacyFilePath:(id)arg1 extension:(id)arg2 inDirectory:(id)arg3 ;
-(int)countOfTranscodeUnits;
-(int)countOfPassthroughUnits;
-(void)setupTracksForAsset:(id)arg1 error:(id*)arg2 ;
-(id)grabSourceMetadata:(id)arg1 ;
-(unsigned)processTrackReferences;
-(unsigned)processTrackGroups;
-(id)getTemporaryURLFromNameInURL:(id)arg1 ;
-(id)flattenMovie:(id*)arg1 ;
-(char)sourceHasNoMPEGTracks;
-(char)setupAssetsForModernization:(id*)arg1 ;
-(char)processTracksBypassingFormatReader:(id)arg1 error:(id*)arg2 ;
-(char)runModernizer;
-(id)processForTrack:(id)arg1 ;
-(opaqueCMSampleBufferRef)getFirstBufferFromAssetTrack:(id)arg1 ;
-(void)adjustColorTagBufferAttachmentsInBuffer:(CVBufferRef)arg1 forSubType:(unsigned)arg2 ;
-(id)modernizerTrackForSourceTrackID:(int)arg1 ;
-(id)mediaTypeForSourceTrackID:(int)arg1 ;
-(id)assetWriterInputForSourceTrackID:(int)arg1 ;
-(unsigned)isRGBCodec:(unsigned)arg1 ;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
-(char)sourceNeedsModernization;
-(void)modernizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)genericVideoSettings;
-(id)genericVideoSettingsFromTrack:(id)arg1 fromSubType:(unsigned)arg2 toCodec:(id)arg3 ;
-(id)genericAudioSettingsFromTrack:(id)arg1 ;
-(id)grabTrackGroups:(id)arg1 ;
-(id)grabSourceTrackMetadata:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(long long)status;
-(void)setOutputFormat:(NSString *)arg1 ;
-(NSError *)error;
-(void)setStatus:(long long)arg1 ;
-(NSURL *)destinationURL;
@end
