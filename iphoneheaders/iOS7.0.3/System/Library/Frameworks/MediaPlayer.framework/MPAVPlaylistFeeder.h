/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MPAVPlaylistFeeder <NSObject>
@property (nonatomic,readonly) unsigned initialPlaybackQueueDepth; 
@property (nonatomic,readonly) unsigned itemCount; 
@property (nonatomic,readonly) unsigned nonRepeatingItemCount; 
@required
-(unsigned)nonRepeatingItemCount;
-(unsigned)itemCount;
-(void)assumeOwnershipOfItems:(id)arg1;
-(BOOL)hasItemForIndex:(unsigned)arg1;
-(id)itemForIndex:(unsigned)arg1;
-(BOOL)shouldReloadForChangeFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
-(unsigned)initialPlaybackQueueDepth;
@end
