/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:29:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Terminal.app/Contents/MacOS/Terminal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Terminal/Terminal-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSTextFieldCell, NSImageCell;

@interface TTSettingsSourceCell : NSTextFieldCell {

	NSTextFieldCell* _titleCell;
	NSTextFieldCell* _defaultCell;
	NSImageCell* _thumbnailCell;
	char _isEditing;
	id _dataSource;

}
-(char)shouldShowDefaultCell;
-(CGRect)defaultRectForBounds:(CGRect)arg1 ;
-(id)profile;
-(id)thumbnailImage;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(CGRect)expansionFrameWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)selectWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6 ;
@end
