/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKSlideshowDataSourceHandler, NSString, NSURL;

@interface IKSlideshowElement : NSObject {

	IKSlideshowDataSourceHandler* _dataSourceHandler;
	unsigned long long _dataSourceIndex;
	unsigned long long _subIndex;
	IKSlideshowElement* _prev;
	IKSlideshowElement* _next;
	NSString* _name;
	NSString* _utType;
	NSURL* _cachedURL;
	double _transitionTime;
	int _direction;
	char _loading;
	char _displayAfterLoad;
	char _thumbnailLoaded;
	char _dataSourceItemIsCached;
	char _didHandleSiblings;
	CGSize _thumbnailSize;
	CGImageRef _thumbnail;
	char _imageLoaded;
	char _markedForExport;
	char _preventZoom;
	char _loadDidFail;

}

@property (assign) IKSlideshowElement * next;                       //@synthesize next=_next - In the implementation block
@property (assign) IKSlideshowElement * prev;                       //@synthesize prev=_prev - In the implementation block
@property (assign) unsigned long long dataSourceIndex;              //@synthesize dataSourceIndex=_dataSourceIndex - In the implementation block
@property (assign) unsigned long long subIndex;                     //@synthesize subIndex=_subIndex - In the implementation block
@property (assign) double transitionTime;                           //@synthesize transitionTime=_transitionTime - In the implementation block
@property (assign) int direction;                                   //@synthesize direction=_direction - In the implementation block
@property (assign) char dataSourceItemIsCached;                     //@synthesize dataSourceItemIsCached=_dataSourceItemIsCached - In the implementation block
@property (assign) char markedForExport;                            //@synthesize markedForExport=_markedForExport - In the implementation block
@property (assign) char preventZoom;                                //@synthesize preventZoom=_preventZoom - In the implementation block
@property (assign) char loadDidFail;                                //@synthesize loadDidFail=_loadDidFail - In the implementation block
@property (assign) char imageLoaded;                                //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (assign) CGSize thumbnailSize;                            //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign) char thumbnailLoaded;                            //@synthesize thumbnailLoaded=_thumbnailLoaded - In the implementation block
@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (copy) NSString * utType;                                 //@synthesize utType=_utType - In the implementation block
@property (copy) NSURL * cachedURL;                                 //@synthesize cachedURL=_cachedURL - In the implementation block
+(id)questionMarkURL;
+(CGImageRef)questionMarkThumbnail;
-(IKSlideshowElement *)next;
-(void)setNext:(IKSlideshowElement *)arg1 ;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(void)load:(char)arg1 ;
-(void)unload;
-(unsigned long long)dataSourceIndex;
-(CGSize)thumbnailSize;
-(void)setDataSourceIndex:(unsigned long long)arg1 ;
-(NSString *)utType;
-(void)removeFromList;
-(void)insertAfter:(id)arg1 ;
-(id)initWithDataSourceHandler:(id)arg1 index:(unsigned long long)arg2 subIndex:(unsigned long long)arg3 ;
-(IKSlideshowElement *)prev;
-(double)transitionTime;
-(unsigned long long)subIndex;
-(void)setTransitionTime:(double)arg1 ;
-(char)markedForExport;
-(void)setMarkedForExport:(char)arg1 ;
-(id)debugState;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(char)imageLoaded;
-(char)thumbnailLoaded;
-(char)dataSourceItemIsCached;
-(void)setImageLoaded:(char)arg1 ;
-(void)setThumbnailLoaded:(char)arg1 ;
-(void)setDataSourceItemIsCached:(char)arg1 ;
-(void)setPrev:(IKSlideshowElement *)arg1 ;
-(char)loadDidFail;
-(void)setPreventZoom:(char)arg1 ;
-(void)setLoadDidFail:(char)arg1 ;
-(void)loadThumbnail:(char)arg1 currentCount:(unsigned long long)arg2 ;
-(void)thumbnailLoadingFailed;
-(void)setSubIndex:(unsigned long long)arg1 ;
-(void)setUtType:(NSString *)arg1 ;
-(char)preventZoom;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setThumbnail:(CGImageRef)arg1 ;
-(CGImageRef)thumbnail;
-(NSURL *)cachedURL;
-(void)setCachedURL:(NSURL *)arg1 ;
-(void)cleanup;
@end
