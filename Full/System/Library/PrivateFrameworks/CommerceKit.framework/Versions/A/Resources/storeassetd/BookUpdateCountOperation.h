/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storeassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>
#import <storeassetd/ISStoreURLOperationDelegate.h>

@class NSArray, NSString;

@interface BookUpdateCountOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSArray* _items;

}

@property (readonly) NSArray * items;                               //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)matchingStoreBookSummaries;
+(id)requestBodyWithSummaries:(id)arg1 ;
+(id)uncompressedPostBodyForRequest:(char)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)run;
-(NSArray *)items;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end
