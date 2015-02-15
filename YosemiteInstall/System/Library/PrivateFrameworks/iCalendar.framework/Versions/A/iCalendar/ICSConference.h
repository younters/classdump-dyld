/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSConference : ICSProperty

@property (nonatomic,retain) NSString * feature; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,retain) NSString * region; 
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setFeature:(NSString *)arg1 ;
-(NSString *)info;
-(NSString *)region;
-(void)setInfo:(NSString *)arg1 ;
-(NSString *)feature;
-(NSString *)language;
-(void)setRegion:(NSString *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
@end
