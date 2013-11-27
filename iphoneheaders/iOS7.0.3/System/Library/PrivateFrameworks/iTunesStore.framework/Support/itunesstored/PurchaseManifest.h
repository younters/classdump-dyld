/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSArray;

@interface PurchaseManifest : NSObject {

	NSMutableDictionary* _dictionary;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSString* _path;

}

@property (readonly) NSString * path; 
@property (readonly) NSArray * purchaseManifestItems; 
+(void)jetsam;
+(id)_sharedManifestWithManifestType:(int)arg1 ;
+(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
+(void)getPathsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)rebuildWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removeItemWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)sharedManifestForDownloadKind:(id)arg1 ;
+(void)observeXPCServer:(id)arg1 ;
-(id)initWithPurchaseDirectory:(id)arg1 ;
-(void)jetsam;
-(BOOL)_writeToFile;
-(id)purchaseManifestItems;
-(void)rebuildManifest;
-(id)removeItemsWithAssetPaths:(id)arg1 error:(id*)arg2 ;
-(void)addCompletedItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)path;
-(id)_dictionary;
@end
