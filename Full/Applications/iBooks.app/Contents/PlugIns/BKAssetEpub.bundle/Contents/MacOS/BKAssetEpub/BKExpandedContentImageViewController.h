/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <BKAssetEpub/BKExpandedContentViewController.h>

@protocol BKExpandedContentViewControllerDelegate;
@class NSURL, BKBook, NSImageView, NSString;

@interface BKExpandedContentImageViewController : NSViewController <BKExpandedContentViewController> {

	id<BKExpandedContentViewControllerDelegate> _delegate;
	NSURL* _url;
	BKBook* _book;
	NSImageView* _imageView;

}

@property (nonatomic,retain) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) BKBook * book;                                           //@synthesize book=_book - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<BKExpandedContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setBook:(BKBook *)arg1 ;
-(id)initWithURL:(id)arg1 inBook:(id)arg2 loaderPool:(id)arg3 ;
-(void)loadContentWithCompletion:(/*^block*/id)arg1 ;
-(id)_dataForURL:(id)arg1 error:(id*)arg2 ;
-(void)teardown;
-(void)setDelegate:(id<BKExpandedContentViewControllerDelegate>)arg1 ;
-(NSURL *)url;
-(id)contentView;
-(id<BKExpandedContentViewControllerDelegate>)delegate;
-(void)setUrl:(NSURL *)arg1 ;
-(void)loadView;
-(void)setImageView:(NSImageView *)arg1 ;
-(NSImageView *)imageView;
-(BKBook *)book;
@end
