/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:27:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Security/tokend/uiplugins/PIVViewerPlugin.bundle/PIVViewerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SecurityInterface/SFTokenHIPlugin.h>
#import <PIVViewerPlugin/SFTokenHIPlugin.h>

@class PIVViewerController, PIVTransform, NSDictionary;

@interface PIVViewerPlugin : SFTokenHIPlugin <SFTokenHIPlugin> {

	PIVViewerController* mPIVViewerController;
	PIVTransform* mPIVTransform;
	NSDictionary* mTestDictionary;
	/*function pointer*/void* mGetDataCallback;

}
-(id)createRawProperties:(unsigned)arg1 ;
-(unsigned)interfaceVersion;
-(id)cardTypeNameString;
-(id)infoWindowController;
-(void)setDataCallback:(/*function pointer*/void*)arg1 ;
-(void)process:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)activate:(unsigned)arg1 ;
@end
