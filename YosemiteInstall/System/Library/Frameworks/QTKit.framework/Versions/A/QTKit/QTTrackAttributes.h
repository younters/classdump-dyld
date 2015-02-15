/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QTTrackAttributes
@required
-(id)creationTime;
-(id)modificationTime;
-(long long)timeScale;
-(int)trackID;
-(id)href;
-(void)setHref:(id)arg1;
-(id)mediaType;
-(void)setMuted:(char)arg1;
-(id)chapterlist;
-(char)hasAudio;
-(float)balance;
-(float)bass;
-(float)gain;
-(float)treble;
-(void)setBalance:(float)arg1;
-(void)setBass:(float)arg1;
-(void)setGain:(float)arg1;
-(void)setTreble:(float)arg1;
-(char)muted;
-(char)hasApertureModeDimensions;
-(char)isDRMProtected;
-(char)isDRMAuthorized;
-(char)canDRMInteractWithUser;
-(void)setCanDRMInteractWithUser:(char)arg1;
-(CGRect*)scaledBounds;
-(id)mediaTypeInMedia;
-(id)mediaSubType;
-(SCD_Struct_QT16*)preloadRange;
-(void)setPreloadRange:(SCD_Struct_QT16)arg1;
-(char)usageInMovie;
-(char)usageInPoster;
-(char)usageInPreview;
-(void)setUsageInMovie:(char)arg1;
-(void)setUsageInPoster:(char)arg1;
-(void)setUsageInPreview:(char)arg1;
-(char)isVisual;
-(char)highQualityVideo;
-(char)deinterlaceVideo;
-(char)singleFieldVideo;
-(char)neverPurgeHint;
-(char)preloadHint;
-(void)setHighQualityVideo:(char)arg1;
-(void)setDeinterlaceVideo:(char)arg1;
-(void)setSingleFieldVideo:(char)arg1;
-(void)setNeverPurgeHint:(char)arg1;
-(void)setPreloadHint:(char)arg1;
-(char)isChapterTrack;
-(CGSize*)sourceDimensions;
-(CGPoint*)sourcePosition;
-(id)formatSummary;
-(void)setScaledBounds:(CGRect)arg1;
-(void)setSourceDimensions:(CGSize)arg1;
-(RGBColor*)operationColor;
-(void)setOperationColor:(RGBColor)arg1;
-(void)setMatrix:(MatrixRecord)arg1;
-(void)setChapterlist:(id)arg1;
-(void)setSourcePosition:(CGPoint)arg1;
-(long long)transferMode;
-(void)setTransferMode:(long long)arg1;
-(CGRect*)bounds;
-(void)setPosition:(CGPoint)arg1;
-(void)setBounds:(CGRect)arg1;
-(short)layer;
-(CGPoint*)position;
-(void)setLayer:(short)arg1;
-(void)setEnabled:(char)arg1;
-(char)isEnabled;
-(MatrixRecord*)matrix;
-(id)displayName;
-(void)setDisplayName:(id)arg1;
-(id)mask;
-(SCD_Struct_QT16*)range;
-(long long)language;
-(void)setVolume:(float)arg1;
-(float)volume;
-(void)setMask:(id)arg1;
-(void)setLanguage:(long long)arg1;
-(void)setRange:(SCD_Struct_QT16)arg1;
-(CGSize*)dimensions;
-(void)setDimensions:(CGSize)arg1;

@end
