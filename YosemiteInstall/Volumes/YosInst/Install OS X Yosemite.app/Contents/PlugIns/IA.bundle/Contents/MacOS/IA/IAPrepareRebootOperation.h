/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:59:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IA/IASetupOperation.h>

@interface IAPrepareRebootOperation : IASetupOperation {

	id _delegate;

}
-(void)_queueMessages;
-(char)extractBootBits;
-(char)_writeLogFile;
-(id)_diskLayoutDescription;
-(id)mountDiskImageWithPath:(id)arg1 ;
-(char)_configureProductForOSIWithBlessedMountPoint:(id)arg1 ;
-(id)_durableProductPathDict;
-(char)createBootPlist;
-(void)startWithDelegate:(id)arg1 ;
-(double)totalEstimatedTime;
-(double)progressPercentage;
@end
