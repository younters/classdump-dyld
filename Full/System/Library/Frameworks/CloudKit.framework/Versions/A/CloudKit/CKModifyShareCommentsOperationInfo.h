/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class CKShareID, NSArray;

@interface CKModifyShareCommentsOperationInfo : CKOperationInfo {

	CKShareID* _shareID;
	NSArray* _commentsToSave;
	NSArray* _commentIDsToDelete;

}

@property (nonatomic,retain) CKShareID * shareID;                       //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) NSArray * commentsToSave;                  //@synthesize commentsToSave=_commentsToSave - In the implementation block
@property (nonatomic,retain) NSArray * commentIDsToDelete;              //@synthesize commentIDsToDelete=_commentIDsToDelete - In the implementation block
+(char)supportsSecureCoding;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(NSArray *)commentsToSave;
-(void)setCommentsToSave:(NSArray *)arg1 ;
-(NSArray *)commentIDsToDelete;
-(void)setCommentIDsToDelete:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
