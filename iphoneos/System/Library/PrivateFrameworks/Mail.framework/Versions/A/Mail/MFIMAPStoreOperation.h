/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFIMAPOperation.h>

@class NSArray, NSPointerArray;

@interface MFIMAPStoreOperation : MFIMAPOperation {

	NSArray* _objectsToSet;
	NSArray* _objectsToClear;
	NSPointerArray* _uids;

}

@property (nonatomic,retain) NSPointerArray * uids;                    //@synthesize uids=_uids - In the implementation block
@property (nonatomic,copy,readonly) NSArray * uidStrings; 
@property (assign,nonatomic) char usesRealUids; 
@property (nonatomic,copy) NSArray * objectsToSet;                     //@synthesize objectsToSet=_objectsToSet - In the implementation block
@property (nonatomic,copy) NSArray * objectsToClear;                   //@synthesize objectsToClear=_objectsToClear - In the implementation block
-(void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(void)serializeIntoData:(id)arg1 ;
-(char)actsOnTemporaryUid:(unsigned)arg1 ;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(NSArray *)objectsToSet;
-(NSArray *)objectsToClear;
-(NSPointerArray *)uids;
-(void)setObjectsToSet:(NSArray *)arg1 ;
-(void)setObjectsToClear:(NSArray *)arg1 ;
-(void)setUids:(NSPointerArray *)arg1 ;
-(id)_initWithObjectsToSet:(id)arg1 objectsToClear:(id)arg2 forUids:(id)arg3 inMailbox:(id)arg4 ;
-(NSArray *)uidStrings;
-(unsigned long long)approximateSize;
@end
