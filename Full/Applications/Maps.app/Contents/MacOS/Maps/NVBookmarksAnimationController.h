/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/NSAnimationDelegate.h>

@protocol NVBookmarksAnimationDelegate, NSAnimationDelegate;
@class NSWindow, NSImage, NSAnimation, NSString;

@interface NVBookmarksAnimationController : NSObject <NSAnimationDelegate> {

	NSWindow* _windowToAnimate;
	char _firstDone;
	char _secondDone;
	char _addShadow;
	char _shouldGrow;
	float _objectOpacity;
	float _delayBeforeSecondAnimation;
	id<NVBookmarksAnimationDelegate> _delegate;
	NSImage* _animatedImage;
	NSWindow* _parentWindow;
	NSAnimation* _firstAnimation;
	NSAnimation* _secondAnimation;
	id<NSAnimationDelegate> _strongSelf;

}

@property (assign,nonatomic,__weak) id<NVBookmarksAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSImage * animatedImage;                                       //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,readonly) NSWindow * windowToAnimate; 
@property (assign,nonatomic,__weak) NSWindow * parentWindow;                                //@synthesize parentWindow=_parentWindow - In the implementation block
@property (nonatomic,retain) NSAnimation * firstAnimation;                                  //@synthesize firstAnimation=_firstAnimation - In the implementation block
@property (nonatomic,retain) NSAnimation * secondAnimation;                                 //@synthesize secondAnimation=_secondAnimation - In the implementation block
@property (nonatomic,retain) id<NSAnimationDelegate> strongSelf;                            //@synthesize strongSelf=_strongSelf - In the implementation block
@property (assign,nonatomic) float objectOpacity;                                           //@synthesize objectOpacity=_objectOpacity - In the implementation block
@property (assign,nonatomic) char addShadow;                                                //@synthesize addShadow=_addShadow - In the implementation block
@property (assign,nonatomic) float delayBeforeSecondAnimation;                              //@synthesize delayBeforeSecondAnimation=_delayBeforeSecondAnimation - In the implementation block
@property (assign,nonatomic) char shouldGrow;                                               //@synthesize shouldGrow=_shouldGrow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldGrow;
-(NSImage *)animatedImage;
-(char)addShadow;
-(float)objectOpacity;
-(NSAnimation *)firstAnimation;
-(float)delayBeforeSecondAnimation;
-(NSAnimation *)secondAnimation;
-(void)setStrongSelf:(id<NSAnimationDelegate>)arg1 ;
-(void)setDelayBeforeSecondAnimation:(float)arg1 ;
-(id)_makeFirstAnimationWithClass:(Class)arg1 duration:(double)arg2 ;
-(void)setFirstAnimation:(NSAnimation *)arg1 ;
-(id)_makeSecondAnimationWithClass:(Class)arg1 duration:(double)arg2 ;
-(void)setSecondAnimation:(NSAnimation *)arg1 ;
-(id)imageFromView:(id)arg1 ;
-(void)setAddShadow:(char)arg1 ;
-(void)setObjectOpacity:(float)arg1 ;
-(id)imageFromPopover:(id)arg1 ;
-(void)setAnimatedImage:(NSImage *)arg1 ;
-(id)imageFromCalloutView:(id)arg1 ;
-(void)setShouldGrow:(char)arg1 ;
-(void)startBookmarkAnimation:(id)arg1 popover:(id)arg2 delegate:(id)arg3 ;
-(void)startBookmarkAnimation:(id)arg1 callout:(id)arg2 delegate:(id)arg3 ;
-(void)startRouteBookmarkAnimation:(id)arg1 delegate:(id)arg2 ;
-(void)startPushToPhoneAnimation:(id)arg1 delegate:(id)arg2 ;
-(id<NSAnimationDelegate>)strongSelf;
-(void)startAnimationFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(NSWindow *)windowToAnimate;
-(id)init;
-(void)setDelegate:(id<NVBookmarksAnimationDelegate>)arg1 ;
-(id<NVBookmarksAnimationDelegate>)delegate;
-(void)animation:(id)arg1 didReachProgressMark:(float)arg2 ;
-(void)animationDidStop:(id)arg1 ;
-(void)animationDidEnd:(id)arg1 ;
-(NSWindow *)parentWindow;
-(void)setParentWindow:(NSWindow *)arg1 ;
@end
