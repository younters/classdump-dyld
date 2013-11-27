/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SearchBundles/MobileMail.searchBundle/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AppleAccount/MSSearchDelegate.h>

@protocol OS_dispatch_semaphore;
@class MSSearch, NSString, NSDictionary, NSObject;

@interface _MessageDatastoreContentResultSearchContext : NSObject <MSSearchDelegate> {

	MSSearch* _search;
	NSString* _identifier;
	NSDictionary* _results;
	NSObject<OS_dispatch_semaphore>* _semaphore;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)search;
@end
