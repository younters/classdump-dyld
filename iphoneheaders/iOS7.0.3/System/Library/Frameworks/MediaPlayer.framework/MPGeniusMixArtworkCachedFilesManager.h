/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPGeniusMixArtworkCachedFilesManager : NSObject {

	NSObject<OS_dispatch_queue>* _cleanupQueue;

}
+(id)sharedInstance;
-(void)_mediaLibraryDisplayValuesWillChangeNotification:(id)arg1 ;
-(void)cleanupIfNecessaryWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end
