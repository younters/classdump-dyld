/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <RemoteViewServices/RemoteViewServices-Structs.h>
@class NSString;

@interface RVSLogger : NSObject {

	NSString* _name;

}
+(id)loggerWithName:(id)arg1 ;
+(id)defaultLogger;
-(void)debug:(id)arg1 ;
-(void)_logMessage:(id)arg1 values:(_va_list_tag*)arg2 ;
-(id)_initWithName:(id)arg1 ;
-(void)dealloc;
@end
