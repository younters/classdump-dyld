/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>

@protocol OS_dispatch_source;
@class NSXPCListener, NSObject, NSMutableDictionary;

@interface TIKeyboardInputManagerServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject<OS_dispatch_source>* _memoryPressureSource;
	NSMutableDictionary* _availableInputManagers;

}

@property (nonatomic,readonly) NSMutableDictionary * availableInputManagers;              //@synthesize availableInputManagers=_availableInputManagers - In the implementation block
+(id)sharedKeyboardInputManagerServer;
-(id)availableInputManagers;
-(id)createMemoryPressureSourceForCache:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
