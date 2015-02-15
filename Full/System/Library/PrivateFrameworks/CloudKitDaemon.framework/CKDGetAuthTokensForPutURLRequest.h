/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMapTable;

@interface CKDGetAuthTokensForPutURLRequest : CKDURLRequest {

	NSMapTable* _MMCSItemsByRecordIDs;
	NSMapTable* _recordIDsByRequestIDs;

}

@property (nonatomic,readonly) NSMapTable * MMCSItemsByRecordIDs;              //@synthesize MMCSItemsByRecordIDs=_MMCSItemsByRecordIDs - In the implementation block
@property (nonatomic,retain) NSMapTable * recordIDsByRequestIDs;               //@synthesize recordIDsByRequestIDs=_recordIDsByRequestIDs - In the implementation block
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithMMCSItems:(id)arg1 ;
-(void)setRecordIDsByRequestIDs:(NSMapTable *)arg1 ;
-(NSMapTable *)MMCSItemsByRecordIDs;
-(NSMapTable *)recordIDsByRequestIDs;
-(int)operationType;
@end
