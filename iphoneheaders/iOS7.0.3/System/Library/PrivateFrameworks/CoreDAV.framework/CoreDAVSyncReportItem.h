/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVMultiStatusItem.h>

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {

	NSString* _syncToken;

}

@property (readonly) NSString * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)description;
-(id)syncToken;
-(void)_setSyncTokenItem:(id)arg1 ;
@end
