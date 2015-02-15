/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MCMessage, NSString, NSDictionary, NSImage, NSOrderedSet, MFCriterion, NSIndexSet;

@interface MessageListObjectProxy : NSObject {

	char _showContactPhotos;
	char _isOpen;
	char _isVIP;
	char _selected;
	char _showRecipient;
	char _isDeleted;
	unsigned _flags;
	MCMessage* _message;
	NSString* _addressee;
	NSString* _dateString;
	NSString* _subject;
	NSDictionary* _unreadImages;
	NSDictionary* _replyImages;
	NSDictionary* _attachmentImages;
	NSImage* _statusImage;
	NSImage* _selectedPhoto;
	NSImage* _unselectedPhoto;
	unsigned long long _photoSize;
	NSString* _mailbox;
	NSString* _size;
	NSOrderedSet* _flagImages;
	NSString* _snippetString;
	unsigned long long _threadCount;
	MFCriterion* _mailboxCriterion;
	long long _backgroundStyle;
	NSIndexSet* _flagColors;
	unsigned long long _messageSize;
	NSString* _snippet;
	NSString* _toCcString;

}

@property (nonatomic,readonly) MCMessage * message;                              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                          //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic,__weak) MFCriterion * mailboxCriterion;              //@synthesize mailboxCriterion=_mailboxCriterion - In the implementation block
@property (assign,nonatomic) char showRecipient;                                 //@synthesize showRecipient=_showRecipient - In the implementation block
@property (assign,nonatomic) char selected;                                      //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) unsigned flags;                                     //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned long long messageSize;                     //@synthesize messageSize=_messageSize - In the implementation block
@property (nonatomic,copy) NSIndexSet * flagColors;                              //@synthesize flagColors=_flagColors - In the implementation block
@property (nonatomic,copy) NSString * snippet;                                   //@synthesize snippet=_snippet - In the implementation block
@property (assign,nonatomic) unsigned long long photoSize;                       //@synthesize photoSize=_photoSize - In the implementation block
@property (assign,nonatomic) char isDeleted;                                     //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,copy) NSString * addressee;                                 //@synthesize addressee=_addressee - In the implementation block
@property (nonatomic,copy) NSString * subject;                                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * dateString;                                //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,copy) NSString * mailbox;                                   //@synthesize mailbox=_mailbox - In the implementation block
@property (nonatomic,copy) NSString * size;                                      //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSImage * unreadImage; 
@property (nonatomic,readonly) NSImage * attachmentImage; 
@property (nonatomic,readonly) NSImage * replyImage; 
@property (nonatomic,readonly) NSImage * replyAlternateImage; 
@property (nonatomic,retain) NSImage * statusImage;                              //@synthesize statusImage=_statusImage - In the implementation block
@property (nonatomic,readonly) NSImage * photo; 
@property (nonatomic,readonly) NSImage * firstFlag; 
@property (nonatomic,copy) NSOrderedSet * flagImages;                            //@synthesize flagImages=_flagImages - In the implementation block
@property (assign,nonatomic) char isOpen;                                        //@synthesize isOpen=_isOpen - In the implementation block
@property (assign,nonatomic) unsigned long long threadCount;                     //@synthesize threadCount=_threadCount - In the implementation block
@property (nonatomic,copy) NSString * toCcString;                                //@synthesize toCcString=_toCcString - In the implementation block
@property (nonatomic,copy) NSString * snippetString;                             //@synthesize snippetString=_snippetString - In the implementation block
@property (assign,nonatomic) char isVIP;                                         //@synthesize isVIP=_isVIP - In the implementation block
@property (assign,nonatomic) char showContactPhotos; 
@property (nonatomic,retain) NSDictionary * unreadImages;                        //@synthesize unreadImages=_unreadImages - In the implementation block
@property (nonatomic,retain) NSDictionary * replyImages;                         //@synthesize replyImages=_replyImages - In the implementation block
@property (nonatomic,retain) NSDictionary * attachmentImages;                    //@synthesize attachmentImages=_attachmentImages - In the implementation block
@property (nonatomic,retain) NSImage * selectedPhoto;                            //@synthesize selectedPhoto=_selectedPhoto - In the implementation block
@property (nonatomic,retain) NSImage * unselectedPhoto;                          //@synthesize unselectedPhoto=_unselectedPhoto - In the implementation block
+(void)_resetDateFormats:(id)arg1 ;
+(id)keyPathsForValuesAffectingPhoto;
+(id)keyPathsForValuesAffectingUnreadImage;
+(id)keyPathsForValuesAffectingReplyImage;
+(id)keyPathsForValuesAffectingReplyAlternateImage;
+(id)keyPathsForValuesAffectingAttachmentImage;
+(id)keyPathsForValuesAffectingFirstFlag;
+(void)initialize;
-(MFCriterion *)mailboxCriterion;
-(NSIndexSet *)flagColors;
-(void)setFlagColors:(NSIndexSet *)arg1 ;
-(void)_vipSendersChanged:(id)arg1 ;
-(void)_updateContactPhotoVisibilityFromDefaults;
-(void)_displayNameChanged:(id)arg1 ;
-(void)_updateAddressee;
-(void)_updateIsVIP;
-(void)_updateDate;
-(void)_updateSubject;
-(void)_updateUnreadImages;
-(void)_updateReplyImages;
-(void)_updateAttachmentImages;
-(void)_updateStatusImage;
-(void)_updatePhoto;
-(void)_updateMailbox;
-(void)_updateFlagImages;
-(void)_updateSnippet;
-(void)_updateThreadData;
-(void)_updateToCcString;
-(NSImage *)selectedPhoto;
-(NSImage *)unselectedPhoto;
-(void)_photoAvailable:(id)arg1 ;
-(void)setSelectedPhoto:(NSImage *)arg1 ;
-(void)setUnselectedPhoto:(NSImage *)arg1 ;
-(char)showRecipient;
-(void)setAddressee:(NSString *)arg1 ;
-(id)_todayDateFormatter;
-(id)_defaultDateFormatter;
-(void)setDateString:(NSString *)arg1 ;
-(void)setShowContactPhotos:(char)arg1 ;
-(id)_addressForPhoto;
-(id)_relevantAddresses;
-(void)setIsVIP:(char)arg1 ;
-(id)_initializeUnreadImages;
-(char)isVIP;
-(void)setUnreadImages:(NSDictionary *)arg1 ;
-(void)setReplyImages:(NSDictionary *)arg1 ;
-(char)_messageHasAttachments:(id)arg1 ;
-(void)setAttachmentImages:(NSDictionary *)arg1 ;
-(void)setSnippetString:(NSString *)arg1 ;
-(void)setThreadCount:(unsigned long long)arg1 ;
-(void)setToCcString:(NSString *)arg1 ;
-(char)showContactPhotos;
-(id)_displayNameForPhoto;
-(id)_unknownSenderImageSelected:(char)arg1 ;
-(unsigned long long)photoSize;
-(id)_relevantAddressesForMessage:(id)arg1 ;
-(id)_messageForPhoto;
-(id)_iconsForFlags:(id)arg1 ;
-(void)setFlagImages:(NSOrderedSet *)arg1 ;
-(NSDictionary *)unreadImages;
-(NSDictionary *)replyImages;
-(NSDictionary *)attachmentImages;
-(NSOrderedSet *)flagImages;
-(void)setMailboxCriterion:(MFCriterion *)arg1 ;
-(void)setShowRecipient:(char)arg1 ;
-(void)setPhotoSize:(unsigned long long)arg1 ;
-(NSImage *)unreadImage;
-(NSImage *)replyImage;
-(NSImage *)replyAlternateImage;
-(NSImage *)attachmentImage;
-(NSImage *)firstFlag;
-(NSString *)addressee;
-(NSString *)snippetString;
-(unsigned long long)threadCount;
-(NSString *)toCcString;
-(NSString *)dateString;
-(char)selected;
-(unsigned long long)messageSize;
-(void)setIsDeleted:(char)arg1 ;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setIsOpen:(char)arg1 ;
-(void)setSnippet:(NSString *)arg1 ;
-(NSString *)snippet;
-(NSImage *)photo;
-(id)init;
-(void)dealloc;
-(NSString *)size;
-(void)setSize:(NSString *)arg1 ;
-(void)update;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(char)isOpen;
-(MCMessage *)message;
-(void)setSelected:(char)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(char)isDeleted;
-(NSString *)mailbox;
-(void)setMailbox:(NSString *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(unsigned)flags;
-(void)_updateSize;
-(void)setStatusImage:(NSImage *)arg1 ;
-(NSImage *)statusImage;
@end
