/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <AVFoundation/NSCopying.h>

@class NSArray, NSDictionary, AVMetadataItem, NSString, NSData;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>

@property (nonatomic,readonly) SCD_Struct_CM5 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) float preferredSoundCheckVolumeNormalization; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) char providesPreciseDurationAndTiming; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,readonly) NSArray * trackIDs; 
@property (nonatomic,readonly) NSArray * alternateTrackGroups; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,readonly) NSArray * mediaSelectionGroups; 
@property (nonatomic,readonly) AVMetadataItem * creationDate; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (getter=isPlayable,nonatomic,readonly) char playable; 
@property (getter=isExportable,nonatomic,readonly) char exportable; 
@property (getter=isReadable,nonatomic,readonly) char readable; 
@property (getter=isComposable,nonatomic,readonly) char composable; 
@property (nonatomic,readonly) NSData * SHA1Digest; 
@property (nonatomic,readonly) char canContainMovieFragments; 
@property (nonatomic,readonly) char containsMovieFragments; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) NSString * identifyingTagClass; 
-(NSString *)lyrics;
-(long long)trackCount;
-(float)preferredRate;
-(float)preferredVolume;
-(NSArray *)commonMetadata;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(float)preferredSoundCheckVolumeNormalization;
-(int)naturalTimeScale;
-(char)providesPreciseDurationAndTiming;
-(NSArray *)alternateTrackGroups;
-(NSArray *)trackIDs;
-(NSArray *)mediaSelectionGroups;
-(NSDictionary *)trackReferences;
-(NSArray *)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(char)hasProtectedContent;
-(char)isPlayable;
-(char)isExportable;
-(char)isReadable;
-(char)isComposable;
-(char)canContainMovieFragments;
-(char)containsMovieFragments;
-(NSString *)identifyingTagClass;
-(NSData *)SHA1Digest;
-(id)propertyListForProxy;
-(SCD_Struct_CM5)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AVMetadataItem *)creationDate;
@end
