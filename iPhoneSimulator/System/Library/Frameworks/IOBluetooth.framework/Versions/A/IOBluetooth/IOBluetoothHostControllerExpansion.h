/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface IOBluetoothHostControllerExpansion : NSObject {

	NSMutableDictionary* outstandingRequests;
	NSString* delegateClassString;

}

@property (retain) NSMutableDictionary * outstandingRequests; 
@property (retain) NSString * delegateClassString; 
-(void)setOutstandingRequests:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)outstandingRequests;
-(NSString *)delegateClassString;
-(void)setDelegateClassString:(NSString *)arg1 ;
-(void)dealloc;
@end
