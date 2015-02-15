/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFIMAPOperation.h>

@class NSPointerArray, NSString;

@interface MFIMAPCopyMessagesOperation : MFIMAPOperation {

	NSPointerArray* _sourceUids;
	NSPointerArray* _destinationUids;
	NSString* _destinationMailbox;

}

@property (nonatomic,copy) NSString * destinationMailbox;                   //@synthesize destinationMailbox=_destinationMailbox - In the implementation block
@property (assign,nonatomic) char usesRealUids; 
@property (nonatomic,retain) NSPointerArray * sourceUids;                   //@synthesize sourceUids=_sourceUids - In the implementation block
@property (nonatomic,retain) NSPointerArray * destinationUids;              //@synthesize destinationUids=_destinationUids - In the implementation block
-(unsigned char)operationType;
-(NSString *)destinationMailbox;
-(void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(void)serializeIntoData:(id)arg1 ;
-(char)isSourceOfTemporaryUid:(unsigned)arg1 ;
-(char)actsOnTemporaryUid:(unsigned)arg1 ;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(unsigned)firstTemporaryUid;
-(unsigned)lastTemporaryUid;
-(NSPointerArray *)sourceUids;
-(NSPointerArray *)destinationUids;
-(void)setSourceUids:(NSPointerArray *)arg1 ;
-(void)setDestinationUids:(NSPointerArray *)arg1 ;
-(void)setDestinationMailbox:(NSString *)arg1 ;
-(id)initWithUidStringsToCopy:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 firstNewUid:(unsigned)arg4 ;
-(id)sourceUidStrings;
-(id)destinationUidStrings;
-(unsigned)sourceUidForTemporaryUid:(unsigned)arg1 ;
-(char)getMessageId:(id*)arg1 andInternalDate:(id*)arg2 forDestinationUid:(unsigned)arg3 ;
-(void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned)arg3 ;
-(id)description;
-(unsigned long long)approximateSize;
@end
