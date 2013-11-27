/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKit/UIView.h>
#import <RemoteUI/RemoteUITableHeader.h>

@class UILabel, UIImageView;

@interface RemoteUIIconHeader : UIView <RemoteUITableHeader> {

	UILabel* _header;
	UILabel* _subHeader;
	UIImageView* _iconView;
	BOOL _isFirstSection;
	int _alignment;

}
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(float)headerHeightForWidth:(float)arg1 inTableView:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setImageSize:(CGSize)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
@end
