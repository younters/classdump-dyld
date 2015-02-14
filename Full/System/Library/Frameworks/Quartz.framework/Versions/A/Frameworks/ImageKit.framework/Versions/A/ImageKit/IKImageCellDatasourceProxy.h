/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageProxy.h>

@class NSString;

@interface IKImageCellDatasourceProxy : NSObject <IKImageProxy> {

	id _proxySource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)proxyImage;
-(id)proxyReferenceInstance;
-(int)proxyDataFormat;
-(id)thumbnailWithSize:(double)arg1 antialiased:(char)arg2 quality:(int)arg3 ;
-(CGSize)proxySize;
-(char)isVectorial;
-(id)proxyData;
-(char)supportConcurrentLoading;
-(char)requiresQuicklook;
-(id)copyQuicklookOptions;
-(id)copyQuicklookURL;
-(id)proxySource;
-(void)setProxySource:(id)arg1 ;
-(id)_datasourceImageRepresentationType;
-(id)_datasourceImageRepresentation:(char)arg1 ;
-(void)dealloc;
@end
