/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CMMapper.h>

@class WDText;

@interface WMSectionContentMapper : CMMapper {

	WDText* wdText;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDText:(id)arg1 parent:(id)arg2 ;
-(void)updateTextFrameState:(id)arg1 atIndex:(int)arg2 ;
-(void)mapTextFrameAt:(id)arg1 withState:(id)arg2 ;
-(id)paragraphAtIndex:(int)arg1 ;
-(void)mapTextFrameStyleTo:(id)arg1 withState:(id)arg2 ;
@end
