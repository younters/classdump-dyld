/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface DOCKFolderTileCacheEntry : NSObject {

	id _layerContents;
	unsigned long long _size;
	char _isPreview;

}

@property (nonatomic,retain) id layerContents;                     //@synthesize layerContents=_layerContents - In the implementation block
@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) char isPreview;                       //@synthesize isPreview=_isPreview - In the implementation block
-(id)initWithLayerContents:(id)arg1 size:(unsigned long long)arg2 isPreview:(char)arg3 ;
-(void)setLayerContents:(id)arg1 ;
-(void)setIsPreview:(char)arg1 ;
-(char)isPreview;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(id)layerContents;
@end
