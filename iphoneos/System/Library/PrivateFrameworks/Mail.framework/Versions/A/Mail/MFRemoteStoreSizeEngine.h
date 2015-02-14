/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MFSizeEngine.h>

@class NSMutableDictionary, NSMutableSet;

@interface MFRemoteStoreSizeEngine : MFSizeEngine {

	NSMutableDictionary* _usageByMailbox;
	NSMutableSet* _mailboxesToSize;

}
-(id)initWithAccount:(id)arg1 ;
-(id)popMailboxToSize;
-(void)_getSizeForMailbox:(id)arg1 ;
-(void)addMailboxesToSizeFromArray:(id)arg1 ;
-(unsigned long long)countOfMailboxesToSize;
-(char)_changeUsageInfo:(SCD_Struct_MF9*)arg1 forMailbox:(id)arg2 refetchQuotas:(char)arg3 ;
-(void)_sizeChangedForMailbox:(id)arg1 ;
-(void)_mailboxSizeChanged:(id)arg1 ;
-(void)_mailboxBecameInvalid:(id)arg1 ;
-(char)_shouldStartWorkerThread;
-(id)allUsageByMailboxKeys;
-(char)_prepareToRefresh;
-(void)_refetchListing:(id)arg1 ;
-(id)usageForMailbox:(id)arg1 ;
-(void)_handleMailboxSizeChanged:(id)arg1 ;
-(void)dealloc;
@end
