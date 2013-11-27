/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>
#import <MobileSlideShow/PLSTransportCoding.h>

@class NSString;

@interface PLSAssetProperties : NSObject <NSCoding, PLSTransportCoding> {

	id _imageProperties;
	id _fileSystemProperties;
	NSString* _fileName;

}

@property (nonatomic,retain) id imageProperties;                   //@synthesize imageProperties=_imageProperties - In the implementation block
@property (nonatomic,retain) id fileSystemProperties;              //@synthesize fileSystemProperties=_fileSystemProperties - In the implementation block
@property (nonatomic,retain) NSString * fileName;                  //@synthesize fileName=_fileName - In the implementation block
+(id)assetProperties;
-(void)setFileSystemProperties:(id)arg1 ;
-(void)setImageProperties:(id)arg1 ;
-(id)initFromPropertyList:(id)arg1 ;
-(id)fileSystemProperties;
-(BOOL)readPropertiesFromAssetURL:(id)arg1 error:(id*)arg2 ;
-(id)propertyList;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)fileName;
-(id)imageProperties;
-(void)setFileName:(id)arg1 ;
@end
