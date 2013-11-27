/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/GKPlayerProfileHeaderView.h>

@interface GKLocalPlayerProfileHeaderView : GKPlayerProfileHeaderView {

	BOOL _showingPlaceholderText;

}

@property (assign,getter=isShowingPlaceholderText,nonatomic) BOOL showingPlaceholderText;              //@synthesize showingPlaceholderText=_showingPlaceholderText - In the implementation block
+(Class)statusViewClass;
-(void)updatePlayerStatus;
-(void)updatePlayerName;
-(void)updatePlayerPhoto;
-(void)setShowingPlaceholderText:(BOOL)arg1 ;
-(BOOL)isShowingPlaceholderText;
-(void)didUpdateModel;
-(id)metrics;
@end
