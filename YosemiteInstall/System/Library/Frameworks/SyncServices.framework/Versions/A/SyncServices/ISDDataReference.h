/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/SyncServices-Structs.h>
#import <CoreFoundation/NSData.h>

@class ISDDataWrapper, NSData;

@interface ISDDataReference : NSData {

	ISDDataWrapper* _dataWrapper;
	NSData* _data;

}
+(id)dataReferenceWithDataWrapper:(id)arg1 ;
+(id)dataReferenceWithData:(id)arg1 ;
+(void)setCopyDataReferencesAsData:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(const void*)bytes;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isd_isAttributeSelfConsistent;
-(id)dataWrapper;
-(char)isd_isEqual:(id)arg1 ;
-(id)_data;
-(id)initWithDataWrapper:(id)arg1 ;
-(char)dataFaultFailure;
@end
