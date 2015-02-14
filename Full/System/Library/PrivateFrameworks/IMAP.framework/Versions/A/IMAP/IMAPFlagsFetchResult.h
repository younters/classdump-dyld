/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPFetchResult.h>

@class NSArray;

@interface IMAPFlagsFetchResult : IMAPFetchResult {

	NSArray* _flagsArray;

}

@property (nonatomic,copy) NSArray * flagsArray;                   //@synthesize flagsArray=_flagsArray - In the implementation block
@property (nonatomic,readonly) unsigned messageFlags; 
-(unsigned)messageFlags;
-(id)description;
-(void)setFlagsArray:(NSArray *)arg1 ;
-(NSArray *)flagsArray;
@end
