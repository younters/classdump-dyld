/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SDPQueryCallbackDispatcher : NSObject {

	id mTarget;
	void* mRefCon;

}
-(oneway void)sdpQueryComplete:(nO@)arg1 status:(int)arg2 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 ;
@end
