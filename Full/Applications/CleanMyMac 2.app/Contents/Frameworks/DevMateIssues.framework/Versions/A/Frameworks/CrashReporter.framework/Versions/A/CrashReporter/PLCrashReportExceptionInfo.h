/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateIssues.framework/Versions/A/Frameworks/CrashReporter.framework/Versions/A/CrashReporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PLCrashReportExceptionInfo : NSObject {

	NSString* _name;
	NSString* _reason;
	NSArray* _stackFrames;

}

@property (nonatomic,readonly) NSString * exceptionName;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * exceptionReason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSArray * stackFrames;                   //@synthesize stackFrames=_stackFrames - In the implementation block
-(id)initWithExceptionName:(id)arg1 reason:(id)arg2 ;
-(id)initWithExceptionName:(id)arg1 reason:(id)arg2 stackFrames:(id)arg3 ;
-(NSArray *)stackFrames;
-(NSString *)exceptionName;
-(NSString *)exceptionReason;
-(void)dealloc;
@end
