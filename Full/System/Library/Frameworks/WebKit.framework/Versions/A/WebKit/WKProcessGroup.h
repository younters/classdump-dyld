/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKProcessGroup : NSObject {

	RefPtr<WebKit::WebContext>* _context;
	WeakObjCPtr<id<WKProcessGroupDelegate> > _delegate;

}

@property (readonly) OpaqueWKContextRef _contextRef; 
@property (assign) id<WKProcessGroupDelegate> delegate; 
-(void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(id)initWithInjectedBundleURL:(id)arg1 ;
-(OpaqueWKContextRef)_contextRef;
-(id)init;
-(void)setDelegate:(id<WKProcessGroupDelegate>)arg1 ;
-(id<WKProcessGroupDelegate>)delegate;
@end
