/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:21:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Burn A Disc.action/Contents/MacOS/Burn A Disc
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class DRBurn, NSDictionary;

@interface DRBurnAction : AMBundleAction {

	id _deviceChooser;
	DRBurn* _burn;
	char _burnComplete;
	NSDictionary* _burnErrorInfo;

}
-(char)_askUserToInsert:(unsigned long long)arg1 blankMedia:(char)arg2 intoDevice:(id)arg3 ;
-(void)_checkTrayState:(id)arg1 ;
-(void)deviceSelected:(id)arg1 ;
-(void)burnStatusNotification:(id)arg1 ;
-(long long)_askUserTo:(id)arg1 moreInfo:(id)arg2 withDevice:(id)arg3 ;
-(void)_burnTrack:(id)arg1 toDevice:(id)arg2 ;
-(id)_burnForDevice:(id)arg1 ;
-(void)_askUser:(id)arg1 ;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)stop;
-(void)awakeFromNib;
@end
