/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/mds
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mds/MDSMain.h>

@interface MDSServerMain : MDSMain
-(void)startProcessShutdown:(int)arg1 ;
-(BOOL)blocksShutdown;
-(void)processClean;
-(void)setMachPort:(unsigned)arg1 ;
-(unsigned)machPort;
-(id)init;
-(void)shutdown;
@end
