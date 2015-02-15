/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:56 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/iTunes.app/Contents/MacOS/iTunes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <iTunes/iTunes-Structs.h>
@class NSString;

@interface StoreFrameLoadDelegate : NSObject {

	StorePageContext* mStoreContext;
	/*function pointer*/void* mLoadCompleteProc;
	weak_ptr<StoreXMLDisplay>* mStoreXMLDisplay;
	BOOL mFixHistoryItemTitlePostLoad;
	NSString* mTitleForPostLoad;

}
-(void)callLoadCompleteProc;
-(void)webView:(id)arg1 postProcessLoadForFrame:(id)arg2 ;
-(id)initWithStoreContext:(StorePageContext*)arg1 ;
-(void)setLoadCompleteProc:(/*function pointer*/void*)arg1 andData:(shared_ptr<StoreXMLDisplay>*)arg2 ;
-(void)setFixHistoryItemTitlePostLoad;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
@end
