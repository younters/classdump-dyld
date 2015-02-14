/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateIssues.framework/Versions/A/Frameworks/CrashReporter.framework/Versions/A/CrashReporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PLCrashReportSymbolInfo : NSObject {

	NSString* _symbolName;
	unsigned long long _startAddress;
	unsigned long long _endAddress;

}

@property (nonatomic,readonly) NSString * symbolName;                        //@synthesize symbolName=_symbolName - In the implementation block
@property (nonatomic,readonly) unsigned long long startAddress;              //@synthesize startAddress=_startAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long endAddress;                //@synthesize endAddress=_endAddress - In the implementation block
-(unsigned long long)endAddress;
-(id)initWithSymbolName:(id)arg1 startAddress:(unsigned long long)arg2 endAddress:(unsigned long long)arg3 ;
-(NSString *)symbolName;
-(unsigned long long)startAddress;
-(void)dealloc;
@end
