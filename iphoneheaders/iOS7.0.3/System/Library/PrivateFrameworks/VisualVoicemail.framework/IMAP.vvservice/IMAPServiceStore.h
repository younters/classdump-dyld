/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.vvservice/IMAP
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/MFLibraryIMAPStore.h>

@interface IMAPServiceStore : MFLibraryIMAPStore {

	struct {
		unsigned settingLocalValidity : 1;
	}  _imapServiceStoreFlags;

}
-(unsigned)connectionBodyDataReadChunkSize:(id)arg1 ;
-(void)setMailboxUidValidity:(unsigned)arg1 ;
-(BOOL)shouldRetryEmptyBodyDownloadForMessage:(id)arg1 ;
-(void)updateDeletedCount;
-(void)messagesAdded:(id)arg1 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)doCompact;
@end
