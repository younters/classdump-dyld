/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFPOPConnectionDelegate <NSObject>
@required
-(char)connectionShouldPrefetchMessages;
-(long long)connection:(id)arg1 willRetrieveMessageNumber:(unsigned long long)arg2 header:(id)arg3 size:(unsigned long long)arg4;
-(void)connection:(id)arg1 receivedNumberOfBytes:(unsigned long long)arg2;
-(void)connection:(id)arg1 didRetrieveData:(id)arg2 forMessageNumber:(unsigned long long)arg3;

@end
