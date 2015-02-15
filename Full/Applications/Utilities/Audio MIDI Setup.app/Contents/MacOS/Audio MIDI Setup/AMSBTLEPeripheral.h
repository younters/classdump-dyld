/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:43:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Audio MIDI Setup.app/Contents/MacOS/Audio MIDI Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBPeripheral, NSString, CBCentralManager;

@interface AMSBTLEPeripheral : NSObject {

	CBPeripheral* peripheral;
	NSString* uuid;
	NSString* name;
	CBCentralManager* centralManager;
	double lastSeen;
	char inputAvailable;
	char outputAvailable;
	char online;
	char shouldDisconnect;
	char available;
	char _changingState;

}

@property (readonly) CBPeripheral * peripheral; 
@property (retain,readonly) NSString * uuid; 
@property (retain) NSString * name; 
@property (assign) double lastSeen; 
@property (assign) char inputAvailable; 
@property (assign) char outputAvailable; 
@property (getter=isOnline) char online; 
@property (getter=isChangingState) char changingState;              //@synthesize changingState=_changingState - In the implementation block
@property (getter=isAvailable) char available; 
-(char)isOnline;
-(void)setChangingState:(char)arg1 ;
-(char)inputAvailable;
-(char)outputAvailable;
-(char)isChangingState;
-(id)initWithID:(id)arg1 name:(id)arg2 manager:(id)arg3 ;
-(void)setInputAvailable:(char)arg1 ;
-(void)setOutputAvailable:(char)arg1 ;
-(void)setOnline:(char)arg1 ;
-(char)updateAvailableStateChanged;
-(NSString *)uuid;
-(void)setAvailable:(char)arg1 ;
-(char)hidden;
-(char)disconnect;
-(void)setLastSeen:(double)arg1 ;
-(double)lastSeen;
-(CBPeripheral *)peripheral;
-(char)connect;
-(char)isAvailable;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
