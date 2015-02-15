/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/avconvert
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <avconvert/avconvert-Structs.h>
@class NSString, NSArray, NSNumber, NSURL;

@interface Morpho : NSObject {

	NSString* _programName;
	NSString* _preset;
	NSString* _sourcePath;
	NSString* _destinationPath;
	NSString* _metadataPath;
	NSArray* _trackSpecificationList;
	NSArray* _omitTrackList;
	NSArray* _activeTrackList;
	NSNumber* _progress;
	NSNumber* _completionStatus;
	char _cantParse;
	char _showLeaks;
	char _verbose;
	char _quiet;
	char _showProgress;
	char _noExport;
	char _allTracksHaveSource;
	char _exportFailed;
	char _exportComplete;
	char _notAAC;
	OpaqueRFExportRef _cmaExportRef;
	SCD_Struct_Mo2 _timeRange;
	NSURL* _defaultSourceURL;
	OpaqueFigFormatReaderRef _defaultSourceReader;

}

@property (nonatomic,retain) NSString * programName;                          //@synthesize programName=_programName - In the implementation block
@property (nonatomic,retain) NSString * preset;                               //@synthesize preset=_preset - In the implementation block
@property (nonatomic,retain) NSString * sourcePath;                           //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;                      //@synthesize destinationPath=_destinationPath - In the implementation block
@property (nonatomic,retain) NSString * metadataPath;                         //@synthesize metadataPath=_metadataPath - In the implementation block
@property (nonatomic,retain) NSArray * trackSpecificationList;                //@synthesize trackSpecificationList=_trackSpecificationList - In the implementation block
@property (nonatomic,retain) NSArray * omitTrackList;                         //@synthesize omitTrackList=_omitTrackList - In the implementation block
@property (nonatomic,retain) NSArray * activeTrackList;                       //@synthesize activeTrackList=_activeTrackList - In the implementation block
@property (nonatomic,retain) NSNumber * progress;                             //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSNumber * completionStatus;                     //@synthesize completionStatus=_completionStatus - In the implementation block
@property (nonatomic,retain) NSURL * defaultSourceURL;                        //@synthesize defaultSourceURL=_defaultSourceURL - In the implementation block
@property (assign) OpaqueFigFormatReaderRef defaultSourceReader;              //@synthesize defaultSourceReader=_defaultSourceReader - In the implementation block
@property (assign) char cantParse;                                            //@synthesize cantParse=_cantParse - In the implementation block
@property (assign) char showLeaks;                                            //@synthesize showLeaks=_showLeaks - In the implementation block
@property (assign) char verbose;                                              //@synthesize verbose=_verbose - In the implementation block
@property (assign) char quiet;                                                //@synthesize quiet=_quiet - In the implementation block
@property (assign) char showProgress;                                         //@synthesize showProgress=_showProgress - In the implementation block
@property (assign) char noExport;                                             //@synthesize noExport=_noExport - In the implementation block
@property (assign) char exportFailed;                                         //@synthesize exportFailed=_exportFailed - In the implementation block
@property (assign) char exportComplete;                                       //@synthesize exportComplete=_exportComplete - In the implementation block
@property (assign) char notAAC;                                               //@synthesize notAAC=_notAAC - In the implementation block
@property (assign) OpaqueRFExportRef cmaExportRef;                            //@synthesize cmaExportRef=_cmaExportRef - In the implementation block
@property (assign) SCD_Struct_Mo2 timeRange;                                  //@synthesize timeRange=_timeRange - In the implementation block
+(void)showPresets;
+(id)trackTypeNames;
+(unsigned)_cmaMediaTypeFromTrackType:(id)arg1 ;
+(id)_templateNameForIdentifier:(id)arg1 ;
+(id)_presetNameForIdentifier:(id)arg1 ;
+(id)_portNameFromTrackType:(id)arg1 ;
+(id)audioSettingsProperties;
+(id)videoSettingsProperties;
+(id)_trackTypeFromCMMediaType:(unsigned)arg1 trackReader:(OpaqueFigTrackReaderRef)arg2 ;
+(id)exportTrackTypes;
+(id)mediaTypeForTrackName:(id)arg1 ;
+(id)allExportPresets;
-(id)initWithArgs:(int)arg1 argv:(const char**)arg2 environ:(const char**)arg3 ;
-(void)setProgramName:(NSString *)arg1 ;
-(char)cantParse;
-(void)printHelp;
-(void)setQuiet:(char)arg1 ;
-(void)setNoExport:(char)arg1 ;
-(void)setMetadataPath:(NSString *)arg1 ;
-(void)setPreset:(NSString *)arg1 ;
-(void)setCantParse:(char)arg1 ;
-(id)parseTrackType:(const char*)arg1 ;
-(id)parseTrackSpecificationForType:(id)arg1 specList:(id)arg2 specifier:(const char*)arg3 argcref:(int*)arg4 argvref:(const char**)arg5 ;
-(id)parseAudioTrackSpecification:(const char*)arg1 specList:(id)arg2 argcref:(int*)arg3 argvref:(const char**)arg4 ;
-(id)parseVideoTrackSpecification:(const char*)arg1 specList:(id)arg2 argcref:(int*)arg3 argvref:(const char**)arg4 ;
-(void)_listTracksForPath:(id)arg1 ;
-(void)setTrackSpecificationList:(NSArray *)arg1 ;
-(char)allTracksHaveSource;
-(void)setOmitTrackList:(NSArray *)arg1 ;
-(void)setExportFailed:(char)arg1 ;
-(void)setExportComplete:(char)arg1 ;
-(void)printUsage;
-(NSArray *)trackSpecificationList;
-(id)_requireTrackSpecificationForType:(id)arg1 withKey:(id)arg2 specList:(id)arg3 ;
-(NSString *)preset;
-(void)printUsageForTrackTypeList:(id)arg1 preset:(id)arg2 ;
-(void)printUsageForTrackType:(id)arg1 preset:(id)arg2 ;
-(void)printUsageForAudioTrackTypeWithPreset:(id)arg1 ;
-(void)printUsageForVideoTrackTypeWithPreset:(id)arg1 ;
-(NSString *)metadataPath;
-(OpaqueRFExportSessionRef)_createCMASession;
-(char)noExport;
-(char)waitForSession:(OpaqueRFExportSessionRef)arg1 ;
-(char)exportComplete;
-(char)quiet;
-(OpaqueRFExportRef)cmaExportRef;
-(void)setCmaExportRef:(OpaqueRFExportRef)arg1 ;
-(OpaqueFigFormatReaderRef)_getFigFormatReaderForSourceFile:(id)arg1 ;
-(OpaqueRFExportRef)_createCMAExportRefIfNeeded;
-(void)setDefaultSourceURL:(NSURL *)arg1 ;
-(void)setDefaultSourceReader:(OpaqueFigFormatReaderRef)arg1 ;
-(void)_addAllUsableTracks;
-(void)_applyTrackSpecifications:(id*)arg1 ;
-(void)_addMetadata:(OpaqueFigFormatReaderRef)arg1 ;
-(void)_showCurrentSettings:(id)arg1 requestedSettings:(id)arg2 showDiffsOnly:(char)arg3 ;
-(NSURL *)defaultSourceURL;
-(OpaqueFigFormatReaderRef)defaultSourceReader;
-(id)_getArrayOfTrackIndexesOfType:(id)arg1 formatReader:(OpaqueFigFormatReaderRef)arg2 enabledOnly:(char)arg3 ;
-(NSArray *)omitTrackList;
-(id)_getTrackSpecificationForType:(id)arg1 ;
-(char)_addTrack:(id)arg1 withSpecification:(id)arg2 ;
-(void)setActiveTrackList:(NSArray *)arg1 ;
-(void)_applyAudioTrackSpecifiers:(id)arg1 requestsDict:(id)arg2 ;
-(void)_applyVideoTrackSpecifiers:(id)arg1 requestsDict:(id)arg2 ;
-(NSArray *)activeTrackList;
-(void)_showAudioSettings:(id)arg1 changedFrom:(id)arg2 onlyDifferences:(char)arg3 ;
-(void)_showVideoSettings:(id)arg1 changedFrom:(id)arg2 onlyDifferences:(char)arg3 ;
-(id)_getValueString:(id)arg1 withType:(id)arg2 ;
-(id)_getSettingsString:(id)arg1 withProperties:(id)arg2 ;
-(id)_getRequestedSettingsString:(id)arg1 withProperties:(id)arg2 ;
-(id)_mergeRequestSettings:(id)arg1 ;
-(id)_getHiddenSettingsString:(id)arg1 withProperties:(id)arg2 ;
-(id)_getUndefinedSettingsString:(id)arg1 withKey:(id)arg2 ;
-(NSString *)programName;
-(char)showLeaks;
-(void)setShowLeaks:(char)arg1 ;
-(char)exportFailed;
-(char)notAAC;
-(void)setNotAAC:(char)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(void)setSourcePath:(NSString *)arg1 ;
-(NSString *)destinationPath;
-(void)setShowProgress:(char)arg1 ;
-(void)_removeListeners;
-(void)_addListeners;
-(char)verbose;
-(void)setVerbose:(char)arg1 ;
-(char)showProgress;
-(NSNumber *)completionStatus;
-(void)setCompletionStatus:(NSNumber *)arg1 ;
-(int)run;
-(NSNumber *)progress;
-(void)setProgress:(NSNumber *)arg1 ;
-(void)setTimeRange:(SCD_Struct_Mo2)arg1 ;
-(SCD_Struct_Mo2)timeRange;
-(NSString *)sourcePath;
@end
