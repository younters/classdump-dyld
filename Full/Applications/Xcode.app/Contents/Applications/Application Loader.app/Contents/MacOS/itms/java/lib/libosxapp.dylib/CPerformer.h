/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/MacOS/itms/java/lib/libosxapp.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CPerformer : NSObject {

	id fTarget;
	SEL fSelector;
	id fArg;
	char fWait;

}
-(void)performCompatible;
-(void)_performCompatible:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 arg:(id)arg3 wait:(char)arg4 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 arg:(id)arg3 ;
-(void)dealloc;
-(void)perform;
@end
