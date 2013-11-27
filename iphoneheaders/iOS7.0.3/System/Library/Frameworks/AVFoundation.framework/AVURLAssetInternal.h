/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class AVAssetInspectorLoader, NSURL, NSArray, NSString, AVAssetResourceLoader, NSObject;

@interface AVURLAssetInternal : NSObject {

	AVAssetInspectorLoader* loader;
	NSURL* URL;
	NSArray* tracks;
	NSArray* chapterGroupInfo;
	NSString* anchorChapterType;
	AVAssetResourceLoader* resourceLoader;
	long makeOneResourceLoaderOnly;
	NSObject<OS_dispatch_queue>* tracksAccessQueue;

}
@end
