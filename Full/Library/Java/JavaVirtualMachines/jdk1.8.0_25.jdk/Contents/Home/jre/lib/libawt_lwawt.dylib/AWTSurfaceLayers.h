/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Java/JavaVirtualMachines/jdk1.8.0_25.jdk/Contents/Home/jre/lib/libawt_lwawt.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libawt_lwawt.dylib/libawt_lwawt.dylib-Structs.h>
#import <libawt_lwawt.dylib/JAWT_SurfaceLayers.h>

@class CALayer;

@interface AWTSurfaceLayers : NSObject <JAWT_SurfaceLayers> {

	CALayer* layer;
	CALayer* windowLayer;

}

@property (retain) CALayer * layer; 
@property (readonly) CALayer * windowLayer; 
+(void)repaintLayersRecursively:(id)arg1 ;
-(id)initWithWindowLayer:(id)arg1 ;
-(CALayer *)windowLayer;
-(void)setBounds:(CGRect)arg1 ;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
@end
