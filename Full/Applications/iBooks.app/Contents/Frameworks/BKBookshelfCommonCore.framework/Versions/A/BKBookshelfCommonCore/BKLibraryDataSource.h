/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKBookshelfCommonCore.framework/Versions/A/BKBookshelfCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKBookshelfCommonCore/BKBookshelfCommonCore-Structs.h>
#import <BKBookshelfCommonCore/IMPlugIn.h>
#import <BKBookshelfCommonCore/BKLibraryDataSource.h>

@protocol BKLibraryDataSource <NSObject>
@optional
-(void)bookCoverForLibraryAsset:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3;
-(char)importURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(char)prioritizeImport:(id)arg1 completion:(/*^block*/id)arg2;
-(char)updateURL:(id)arg1 completion:(/*^block*/id)arg2;
-(char)updateAsset:(id)arg1 coverArt:(id)arg2 completion:(/*^block*/id)arg3;
-(char)examineURL:(id)arg1 completion:(/*^block*/id)arg2;
-(char)resolveLibraryAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)assetForLibraryAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteAssets:(id)arg1 completion:(/*^block*/id)arg2;
-(char)canRedownloadAssets;
-(char)canMakeAssetsLocal;
-(char)book:(id)arg1 didChange:(long long)arg2;

@required
-(void)fetchAssets:(/*^block*/id)arg1;

@end


@class BKLibrary, NSString;

@interface BKLibraryDataSource : NSObject <IMPlugIn, BKLibraryDataSource> {

	int _state;
	BKLibrary* _library;
	NSString* _identifier;
	long long _rank;

}

@property (__weak) BKLibrary * library;                             //@synthesize library=_library - In the implementation block
@property (retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (assign) long long rank;                                  //@synthesize rank=_rank - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int state;                             //@synthesize state=_state - In the implementation block
-(id)initWithPlugInInstanceDescriptor:(id)arg1 ;
-(void)bookCoverForLibraryAsset:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAssets:(/*^block*/id)arg1 ;
-(char)importURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)prioritizeImport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)updateURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)examineURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)resolveLibraryAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assetForLibraryAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)canRedownloadAssets;
-(char)canMakeAssetsLocal;
-(char)mergeAssets:(id)arg1 error:(id*)arg2 mergeBlock:(/*^block*/id)arg3 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setState:(int)arg1 ;
-(char)isEnabled;
-(int)state;
-(BKLibrary *)library;
-(void)setLibrary:(BKLibrary *)arg1 ;
-(long long)rank;
-(void)setRank:(long long)arg1 ;
@end
