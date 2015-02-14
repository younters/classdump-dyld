/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/NSCoding.h>

@class NSString;

@interface DDLocation : NSObject <NSCoding> {

	NSString* _fileName;
	int _firstLine;
	int _firstColumn;
	int _lastLine;
	int _lastColumn;

}

@property (copy,readonly) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (readonly) int firstLine;                         //@synthesize firstLine=_firstLine - In the implementation block
@property (readonly) int firstColumn;                       //@synthesize firstColumn=_firstColumn - In the implementation block
@property (readonly) int lastLine;                          //@synthesize lastLine=_lastLine - In the implementation block
@property (readonly) int lastColumn;                        //@synthesize lastColumn=_lastColumn - In the implementation block
-(int)firstLine;
-(id)initWithFileName:(id)arg1 position:(_DDExpressionPosition)arg2 ;
-(id)initWithFileName:(id)arg1 firstLine:(int)arg2 firstColumn:(int)arg3 lastLine:(int)arg4 lastColumn:(int)arg5 ;
-(int)firstColumn;
-(int)lastLine;
-(void)dealloc;
-(id)description;
-(_DDExpressionPosition)position;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)lastColumn;
-(NSString *)fileName;
@end
