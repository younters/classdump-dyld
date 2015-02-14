/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/StoreFoundation-Structs.h>
#import <StoreFoundation/NSSecureCoding.h>
#import <StoreFoundation/NSCopying.h>

@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <NSSecureCoding, NSCopying> {

	SSOperationProgress* _operationProgress;

}

@property (readonly) long long phaseType; 
@property (readonly) long long progressValue; 
@property (readonly) long long totalProgressValue; 
@property (readonly) long long progressUnits; 
@property (readonly) double estimatedSecondsRemaining; 
@property (readonly) float progressChangeRate; 
@property (readonly) SSOperationProgress * operationProgress; 
+(char)supportsSecureCoding;
-(long long)progressValue;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSOperationProgress *)operationProgress;
-(long long)phaseType;
-(id)initWithOperationProgress:(id)arg1 ;
-(double)estimatedSecondsRemaining;
-(long long)progressUnits;
-(float)progressChangeRate;
-(long long)totalProgressValue;
@end
