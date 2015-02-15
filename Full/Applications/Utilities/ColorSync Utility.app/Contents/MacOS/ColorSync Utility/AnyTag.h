/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:05:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/ColorSync Utility.app/Contents/MacOS/ColorSync Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ColorSync Utility/ColorSync Utility-Structs.h>
#import <ColorSync Utility/CSProfTag.h>

@class NSTextView;

@interface AnyTag : CSProfTag {

	NSTextView* _textView;
	ColorSyncProfileRef _prof;
	unsigned _tagType;
	unsigned _dataType;
	unsigned _dataSize;
	unsigned _curOffset;
	char _continue;

}
-(void)setProfile:(ColorSyncProfileRef)arg1 tagType:(unsigned)arg2 dataType:(unsigned)arg3 ;
-(char)canDisplayTagType:(unsigned)arg1 dataType:(unsigned)arg2 dataSize:(unsigned)arg3 ;
-(void)thread:(id)arg1 ;
@end
