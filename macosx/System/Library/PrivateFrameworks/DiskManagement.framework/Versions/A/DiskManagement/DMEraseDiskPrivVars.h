/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DiskManagement.framework/Versions/A/DiskManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DiskManagement/DiskManagement-Structs.h>
@class DMManager;

@interface DMEraseDiskPrivVars : NSObject {

	DASessionRef _clientDASession;
	DMManager* _dmManager;
	char _sessionUUID[40];
	unsigned _sessionF2Tport;
	unsigned _sessionT2Fport;

}
@end
