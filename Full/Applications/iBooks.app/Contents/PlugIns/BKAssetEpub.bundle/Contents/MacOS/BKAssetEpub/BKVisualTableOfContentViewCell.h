/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKAssetEpub/BKAssetEpub-Structs.h>
#import <AppKit/NSView.h>

@class NSImageView, BKGradientView, NSTextField, NSButton, NSView;

@interface BKVisualTableOfContentViewCell : NSView {

	char _selected;
	char _chapterHead;
	char _firstPage;
	char _lastPage;
	char _isBookmarked;
	int _previousPageType;
	int _nextPageType;
	NSImageView* _imageView;
	BKGradientView* _pageTitleContainer;
	NSTextField* _pageTitleTextField;
	NSButton* _actionButton;
	NSView* _topDivider;
	NSView* _rightDivider;
	NSView* _leftDivider;
	NSImageView* _topShadowImageView;
	NSImageView* _leftShadowImageView;
	NSImageView* _rightShadowImageView;
	NSImageView* _bookmarkImageView;
	/*^block*/id _clickAction;

}

@property (assign,nonatomic,__weak) NSImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) BKGradientView * pageTitleContainer;              //@synthesize pageTitleContainer=_pageTitleContainer - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * pageTitleTextField;                 //@synthesize pageTitleTextField=_pageTitleTextField - In the implementation block
@property (assign,nonatomic,__weak) NSButton * actionButton;                          //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic,__weak) NSView * topDivider;                              //@synthesize topDivider=_topDivider - In the implementation block
@property (assign,nonatomic,__weak) NSView * rightDivider;                            //@synthesize rightDivider=_rightDivider - In the implementation block
@property (assign,nonatomic,__weak) NSView * leftDivider;                             //@synthesize leftDivider=_leftDivider - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * topShadowImageView;                 //@synthesize topShadowImageView=_topShadowImageView - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * leftShadowImageView;                //@synthesize leftShadowImageView=_leftShadowImageView - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * rightShadowImageView;               //@synthesize rightShadowImageView=_rightShadowImageView - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * bookmarkImageView;                  //@synthesize bookmarkImageView=_bookmarkImageView - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected;                         //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isChapterHead,nonatomic) char chapterHead;                   //@synthesize chapterHead=_chapterHead - In the implementation block
@property (assign,getter=isFirstPage,nonatomic) char firstPage;                       //@synthesize firstPage=_firstPage - In the implementation block
@property (assign,getter=isLastPage,nonatomic) char lastPage;                         //@synthesize lastPage=_lastPage - In the implementation block
@property (assign,getter=isBookmarked,nonatomic) char isBookmarked;                   //@synthesize isBookmarked=_isBookmarked - In the implementation block
@property (assign,nonatomic) int previousPageType;                                    //@synthesize previousPageType=_previousPageType - In the implementation block
@property (assign,nonatomic) int nextPageType;                                        //@synthesize nextPageType=_nextPageType - In the implementation block
@property (nonatomic,copy) id clickAction;                                            //@synthesize clickAction=_clickAction - In the implementation block
-(void)setLeftDivider:(NSView *)arg1 ;
-(char)isLastPage;
-(CGSize)imageViewSize;
-(char)isChapterHead;
-(char)isFirstPage;
-(char)isBookmarked;
-(void)setLastPage:(char)arg1 ;
-(NSView *)leftDivider;
-(int)nextPageType;
-(NSView *)rightDivider;
-(void)setFirstPage:(char)arg1 ;
-(void)setChapterHead:(char)arg1 ;
-(void)setBookmarkImageView:(NSImageView *)arg1 ;
-(NSImageView *)bookmarkImageView;
-(void)setPreviousPageType:(int)arg1 ;
-(int)previousPageType;
-(void)setNextPageType:(int)arg1 ;
-(NSImageView *)topShadowImageView;
-(NSImageView *)rightShadowImageView;
-(BKGradientView *)pageTitleContainer;
-(NSTextField *)pageTitleTextField;
-(void)setPageTitleContainer:(BKGradientView *)arg1 ;
-(void)setPageTitleTextField:(NSTextField *)arg1 ;
-(void)setLeftShadowImageView:(NSImageView *)arg1 ;
-(void)setRightDivider:(NSView *)arg1 ;
-(void)setTopShadowImageView:(NSImageView *)arg1 ;
-(NSImageView *)leftShadowImageView;
-(void)setIsBookmarked:(char)arg1 ;
-(void)setRightShadowImageView:(NSImageView *)arg1 ;
-(NSButton *)actionButton;
-(void)setActionButton:(NSButton *)arg1 ;
-(id)clickAction;
-(void)setClickAction:(id)arg1 ;
-(void)setTopDivider:(NSView *)arg1 ;
-(NSView *)topDivider;
-(void)layout;
-(void)performClick:(id)arg1 ;
-(void)viewWillDraw;
-(void)awakeFromNib;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(void)setImageView:(NSImageView *)arg1 ;
-(NSImageView *)imageView;
@end
