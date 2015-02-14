/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMRenderingFoundation/IMRenderingFoundation-Structs.h>
#import <IMFoundation/IMFromSuperParserContext.h>

@class NSMutableAttributedString, NSColor;

@interface SuperToAppKitParserContext : IMFromSuperParserContext {

	NSMutableAttributedString* _appKitAttributedString;
	NSColor* _bodyBackgroundColor;
	NSColor* _bodyForegroundColor;
	long long _baseWritingDirection;
	char _didAddBodyAttributes;
	char _shouldEncodeFileTransfers;
	char _shouldEncodeInlineAttachments;

}

@property (assign,nonatomic) char shouldEncodeInlineAttachments;              //@synthesize shouldEncodeInlineAttachments=_shouldEncodeInlineAttachments - In the implementation block
-(id)resultsForLogging;
-(void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(id)initWithAttributedString:(id)arg1 shouldEncodeFileTransfers:(char)arg2 ;
-(id)appKitAttributedString;
-(id)bodyBackgroundColor;
-(char)shouldEncodeInlineAttachments;
-(void)setShouldEncodeInlineAttachments:(char)arg1 ;
-(id)name;
-(long long)baseWritingDirection;
-(id)initWithAttributedString:(id)arg1 ;
@end
