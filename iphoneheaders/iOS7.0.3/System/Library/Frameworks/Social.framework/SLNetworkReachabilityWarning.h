/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface SLNetworkReachabilityWarning : NSObject {

	/*^block*/ id _completionHandler;
	NSString* _serviceType;

}
-(id)initWithServiceType:(id)arg1 ;
-(void)showIfNecessaryWithCompletion:(/*^block*/ id)arg1 ;
-(void)showIfNecessary;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void).cxx_destruct;
@end
