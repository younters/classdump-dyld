/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, MUIWebAttachmentController, NSURL;

@interface MUISelectionAndClickInformation : NSObject {

	NSArray* _selectedAttachmentControllers;
	MUIWebAttachmentController* _clickedAttachmentController;
	NSURL* _clickedLinkURL;
	NSURL* _clickedMediaURL;
	NSURL* _clickedImageURL;

}

@property (nonatomic,copy) NSArray * selectedAttachmentControllers;                                 //@synthesize selectedAttachmentControllers=_selectedAttachmentControllers - In the implementation block
@property (nonatomic,retain) MUIWebAttachmentController * clickedAttachmentController;              //@synthesize clickedAttachmentController=_clickedAttachmentController - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedAndClickedAttachmentControllers; 
@property (nonatomic,retain) NSURL * clickedLinkURL;                                                //@synthesize clickedLinkURL=_clickedLinkURL - In the implementation block
@property (nonatomic,retain) NSURL * clickedMediaURL;                                               //@synthesize clickedMediaURL=_clickedMediaURL - In the implementation block
@property (nonatomic,retain) NSURL * clickedImageURL;                                               //@synthesize clickedImageURL=_clickedImageURL - In the implementation block
-(MUIWebAttachmentController *)clickedAttachmentController;
-(NSArray *)selectedAndClickedAttachmentControllers;
-(NSURL *)clickedLinkURL;
-(void)setClickedLinkURL:(NSURL *)arg1 ;
-(void)setClickedAttachmentController:(MUIWebAttachmentController *)arg1 ;
-(NSURL *)clickedImageURL;
-(NSArray *)selectedAttachmentControllers;
-(void)setSelectedAttachmentControllers:(NSArray *)arg1 ;
-(NSURL *)clickedMediaURL;
-(void)setClickedMediaURL:(NSURL *)arg1 ;
-(void)setClickedImageURL:(NSURL *)arg1 ;
@end

