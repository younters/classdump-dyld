/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKBookshelf/BKBookshelfCategory.h>

@class BKCollection;

@interface BKBookshelfCollectionCategory : BKBookshelfCategory {

	BKCollection* _collection;

}

@property (nonatomic,retain) BKCollection * collection;              //@synthesize collection=_collection - In the implementation block
-(char)allowSortManual;
-(char)canDeleteLibraryAsset:(id)arg1 ;
-(char)deleteRemovesFromCollection;
-(char)deletesExhaustively;
-(id)contentPredicate;
-(BKCollection *)collection;
-(void)setCollection:(BKCollection *)arg1 ;
@end
