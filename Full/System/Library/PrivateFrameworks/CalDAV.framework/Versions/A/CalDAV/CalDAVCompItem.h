/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCompItem : CoreDAVItem {

	NSString* _nameAttribute;

}

@property (nonatomic,retain) NSString * nameAttribute;              //@synthesize nameAttribute=_nameAttribute - In the implementation block
-(void)setNameAttribute:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)nameAttribute;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)parserFoundAttributes:(id)arg1 ;
@end
