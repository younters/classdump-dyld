/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVMediaSelectionTrackGroup : AVMediaSelectionGroup {

	AVAsset* _asset;
	NSDictionary* _dictionary;
	NSArray* _trackIDs;
	NSArray* _options;
	AVMediaSelectionOption* _defaultOption;

}
-(id)trackIDs;
-(BOOL)_isAlternateTrackGroup;
-(id)_defaultOption;
-(id)initWithAsset:(id)arg1 dictionary:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)dictionary;
-(id)options;
-(id)asset;
-(id)tracks;
@end
