/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WVRecentsDataSource <NSObject>
@required
-(unsigned long long)numberOfRecentsItems;
-(void)performRecentsActionAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3 changeMode:(char)arg4;
-(id)recentsValueForKey:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3;

@end
