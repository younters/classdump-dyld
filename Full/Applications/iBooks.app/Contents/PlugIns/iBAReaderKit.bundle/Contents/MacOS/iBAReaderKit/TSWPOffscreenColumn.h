/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSWPOffscreenColumn <NSObject>
@property (nonatomic,readonly) unsigned long long startCharIndex; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) unsigned long long startAnchoredCharIndex; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned long long nextWidowPullsDownFromCharIndex; 
@required
-(unsigned long long)startCharIndex;
-(NSRange)anchoredRange;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned long long)arg3;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(unsigned long long)startAnchoredCharIndex;
-(NSRange)range;

@end
