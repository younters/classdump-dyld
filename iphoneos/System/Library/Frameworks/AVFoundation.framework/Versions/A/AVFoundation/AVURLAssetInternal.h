/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetInspectorLoader, NSURL, NSArray, AVAssetResourceLoader, AVAssetCache;

@interface AVURLAssetInternal : NSObject {

	AVAssetInspectorLoader* loader;
	NSURL* URL;
	NSArray* tracks;
	AVAssetResourceLoader* resourceLoader;
	long long makeOneResourceLoaderOnly;
	dispatch_queue_sRef tracksAccessQueue;
	AVAssetCache* assetCache;
	char shouldMatchDataInCacheByURLPathComponentOnly;
	char shouldMatchDataInCacheByURLWithoutQueryComponent;
	char shouldOptimizeAccessForLinearMoviePlayback;
	char shouldPrepareToOptimizeForExclusivePlayback;
	NSURL* downloadDestinationURL;
	unsigned long long referenceRestrictions;

}
@end
