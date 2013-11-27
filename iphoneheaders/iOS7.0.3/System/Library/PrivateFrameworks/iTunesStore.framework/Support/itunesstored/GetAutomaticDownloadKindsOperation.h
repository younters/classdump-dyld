/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class SSAuthenticationContext, NSArray;

@interface GetAutomaticDownloadKindsOperation : ISOperation {

	SSAuthenticationContext* _authContext;
	NSArray* _enabledDownloadKinds;

}

@property (copy) SSAuthenticationContext * authenticationContext; 
@property (readonly) NSArray * enabledDownloadKinds; 
-(id)enabledDownloadKinds;
-(void)dealloc;
-(void)run;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
@end
