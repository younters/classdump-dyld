/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:18:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@interface IAError : NSError {

	char _shouldPersistOnCancel;

}
+(id)errorWithCode:(int)arg1 underlyingError:(id)arg2 parameters:(id)arg3 ;
+(void)initialize;
-(id)retryActorForTarget:(id)arg1 ;
-(char)shouldRemainPersistent;
-(id)initWithCode:(long long)arg1 userInfo:(id)arg2 remainPersistent:(char)arg3 ;
-(char)retry;
-(char)canRetry;
@end
