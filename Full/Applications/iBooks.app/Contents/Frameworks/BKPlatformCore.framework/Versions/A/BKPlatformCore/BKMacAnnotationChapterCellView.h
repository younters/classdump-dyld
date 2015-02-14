/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKPlatformCore-Structs.h>
#import <AppKit/NSTableRowView.h>

@protocol BKMacAnnotationChapterCellViewDelegate;
@class NSProgressIndicator, NSTextField;

@interface BKMacAnnotationChapterCellView : NSTableRowView {

	id<BKMacAnnotationChapterCellViewDelegate> _delegate;
	NSProgressIndicator* _progressIndicator;
	NSTextField* _title;
	NSTextField* _annotationCountLabel;

}

@property (assign,nonatomic) id<BKMacAnnotationChapterCellViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSProgressIndicator * progressIndicator;                          //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,retain) NSTextField * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSTextField * annotationCountLabel;                               //@synthesize annotationCountLabel=_annotationCountLabel - In the implementation block
-(void)showProgressIndicator;
-(void)updateWithTitle:(id)arg1 annotationCount:(unsigned long long)arg2 currentlyLoading:(char)arg3 ;
-(NSTextField *)annotationCountLabel;
-(void)handleChapterCellTap:(id)arg1 ;
-(void)setAnnotationCountLabel:(NSTextField *)arg1 ;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)setDelegate:(id<BKMacAnnotationChapterCellViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSTextField *)arg1 ;
-(NSTextField *)title;
-(id<BKMacAnnotationChapterCellViewDelegate>)delegate;
-(void)awakeFromNib;
-(NSProgressIndicator *)progressIndicator;
-(void)hideProgressIndicator;
@end
