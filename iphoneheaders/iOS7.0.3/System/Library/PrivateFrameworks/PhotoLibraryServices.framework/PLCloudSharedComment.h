/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, PLCloudFeedCommentsEntry;

@interface PLCloudSharedComment : PLManagedObject

@property (nonatomic,@dynamic,retain) NSString * cloudGUID; 
@property (nonatomic,@dynamic,retain) NSString * commenterHashedPersonID; 
@property (nonatomic,@dynamic,retain) NSNumber * isDeletable; 
@property (nonatomic,@dynamic,retain) NSNumber * isLike; 
@property (nonatomic,@dynamic,retain) NSNumber * isCaption; 
@property (nonatomic,@dynamic,retain) NSNumber * isBatchComment; 
@property (nonatomic,@dynamic,retain) NSNumber * isMyComment; 
@property (nonatomic,@dynamic,retain) NSString * commentText; 
@property (nonatomic,@dynamic,retain) NSDate * commentDate; 
@property (nonatomic,@dynamic,retain) NSDate * commentClientDate; 
@property (nonatomic,@dynamic,retain) PLManagedAsset * commentedAsset; 
@property (nonatomic,@dynamic,retain) PLManagedAsset * likedAsset; 
@property (nonatomic,@dynamic,retain) PLCloudFeedCommentsEntry * cloudFeedCommentEntry; 
@property (nonatomic,@dynamic,retain) PLCloudFeedCommentsEntry * cloudFeedLikeCommentEntry; 
@property (nonatomic,readonly) BOOL isLikeBoolValue; 
@property (nonatomic,readonly) NSString * commenterEmail; 
@property (nonatomic,readonly) NSString * commenterFirstName; 
@property (nonatomic,readonly) NSString * commenterLastName; 
@property (nonatomic,readonly) NSString * commenterFullName; 
@property (nonatomic,readonly) PLCloudFeedCommentsEntry * cloudFeedEntry; 
@property (nonatomic,@dynamic,retain) NSString * commentType; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)insertNewCommentIntoAsset:(id)arg1 commentDate:(id)arg2 withText:(id)arg3 isLike:(BOOL)arg4 isMyComment:(BOOL)arg5 inLibrary:(id)arg6 ;
+(id)cloudSharedCommentWithGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)cloudSharedCommentWithGUID:(id)arg1 inLibrary:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)asset;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(id)cloudFeedEntry;
-(BOOL)isLikeBoolValue;
-(BOOL)isInterestingForAlbumsSorting;
-(BOOL)shouldNotifyAsBulletinWithMediaStreamInfo:(id)arg1 asCaptionOnly:(BOOL*)arg2 ;
-(id)commenterDisplayName;
-(id)commenterEmail;
-(BOOL)_isInterestingToUser;
-(id)commenterFirstName;
-(id)commenterLastName;
-(id)commenterFullName;
-(BOOL)canBeDeletedByUser;
@end
