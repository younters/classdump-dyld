/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMAPMailboxDelegate <NSObject>
@required
-(void)updateCountFromMailbox:(id)arg1 fromIDLE:(char)arg2;
-(void)updateUidValidityFromMailbox:(id)arg1;
-(void)processResponsesFromMailbox:(id)arg1;
-(void)updateSelectedGatewayFromMailbox:(id)arg1;
-(unsigned long long)allegedHighestModificationSequenceForMailbox:(id)arg1;
-(unsigned long long)computedHighestModificationSequenceForMailbox:(id)arg1;
-(void)updateComputedHighestModificationSequence:(unsigned long long)arg1 forMailbox:(id)arg2;

@end
