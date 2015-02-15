/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class Protocol, NSString;

@interface _WKRemoteObjectInterface : NSObject {

	HashMap<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow>, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > >* _allowedArgumentClasses;
	Protocol* _protocol;
	NSString* _identifier;

}

@property (readonly) Protocol * protocol;                //@synthesize protocol=_protocol - In the implementation block
@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)remoteObjectInterfaceWithProtocol:(id)arg1 ;
-(Protocol *)protocol;
-(id)initWithProtocol:(id)arg1 identifier:(id)arg2 ;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ;
-(id)_methodSignatureForSelector:(SEL)arg1 ;
-(const Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow>*)_allowedArgumentClassesForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
@end
