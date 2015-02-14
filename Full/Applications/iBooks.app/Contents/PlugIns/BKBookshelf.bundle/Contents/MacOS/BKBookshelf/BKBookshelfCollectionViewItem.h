/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSCollectionViewItem.h>
#import <BKBookshelf/BKBookshelfCategoryContentController.h>

@protocol BKBookshelfCategoryContentDelegate;
@class BKBookshelfCategory, NSImageView, NSImage, NSString;

@interface BKBookshelfCollectionViewItem : NSCollectionViewItem <BKBookshelfCategoryContentController> {

	NSImageView* _cloudBadge;
	NSImage* _coverImage;
	id<BKBookshelfCategoryContentDelegate> _contentDelegate;

}

@property (assign,nonatomic,__weak) NSImageView * cloudBadge;                           //@synthesize cloudBadge=_cloudBadge - In the implementation block
@property (nonatomic,retain) NSImage * coverImage;                                      //@synthesize coverImage=_coverImage - In the implementation block
@property (__weak) id<BKBookshelfCategoryContentDelegate> contentDelegate;              //@synthesize contentDelegate=_contentDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BKBookshelfCategory * category; 
-(void)setCoverImage:(NSImage *)arg1 ;
-(void)setContentDelegate:(id<BKBookshelfCategoryContentDelegate>)arg1 ;
-(id<BKBookshelfCategoryContentDelegate>)contentDelegate;
-(NSImageView *)cloudBadge;
-(void)fetchCover;
-(void)setCloudBadge:(NSImageView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(void)awakeFromNib;
-(BKBookshelfCategory *)category;
-(NSImage *)coverImage;
@end
