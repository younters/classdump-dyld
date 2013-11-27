/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class WebBookmark, NSString;

@interface FolderPickerItem : NSObject {

	WebBookmark* _bookmark;
	unsigned _depth;

}

@property (nonatomic,readonly) WebBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned depth;                      //@synthesize depth=_depth - In the implementation block
-(void)dealloc;
-(id)title;
-(id)_initWithBookmark:(id)arg1 depth:(unsigned)arg2 ;
-(unsigned)depth;
-(id)bookmark;
@end
