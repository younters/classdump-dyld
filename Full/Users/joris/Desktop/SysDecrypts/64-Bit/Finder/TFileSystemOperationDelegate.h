/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TFileSystemOperationDelegateProtocol.h>

@class NSString;

@interface TFileSystemOperationDelegate : NSObject <TFileSystemOperationDelegateProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newDelegate;
-(int)asyncNodeOperation:(id)arg1 errorNotification:(const OperationMonitor*)arg2 error:(const OperationErrorRecord*)arg3 reply:(NodeEventReply*)arg4 ;
-(int)asyncNodeOperation:(id)arg1 completedNotification:(const OperationMonitor*)arg2 ;
@end
