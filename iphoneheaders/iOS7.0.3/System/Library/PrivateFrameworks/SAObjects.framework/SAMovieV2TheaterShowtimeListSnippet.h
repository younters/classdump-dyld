/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SAUISnippet.h>

@class SAMovieV2MovieDetailSnippet, NSString, NSArray;

@interface SAMovieV2TheaterShowtimeListSnippet : SAUISnippet

@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * movieDetailSnippet; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSArray * theaterShowtimeListCells; 
@property (nonatomic,copy) NSString * title; 
+(id)theaterShowtimeListSnippet;
+(id)theaterShowtimeListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(id)encodedClassName;
-(id)movieDetailSnippet;
-(void)setMovieDetailSnippet:(id)arg1 ;
-(id)theaterShowtimeListCells;
-(void)setTheaterShowtimeListCells:(id)arg1 ;
@end
