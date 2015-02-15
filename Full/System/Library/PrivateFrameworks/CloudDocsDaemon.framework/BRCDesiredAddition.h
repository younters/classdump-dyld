/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, BRCItemID, NSNumber, NSString, BRCLocalContainer;

@interface BRCDesiredAddition : NSObject {

	id _versionOrThumbData;
	NSData* _thumbnailData;
	char _needsInsert;
	unsigned _type;
	BRCItemID* _itemID;
	NSNumber* _stagedFileID;
	NSString* _etag;
	BRCLocalContainer* _container;
	NSString* _key;

}

@property (nonatomic,readonly) BRCItemID * itemID;                         //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSNumber * stagedFileID;                      //@synthesize stagedFileID=_stagedFileID - In the implementation block
@property (nonatomic,readonly) BRCLocalContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char needsInsert;                             //@synthesize needsInsert=_needsInsert - In the implementation block
@property (nonatomic,retain) id versionOrThumbData;                        //@synthesize versionOrThumbData=_versionOrThumbData - In the implementation block
@property (assign,nonatomic) unsigned type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * etag;                            //@synthesize etag=_etag - In the implementation block
+(char)dumpContainer:(id)arg1 toContext:(id)arg2 error:(id*)arg3 ;
+(char)dumpContainer:(id)arg1 type:(unsigned)arg2 name:(id)arg3 toContext:(id)arg4 error:(id*)arg5 ;
+(id)fetchFromContainer:(id)arg1 itemID:(id)arg2 etag:(id)arg3 type:(unsigned)arg4 ;
-(char)saveToDB;
-(NSNumber *)stagedFileID;
-(char)needsInsert;
-(id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3 ;
-(id)versionOrThumbData;
-(id)initWithItemID:(id)arg1 container:(id)arg2 etag:(id)arg3 type:(unsigned)arg4 ;
-(char)moveToStageFromDownloadPath:(id)arg1 ;
-(char)deleteFromDB;
-(void)setStagedFileID:(NSNumber *)arg1 ;
-(void)setNeedsInsert:(char)arg1 ;
-(void)setVersionOrThumbData:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BRCLocalContainer *)container;
-(NSString *)etag;
-(BRCItemID *)itemID;
@end
