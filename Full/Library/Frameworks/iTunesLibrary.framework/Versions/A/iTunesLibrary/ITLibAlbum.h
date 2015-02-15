/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Frameworks/iTunesLibrary.framework/Versions/A/iTunesLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, ITLibArtist;

@interface ITLibAlbum : NSObject {

	NSString* _title;
	NSString* _sortTitle;
	char _compilation;
	unsigned long long _discCount;
	unsigned long long _discNumber;
	long long _rating;
	char _ratingComputed;
	char _gapless;
	unsigned long long _trackCount;
	NSString* _albumArtist;
	NSString* _sortAlbumArtist;

}

@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * sortTitle;                                       //@synthesize sortTitle=_sortTitle - In the implementation block
@property (assign,getter=isCompilation,nonatomic) char compilation;                    //@synthesize compilation=_compilation - In the implementation block
@property (nonatomic,retain,readonly) ITLibArtist * artist; 
@property (assign,nonatomic) unsigned long long discCount;                             //@synthesize discCount=_discCount - In the implementation block
@property (assign,nonatomic) unsigned long long discNumber;                            //@synthesize discNumber=_discNumber - In the implementation block
@property (assign,nonatomic) long long rating;                                         //@synthesize rating=_rating - In the implementation block
@property (assign,getter=isRatingComputed,nonatomic) char ratingComputed;              //@synthesize ratingComputed=_ratingComputed - In the implementation block
@property (assign,getter=isGapless,nonatomic) char gapless;                            //@synthesize gapless=_gapless - In the implementation block
@property (assign,nonatomic) unsigned long long trackCount;                            //@synthesize trackCount=_trackCount - In the implementation block
@property (nonatomic,copy) NSString * albumArtist;                                     //@synthesize albumArtist=_albumArtist - In the implementation block
@property (nonatomic,copy) NSString * sortAlbumArtist;                                 //@synthesize sortAlbumArtist=_sortAlbumArtist - In the implementation block
-(char)isCompilation;
-(char)isRatingComputed;
-(void)setRatingComputed:(char)arg1 ;
-(char)isGapless;
-(ITLibArtist *)artist;
-(void)setCompilation:(char)arg1 ;
-(unsigned long long)discCount;
-(void)setDiscCount:(unsigned long long)arg1 ;
-(unsigned long long)discNumber;
-(void)setDiscNumber:(unsigned long long)arg1 ;
-(NSString *)albumArtist;
-(void)setAlbumArtist:(NSString *)arg1 ;
-(void)setGapless:(char)arg1 ;
-(NSString *)sortAlbumArtist;
-(void)setSortAlbumArtist:(NSString *)arg1 ;
-(unsigned long long)trackCount;
-(void)setTrackCount:(unsigned long long)arg1 ;
-(long long)rating;
-(void)setRating:(long long)arg1 ;
-(NSString *)sortTitle;
-(void)setSortTitle:(NSString *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
