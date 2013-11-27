/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLPreviewUIItem.h>

@protocol QLPreviewItem;
@class , QLPreviewThumbnailGenerator, NSURL, NSString, UIImage;

@interface QLPreviewUIItem : NSObject <QLPreviewUIItem> {

	<QLPreviewItem>* _previewItem;
	QLPreviewThumbnailGenerator* _thumbnailGenerator;
	int _index;

}

@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
@property (readonly) UIImage * icon; 
@property (readonly) int level; 
@property (readonly) int previewItemIndex; 
@property (readonly) BOOL isFolder; 
+(id)genericIconForPreviewItem:(id)arg1 ;
+(id)uiItemForPreviewItem:(id)arg1 index:(int)arg2 ;
-(void)updateIconWithSize:(CGSize)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)cancelIconUpdate;
-(int)previewItemIndex;
-(void)dealloc;
-(int)level;
-(id)previewItemURL;
-(id)previewItemTitle;
-(id)icon;
-(BOOL)isFolder;
@end
