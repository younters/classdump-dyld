/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicSongTableViewCellContentView.h>

@class UILabel, UIImageView, NSString, UIImage;

@interface _MusicSongListTableViewCellContentView : MusicSongTableViewCellContentView {

	UILabel* _albumLabel;
	UILabel* _artistLabel;
	UIImageView* _artworkImageView;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) UILabel * albumLabel;                        //@synthesize albumLabel=_albumLabel - In the implementation block
@property (nonatomic,readonly) UILabel * artistLabel;                       //@synthesize artistLabel=_artistLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * artworkImageView;              //@synthesize artworkImageView=_artworkImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)artist;
-(id)artworkImageView;
-(id)artworkImage;
-(void)setArtist:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)titleLabel;
-(void)setArtworkImage:(id)arg1 ;
-(void)setDisplayAsDisabled:(BOOL)arg1 ;
-(void)layoutForPadInRect:(CGRect)arg1 ;
-(void)layoutForPhoneInRect:(CGRect)arg1 ;
-(id)albumLabel;
-(id)artistLabel;
-(id)album;
-(void)setAlbum:(id)arg1 ;
-(void).cxx_destruct;
@end
