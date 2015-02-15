/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:56 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/iTunes.app/Contents/MacOS/iTunes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunes/iTunes-Structs.h>
#import <iTunes/ITViewNSViewWrapper.h>

@class NSURL, NSDictionary;

@interface WKVideoViewHost : ITViewNSViewWrapper {

	NSURL* mURL;
	NSDictionary* mObjectTagAttribs;
	shared_ptr<WKMediaLocationHandler>* mLocationHandler;
	BOOL mDidFirstTimeSetup;

}
+(void)stopMoviePlaybackForContainingView:(shared_ptr<ITView>*)arg1 ;
+(BOOL)processCommandForContainingView:(shared_ptr<ITView>*)arg1 command:(const ITCommandInfo*)arg2 ;
+(BOOL)adjustMenuItemForContainingView:(shared_ptr<ITView>*)arg1 info:(JRMenuItemAdjustorInfo*)arg2 ;
-(void)updateRootView;
-(void)releaseClientView;
-(void)doFirstTimeSetup;
-(void)_stopMoviePlayback;
-(BOOL)processCommand:(const ITCommandInfo*)arg1 ;
-(BOOL)adjustMenuItem:(JRMenuItemAdjustorInfo*)arg1 ;
-(id)initWithContainingITView:(shared_ptr<ITView>*)arg1 andNSView:(id)arg2 andBounds:(CGRect)arg3 andURL:(id)arg4 andParams:(id)arg5 ;
-(void)dealloc;
@end
