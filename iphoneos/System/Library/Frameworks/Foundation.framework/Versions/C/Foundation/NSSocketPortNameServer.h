/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSPortNameServer.h>

@interface NSSocketPortNameServer : NSPortNameServer

@property (assign) unsigned short defaultNameServerPortNumber; 
+(id)sharedInstance;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(id)portForName:(id)arg1 host:(id)arg2 ;
-(char)registerPort:(id)arg1 name:(id)arg2 ;
-(id)portForName:(id)arg1 host:(id)arg2 nameServerPortNumber:(unsigned short)arg3 ;
-(char)registerPort:(id)arg1 name:(id)arg2 nameServerPortNumber:(unsigned short)arg3 ;
-(void)setDefaultNameServerPortNumber:(unsigned short)arg1 ;
-(unsigned short)defaultNameServerPortNumber;
-(id)portForName:(id)arg1 ;
-(char)removePortForName:(id)arg1 ;
@end
