/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/Frameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ACDEClient/ACDEClient-Structs.h>
@interface ACFNetworkInterface : NSObject {

	SCNetworkInterfaceRef _ref;

}

@property (readonly) SCNetworkInterfaceRef ref;              //@synthesize ref=_ref - In the implementation block
+(id)interfaceWithInterfaceRef:(SCNetworkInterfaceRef)arg1 interfaceType:(id)arg2 ;
+(id)interfaceWithInterfaceRef:(SCNetworkInterfaceRef)arg1 ;
+(id)interfaceWithInterfaceType:(id)arg1 ;
-(id)BSDName;
-(id)initWithInterfaceRef:(SCNetworkInterfaceRef)arg1 ;
-(id)initWithInterfaceRef:(SCNetworkInterfaceRef)arg1 interfaceType:(id)arg2 ;
-(id)initWithInterfaceType:(id)arg1 ;
-(id)interfaceType;
-(id)supportedInterfaceTypes;
-(id)supportedProtocolTypes;
-(id)underlyingInterfaceForInterfaceType:(id)arg1 ;
-(id)underlyingInterface;
-(id)MACAddress;
-(SCNetworkInterfaceRef)ref;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)localizedDisplayName;
@end
