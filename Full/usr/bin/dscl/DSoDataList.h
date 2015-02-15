/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/dscl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <dscl/dscl-Structs.h>
@class DSoDirectory;

@interface DSoDataList : NSObject {

	DSoDirectory* mDir;
	SCD_Struct_DS1* mList;

}
-(unsigned long long)getDataLength;
-(id)initWithDir:(id)arg1 value:(id)arg2 ;
-(id)initWithDir:(id)arg1 values:(id)arg2 ;
-(id)initWithDir:(id)arg1 cStrings:(const char*)arg2 ;
-(SCD_Struct_DS2*)dsDataList;
-(id)initWithDir:(id)arg1 string:(id)arg2 ;
-(id)initWithDir:(id)arg1 strings:(id)arg2 ;
-(id)initWithDir:(id)arg1 cString:(const char*)arg2 ;
-(id)initWithDir:(id)arg1 separator:(char)arg2 pattern:(id)arg3 ;
-(id)initWithDataList:(id)arg1 ;
-(id)initWithDir:(id)arg1 dsDataList:(SCD_Struct_DS2*)arg2 ;
-(void)append:(id)arg1 ;
-(unsigned long long)getCount;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)objectAtIndex:(unsigned long long)arg1 ;
@end
