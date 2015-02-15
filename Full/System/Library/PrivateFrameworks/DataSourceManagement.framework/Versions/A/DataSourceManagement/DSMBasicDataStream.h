/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:16:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataSourceManagement.framework/Versions/A/DataSourceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataSourceManagement/DSMDataStream.h>
#import <DataSourceManagement/NSCoding.h>

@class DSMDataStreamDescription, NSArray, NSString;

@interface DSMBasicDataStream : NSObject <DSMDataStream, NSCoding> {

	int _dataStreamType;
	DSMDataStreamDescription* _dataStreamDescription;
	NSArray* _dataStreamElements;

}

@property (readonly) DSMDataStreamDescription * dataStreamDescription;              //@synthesize dataStreamDescription=_dataStreamDescription - In the implementation block
@property (readonly) NSArray * dataStreamElements;                                  //@synthesize dataStreamElements=_dataStreamElements - In the implementation block
@property (readonly) int dataStreamType;                                            //@synthesize dataStreamType=_dataStreamType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DSMDataStreamDescription *)dataStreamDescription;
-(int)dataStreamType;
-(id)initWithDataStreamDescription:(id)arg1 andDataStreamType:(int)arg2 ;
-(NSArray *)dataStreamElements;
-(void)addStreamDataElement:(id)arg1 ;
-(id)_initWithDataStream:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
