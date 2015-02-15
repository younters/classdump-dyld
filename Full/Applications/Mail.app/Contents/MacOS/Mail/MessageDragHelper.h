/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/NSPasteboardItemDataProvider.h>

@class NSMapTable, NSString;

@interface MessageDragHelper : NSObject <NSPasteboardItemDataProvider> {

	NSMapTable* _messagesByPasteboardItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(id)messagesTargetedByItems:(id)arg1 ;
-(id)pasteboardWriterForMessages:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3 ;
@end
