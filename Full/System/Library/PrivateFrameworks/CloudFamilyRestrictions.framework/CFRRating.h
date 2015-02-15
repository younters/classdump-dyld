/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudFamilyRestrictions.framework/CloudFamilyRestrictions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CFRRating : NSObject {

	NSString* _localizedName;
	NSString* _localizedShortName;
	long long _rank;

}

@property (nonatomic,retain) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * localizedShortName;              //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (assign,nonatomic) long long rank;                             //@synthesize rank=_rank - In the implementation block
+(id)ratingFromDictionary:(id)arg1 ;
-(char)isEqualToRating:(id)arg1 ;
-(void)setLocalizedShortName:(NSString *)arg1 ;
-(NSString *)localizedShortName;
-(void)setLocalizedName:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)localizedName;
-(long long)rank;
-(void)setRank:(long long)arg1 ;
@end
