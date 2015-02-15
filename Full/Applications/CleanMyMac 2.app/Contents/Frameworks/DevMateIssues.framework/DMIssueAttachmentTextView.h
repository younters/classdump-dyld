/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateIssues.framework/DevMateIssues
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DevMateIssues/DevMateIssues-Structs.h>
#import <AppKit/NSTextView.h>

@protocol DMControlResponderProtocol;
@interface DMIssueAttachmentTextView : NSTextView {

	char _isInDragSession;
	char _shouldCopyWhileDragging;
	id<DMControlResponderProtocol> _responderDelegate;

}

@property (assign) id<DMControlResponderProtocol> responderDelegate;              //@synthesize responderDelegate=_responderDelegate - In the implementation block
@property (assign,nonatomic) char isInDragSession;                                //@synthesize isInDragSession=_isInDragSession - In the implementation block
@property (assign,nonatomic) char shouldCopyWhileDragging;                        //@synthesize shouldCopyWhileDragging=_shouldCopyWhileDragging - In the implementation block
-(id<DMControlResponderProtocol>)responderDelegate;
-(char)isInDragSession;
-(char)shouldCopyWhileDragging;
-(void)attachFile:(id)arg1 ;
-(void)setIsInDragSession:(char)arg1 ;
-(void)setShouldCopyWhileDragging:(char)arg1 ;
-(id)allAttachedURLs;
-(id)plainTextWithAttachments;
-(char)isAttachedFileCell:(id)arg1 ;
-(id)writablePasteboardTypesForAttachedFileCell:(id)arg1 ;
-(char)writeAttachedFileCell:(id)arg1 toPasteboard:(id)arg2 type:(id)arg3 ;
-(void)setResponderDelegate:(id<DMControlResponderProtocol>)arg1 ;
-(char)resignFirstResponder;
-(void)awakeFromNib;
-(id)writablePasteboardTypes;
-(char)dragSelectionWithEvent:(id)arg1 offset:(CGSize)arg2 slideBack:(char)arg3 ;
-(id)preferredPasteboardTypeFromArray:(id)arg1 restrictedToTypesFromArray:(id)arg2 ;
-(unsigned long long)dragOperationForDraggingInfo:(id)arg1 type:(id)arg2 ;
-(char)readSelectionFromPasteboard:(id)arg1 type:(id)arg2 ;
@end
