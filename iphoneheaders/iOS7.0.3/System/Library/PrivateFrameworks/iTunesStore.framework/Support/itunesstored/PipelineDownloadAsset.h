/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/DownloadAsset.h>

@class NSString, NSURL;

@interface PipelineDownloadAsset : DownloadAsset

@property (assign,nonatomic) long long assetSize; 
@property (nonatomic,readonly) NSString * assetType; 
@property (getter=isDRMFree,nonatomic,readonly) BOOL DRMFree; 
@property (getter=isExternalAsset,nonatomic,readonly) BOOL externalAsset; 
@property (nonatomic,readonly) NSString * localPath; 
@property (nonatomic,readonly) long long uncompressedSize; 
@property (nonatomic,readonly) NSURL * URL; 
@property (getter=isZipStreamable,nonatomic,readonly) BOOL zipStreamable; 
+(id)defaultProperties;
-(long long)assetSize;
-(BOOL)isZipStreamable;
-(BOOL)isExternalAsset;
-(void)setAssetSize:(long long)arg1 ;
-(long long)uncompressedSize;
-(id)URL;
-(id)localPath;
-(id)assetType;
-(BOOL)isDRMFree;
@end
