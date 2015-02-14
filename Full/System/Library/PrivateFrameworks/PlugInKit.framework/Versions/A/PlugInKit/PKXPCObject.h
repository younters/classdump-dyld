/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/Versions/A/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PlugInKit/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PKXPCObject : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _object;

}

@property (retain) NSObject*<OS_xpc_object> object;              //@synthesize object=_object - In the implementation block
+(char)supportsSecureCoding;
+(id)object:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
@end
