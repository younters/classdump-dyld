/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Instruments.app/Contents/Frameworks/DTInstrumentsX.framework/DTInstrumentsX
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DTInstrumentsX/XRUIModelChangeObserver.h>

@interface XRUIModel : NSObject <XRUIModelChangeObserver>
-(void)modelDidChange:(id)arg1 ;
-(void)addChangeObserver:(id)arg1 ;
-(void)notifyChange;
-(id)generateMementoForCurrentState;
-(void)replaceStateWithMemento:(id)arg1 ;
-(void)removeChangeObserver:(id)arg1 ;
-(void)registerSubXRUIModel:(id)arg1 ;
-(void)restoreState:(id)arg1 ;
-(id)saveState;
-(void)dealloc;
@end
