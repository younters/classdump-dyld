/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:59:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IAErrorRetryActor;

@interface IARecoveryAttempter : NSObject {

	int _code;
	IAErrorRetryActor* _actor;

}
-(id)actor;
-(char)tryAgainWithError:(id)arg1 ;
-(void)_launchDiskUtilityForError:(id)arg1 ;
-(void)_launchAppStoreForError:(id)arg1 ;
-(void)_launchNetworkDiagnosticsForError:(id)arg1 ;
-(id)initWithErrorCode:(int)arg1 ;
-(void)dealloc;
-(char)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
@end
