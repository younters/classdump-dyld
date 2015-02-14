/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Mail/Mail-Structs.h>
@class NSDictionary;

@interface _MFRedundantTextIdentifierSolutionGenerator : NSObject {

	SCD_Struct_MF19* _replyBuffer;
	SCD_Struct_MF19* _originalBuffer;
	long long _replyLength;
	long long _originalLength;
	NSDictionary* _replyAttachmentContextsByURL;
	NSDictionary* _originalAttachmentContextsByURL;

}

@property (nonatomic,readonly) SCD_Struct_MF19* replyBuffer;                                     //@synthesize replyBuffer=_replyBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MF19* originalBuffer;                                  //@synthesize originalBuffer=_originalBuffer - In the implementation block
@property (nonatomic,readonly) long long replyLength;                                            //@synthesize replyLength=_replyLength - In the implementation block
@property (nonatomic,readonly) long long originalLength;                                         //@synthesize originalLength=_originalLength - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * originalAttachmentContextsByURL;              //@synthesize originalAttachmentContextsByURL=_originalAttachmentContextsByURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * replyAttachmentContextsByURL;                 //@synthesize replyAttachmentContextsByURL=_replyAttachmentContextsByURL - In the implementation block
-(id)initWithReply:(SCD_Struct_MF19*)arg1 replyLength:(long long)arg2 replyAttachmentContextsByURL:(id)arg3 original:(SCD_Struct_MF19*)arg4 originalLength:(long long)arg5 originalAttachmentContextsByURL:(id)arg6 ;
-(id)generateBestSolution;
-(SCD_Struct_MF19*)replyBuffer;
-(long long)replyLength;
-(SCD_Struct_MF19*)originalBuffer;
-(long long)originalLength;
-(NSDictionary *)replyAttachmentContextsByURL;
-(NSDictionary *)originalAttachmentContextsByURL;
-(id)generateBestSolutionInForwardDirection:(char)arg1 replyStartIndex:(long long)arg2 originalStartIndex:(long long)arg3 ;
@end
