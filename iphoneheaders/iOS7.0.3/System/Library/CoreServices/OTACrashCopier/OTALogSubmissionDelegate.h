/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OTALogSubmissionDelegate
@required
-(void)submission:(id)arg1 failedToAddLog:(id)arg2 withError:(id)arg3;
-(void)submission:(id)arg1 willSendRequest:(id)arg2 withRouting:(int)arg3;
-(void)submission:(id)arg1 finishedWithResponse:(id)arg2 data:(id)arg3;
-(void)submission:(id)arg1 failedWithError:(id)arg2;
@end
