/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCDateParser : NSObject
+(id)_dateFromString:(id)arg1 imapFirst:(char)arg2 ;
+(id)_imapDateFormatter;
+(id)_dateStringByStrippingCommentsFromString:(id)arg1 ;
+(id)_commonDateFormatters;
+(id)_fallbackDateFormaters;
+(id)dateFromIMAPDateString:(id)arg1 ;
+(id)dateFromInternetMessageDateString:(id)arg1 ;
@end
