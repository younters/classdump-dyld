/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/NSSecureCoding.h>

@class NSString, NSDate;

@interface WBSFeedEntry : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _urlString;
	NSString* _title;
	NSString* _entryDescription;
	NSString* _content;
	NSDate* _datePublished;
	NSDate* _dateUpdated;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlString;               //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * entryDescription;                 //@synthesize entryDescription=_entryDescription - In the implementation block
@property (nonatomic,copy) NSString * content;                          //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSDate * datePublished;                      //@synthesize datePublished=_datePublished - In the implementation block
@property (nonatomic,copy) NSDate * dateUpdated;                        //@synthesize dateUpdated=_dateUpdated - In the implementation block
+(id)dateFromRSSDateString:(id)arg1 ;
+(id)dateFromAtomDateString:(id)arg1 ;
+(id)feedEntryWithRSSFeedElement:(id)arg1 ;
+(id)feedEntryWithAtomFeedElement:(id)arg1 ;
+(char)supportsSecureCoding;
-(NSString *)urlString;
-(id)initWithIdentifier:(id)arg1 urlString:(id)arg2 ;
-(void)setEntryDescription:(NSString *)arg1 ;
-(void)setDatePublished:(NSDate *)arg1 ;
-(void)setDateUpdated:(NSDate *)arg1 ;
-(NSString *)entryDescription;
-(NSDate *)datePublished;
-(NSDate *)dateUpdated;
-(id)description;
-(void)setContent:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)content;
@end
