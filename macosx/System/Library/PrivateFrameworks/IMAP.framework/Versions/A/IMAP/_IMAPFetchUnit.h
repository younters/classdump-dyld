/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IMAPClientFetchDataItem, IMAPFetchResult;

@interface _IMAPFetchUnit : NSObject {

	unsigned _uid;
	unsigned _expectedLength;
	IMAPClientFetchDataItem* _fetchItem;
	IMAPFetchResult* _expectedFetchResult;

}

@property (assign,nonatomic) unsigned uid;                                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) IMAPClientFetchDataItem * fetchItem;                //@synthesize fetchItem=_fetchItem - In the implementation block
@property (nonatomic,retain) IMAPFetchResult * expectedFetchResult;              //@synthesize expectedFetchResult=_expectedFetchResult - In the implementation block
@property (assign,nonatomic) unsigned expectedLength;                            //@synthesize expectedLength=_expectedLength - In the implementation block
-(id)description;
-(unsigned)uid;
-(void)setUid:(unsigned)arg1 ;
-(void)setFetchItem:(IMAPClientFetchDataItem *)arg1 ;
-(void)setExpectedLength:(unsigned)arg1 ;
-(char)matchesFetchResponse:(id)arg1 ;
-(id)newFailedFetchResponse;
-(IMAPClientFetchDataItem *)fetchItem;
-(unsigned)expectedLength;
-(IMAPFetchResult *)expectedFetchResult;
-(void)setExpectedFetchResult:(IMAPFetchResult *)arg1 ;
-(void)_setupExpectedFetchResult;
@end
