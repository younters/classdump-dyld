/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSIndexPath, NSDictionary;

@interface IMCollectionViewTransaction : NSObject {

	int _type;
	int _representedElementCategory;
	NSString* _representedElementKind;
	NSIndexPath* _sourceIndexPath;
	NSIndexPath* _targetIndexPath;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int representedElementCategory;                 //@synthesize representedElementCategory=_representedElementCategory - In the implementation block
@property (nonatomic,retain) NSString * representedElementKind;              //@synthesize representedElementKind=_representedElementKind - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceIndexPath;                  //@synthesize sourceIndexPath=_sourceIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * targetIndexPath;                  //@synthesize targetIndexPath=_targetIndexPath - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                        //@synthesize userInfo=_userInfo - In the implementation block
+(id)transactionWithType:(int)arg1 kind:(id)arg2 category:(int)arg3 fromIndexPath:(id)arg4 toIndexPath:(id)arg5 ;
+(id)cellTransactionWithType:(int)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
+(id)supplementaryViewTransactionWithType:(int)arg1 kind:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
+(id)transactionToInsertCellAtIndexPath:(id)arg1 ;
+(id)transactionToDeleteCellAtIndexPath:(id)arg1 ;
+(id)transactionToUpdateCellAtIndexPath:(id)arg1 ;
+(id)transactionToMoveCellFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
+(id)transactionToInsertSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
+(id)transactionToDeleteSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
+(id)transactionToUpdateSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
+(id)transactionToMoveSupplementaryViewOfKind:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
+(id)transactionToDragCellAtIndexPath:(id)arg1 ;
+(id)transactionToDropCellFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
+(id)transactionForEmptyIndexPath:(id)arg1 ;
-(NSIndexPath *)targetIndexPath;
-(NSIndexPath *)sourceIndexPath;
-(void)setRepresentedElementCategory:(int)arg1 ;
-(void)setRepresentedElementKind:(NSString *)arg1 ;
-(int)representedElementCategory;
-(NSString *)representedElementKind;
-(void)setSourceIndexPath:(NSIndexPath *)arg1 ;
-(void)setTargetIndexPath:(NSIndexPath *)arg1 ;
-(id)description;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
@end
