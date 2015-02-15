/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, WKFrameInfo, NSURLRequest;

@interface WKNavigationAction : NSObject {

	RetainPtr<WKFrameInfo>* _sourceFrame;
	RetainPtr<WKFrameInfo>* _targetFrame;
	RetainPtr<NSURLRequest>* _request;
	RetainPtr<NSURL>* _originalURL;
	char _userInitiated;
	char _canHandleRequest;
	long long _navigationType;
	unsigned long long _modifierFlags;
	long long _buttonNumber;

}

@property (nonatomic,readonly) NSURL * _originalURL; 
@property (getter=_isUserInitiated,nonatomic,readonly) char _userInitiated; 
@property (nonatomic,readonly) char _canHandleRequest; 
@property (nonatomic,copy) WKFrameInfo * sourceFrame; 
@property (nonatomic,copy) WKFrameInfo * targetFrame; 
@property (nonatomic,readonly) long long navigationType;                                 //@synthesize navigationType=_navigationType - In the implementation block
@property (nonatomic,copy) NSURLRequest * request; 
@property (nonatomic,readonly) unsigned long long modifierFlags;                         //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,readonly) long long buttonNumber;                                   //@synthesize buttonNumber=_buttonNumber - In the implementation block
@property (setter=_setOriginalURL:,nonatomic,copy) NSURL * _originalURL; 
-(NSURLRequest *)request;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(id)_initWithNavigationActionData:(const NavigationActionData*)arg1 ;
-(void)_setOriginalURL:(id)arg1 ;
-(NSURL *)_originalURL;
-(long long)navigationType;
-(char)_canHandleRequest;
-(char)_isUserInitiated;
-(id)description;
-(WKFrameInfo *)sourceFrame;
-(void)setSourceFrame:(WKFrameInfo *)arg1 ;
-(unsigned long long)modifierFlags;
-(long long)buttonNumber;
-(WKFrameInfo *)targetFrame;
-(void)setTargetFrame:(WKFrameInfo *)arg1 ;
@end
