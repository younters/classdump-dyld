/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLRootLibraryNavigationController;
#import <MobileSlideShow/MobileSlideShow-Structs.h>
@class NSURL, ;

@interface PhotosURLNavigationRequest : NSObject {

	/*^block*/ id _navigationCompletionHandler;
	NSURL* _destinationURL;
	<PLRootLibraryNavigationController>* _rootController;
	int _state;

}

@property (nonatomic,readonly) NSURL * destinationURL;                                            //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) <PLRootLibraryNavigationController> * rootController;              //@synthesize rootController=_rootController - In the implementation block
@property (assign,nonatomic) int state;                                                           //@synthesize state=_state - In the implementation block
-(id)initWithDestinationURL:(id)arg1 rootController:(id)arg2 ;
-(void)cancelPendingNavigation;
-(void)navigateAllowingRetry:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(NSObject*)_albumForKnownName:(id)arg1 orUUID:(id)arg2 requestIsValid:(BOOL*)arg3 ;
-(void)_schedulePendingNavigation;
-(void)_finishNavigationSuccessfully:(BOOL)arg1 ;
-(void)_navigateAllowingRetry:(BOOL)arg1 ;
-(void)_contextDidFinishMerge:(id)arg1 ;
-(void)_processPendingNavigation;
-(id)destinationURL;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)rootController;
@end
