/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUSourceInfo : NSObject {

	NSString* _path;
	NSString* _fileName;
	unsigned _lineNumber;

}
-(id)initWithSymbolicator:(CSTypeRef)arg1 address:(unsigned long long)arg2 ;
-(unsigned)lineNumber;
-(void)dealloc;
-(id)path;
-(id)fileName;
@end
