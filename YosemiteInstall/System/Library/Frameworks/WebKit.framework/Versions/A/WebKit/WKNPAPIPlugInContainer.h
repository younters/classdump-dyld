/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKNPAPIPlugInContainer.h>

@protocol WKNPAPIPlugInContainer <NSObject>
@required
-(char)openPlugInPreferencePane;

@end


@class NSString;

@interface WKNPAPIPlugInContainer : NSObject <WKNPAPIPlugInContainer> {

	NetscapePlugin* _plugin;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithNetscapePlugin:(NetscapePlugin*)arg1 ;
-(char)openPlugInPreferencePane;
-(void)_invalidate;
@end
