/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Print.framework/Versions/A/Plugins/PMBrowser.framework/PMBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSConditionLock;

@interface PrinterConfigure : NSObject {

	NSString* _uri;
	NSString* _product;
	NSString* _location;
	char _ADOIsBinaryOK;
	NSConditionLock* _conditionLock;
	void* _context;
	id _delegate;

}
+(id)PrinterConfigureWithPrinterURI:(id)arg1 ;
-(id)initWithPrinterURI:(id)arg1 ;
-(void)setConditionLock:(id)arg1 ;
-(void)stopConfigure;
-(void)SetADOIsBinaryOK:(char)arg1 ;
-(char)ADOIsBinaryOK;
-(void)autoSelectedThread:(id)arg1 ;
-(id)conditionLock;
-(void)startConfigure;
-(void)autoSelectEvent:(id)arg1 ;
-(id)ppds;
-(id)product;
-(void)setURI:(id)arg1 ;
-(void)setProduct:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void*)context;
-(id)delegate;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(id)uri;
-(void)setContext:(void*)arg1 ;
@end
