/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <passd/passd-Structs.h>
#import <passd/WDWebServiceConnectionTask.h>

@class NSArray;

@interface WDLogTask : WDWebServiceConnectionTask {

	NSArray* _logs;

}

@property (nonatomic,retain) NSArray * logs;              //@synthesize logs=_logs - In the implementation block
+(id)taskWithWebService:(id)arg1 error:(id)arg2 ;
-(id)logs;
-(BOOL)coalescesWithTaskSubclass:(Class)arg1 ;
-(int)actionForInactiveTask:(id)arg1 ;
-(void)mergeWithNewerTask:(id)arg1 ;
-(int)actionForActiveTask:(id)arg1 ;
-(unsigned)numberOfBackoffLevels;
-(const SCD_Struct_WD2*)backoffLevels;
-(void)handleResponse:(id)arg1 data:(id)arg2 ;
-(id)endpointComponents;
-(void)setLogs:(id)arg1 ;
-(BOOL)_matchesLogTask:(id)arg1 ;
-(BOOL)_hasRoomForAdditionalLogs;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)method;
-(void)handleError:(id)arg1 ;
-(id)bodyDictionary;
@end
