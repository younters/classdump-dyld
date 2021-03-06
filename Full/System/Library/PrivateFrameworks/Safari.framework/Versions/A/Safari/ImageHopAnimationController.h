/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSAnimationDelegate.h>

@protocol ImageHopAnimationDelegate;
@class NSWindow, NSObject, NSImage, NSString;

@interface ImageHopAnimationController : NSObject <NSAnimationDelegate> {

	NSWindow* _windowToAnimate;
	NSObject*<ImageHopAnimationDelegate> _delegate;
	NSImage* _hopImage;
	CGSize _initialImageSize;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (assign,nonatomic,__weak) NSObject*<ImageHopAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSImage * hopImage;                                                //@synthesize hopImage=_hopImage - In the implementation block
@property (assign,nonatomic) CGSize initialImageSize;                                           //@synthesize initialImageSize=_initialImageSize - In the implementation block
@property (readonly) CGPoint startPoint;                                                        //@synthesize startPoint=_startPoint - In the implementation block
@property (readonly) CGPoint endPoint;                                                          //@synthesize endPoint=_endPoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultInitialImageSize;
+(id)defaultImage;
-(void)setHopImage:(NSImage *)arg1 ;
-(void)setInitialImageSize:(CGSize)arg1 ;
-(void)startAnimationFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(CGSize)initialImageSize;
-(NSImage *)hopImage;
-(id)windowToAnimate;
-(CGPoint)endPoint;
-(id)init;
-(void)setDelegate:(NSObject*<ImageHopAnimationDelegate>)arg1 ;
-(NSObject*<ImageHopAnimationDelegate>)delegate;
-(CGPoint)startPoint;
@end

