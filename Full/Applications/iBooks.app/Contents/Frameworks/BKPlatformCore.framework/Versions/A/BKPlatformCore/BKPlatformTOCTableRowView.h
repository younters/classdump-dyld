/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKPlatformCore-Structs.h>
#import <AppKit/NSTableRowView.h>

@interface BKPlatformTOCTableRowView : NSTableRowView {

	char _showsTopSeparatorLine;
	char _showsBottomSeparatorLine;
	char _pageExists;

}

@property (assign,nonatomic) char showsTopSeparatorLine;                 //@synthesize showsTopSeparatorLine=_showsTopSeparatorLine - In the implementation block
@property (assign,nonatomic) char showsBottomSeparatorLine;              //@synthesize showsBottomSeparatorLine=_showsBottomSeparatorLine - In the implementation block
@property (assign,nonatomic) char pageExists;                            //@synthesize pageExists=_pageExists - In the implementation block
+(void)initialize;
-(char)pageExists;
-(void)setPageExists:(char)arg1 ;
-(void)setShowsTopSeparatorLine:(char)arg1 ;
-(void)setShowsBottomSeparatorLine:(char)arg1 ;
-(char)showsTopSeparatorLine;
-(char)showsBottomSeparatorLine;
-(void)_updateColorForTextField:(id)arg1 ofNode:(id)arg2 ;
-(void)_updateColorForImageView:(id)arg1 ofNode:(id)arg2 ;
-(void)_updateAttributesForSelectedState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)setSelected:(char)arg1 ;
@end
