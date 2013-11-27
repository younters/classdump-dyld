/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Resources/fud
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@protocol FudPlugin, NSCoding;
@class NSString, FudHistory, FudStateMachine, , NSData;

@interface FudStorageItem : NSObject <NSCoding> {

	NSString* pluginName;
	NSString* filterName;
	FudHistory* history;
	FudStateMachine* stateMachine;
	<FudPlugin>* plugin;
	NSData* pluginData;
	NSString* pluginVersion;
	<NSCoding>* _context;

}

@property (readonly) NSString * pluginName; 
@property (readonly) NSString * filterName; 
@property (retain) <NSCoding> * context;                        //@synthesize context=_context - In the implementation block
@property (retain) FudHistory * history; 
@property (retain) FudStateMachine * stateMachine; 
@property (readonly) NSData * pluginData; 
@property (readonly) NSString * pluginVersion; 
@property (retain) <FudPlugin> * plugin; 
-(id)pluginName;
-(id)filterName;
-(id)initWithPluginName:(id)arg1 filterName:(id)arg2 ;
-(id)pluginData;
-(id)pluginVersion;
-(id)getPluginInstanceFromData;
-(BOOL)setPlugin:(id)arg1 withVersion:(id)arg2 ;
-(id)plugin;
-(BOOL)syncPluginWithData;
-(void)setPlugin:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)stateMachine;
-(void)setStateMachine:(id)arg1 ;
-(id)history;
-(void)setHistory:(id)arg1 ;
@end
