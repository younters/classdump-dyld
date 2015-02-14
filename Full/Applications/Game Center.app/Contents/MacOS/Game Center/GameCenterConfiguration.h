/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Game Center.app/Contents/MacOS/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/MBSetupAssistantDelegateConfiguration.h>

@interface GameCenterConfiguration : NSObject <MBSetupAssistantDelegateConfiguration> {

	char _cancelled;

}

@property (assign) char cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(id)delegateIdentifier;
-(id)delegateSetupRequest;
-(void)completeSetupWithResponse:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)terminateSetupCompletion;
-(void)setCancelled:(char)arg1 ;
-(char)cancelled;
@end
