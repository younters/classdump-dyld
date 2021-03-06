/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:08 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/AVAssetResourceLoaderDelegate.h>

@class NSString;

@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	MediaPlayerPrivateAVFoundationObjC* m_callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
-(char)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
-(char)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2 ;
-(void)setCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
@end

