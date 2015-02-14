/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSArray, BKEpubCFILocation;


@protocol BKEpubWebPaginationInfo <NSObject,NSCoding,NSCopying>
@property (assign,nonatomic) CGSize pageSize; 
@property (nonatomic,retain) NSArray * userScripts; 
@property (nonatomic,retain) NSArray * prefetchedCFIs; 
@property (nonatomic,retain) BKEpubCFILocation * pageBreakCFI; 
@required
-(char)isFixedLayout;
-(void)setPageSize:(CGSize)arg1;
-(CGSize)pageSize;
-(char)describesLeftToRightPageLayout;
-(void)setPrefetchedCFIs:(id)arg1;
-(id)stylesheets;
-(double)gapAbovePages;
-(void)setPageBreakCFI:(id)arg1;
-(NSArray *)prefetchedCFIs;
-(char)describesPaginatedMode;
-(BKEpubCFILocation *)pageBreakCFI;
-(id)colorTheme;
-(char)describesVerticalPageLayout;
-(CGSize*)paddedPageSize;
-(char)describesHorizontalPageLayout;
-(int)flowingTextDirection;
-(char)pagesBehaveLikeColumns;
-(void)setUserScripts:(id)arg1;
-(NSArray *)userScripts;
-(double)textZoom;
-(int)paginationMode;
-(double)gapBetweenPages;

@end
