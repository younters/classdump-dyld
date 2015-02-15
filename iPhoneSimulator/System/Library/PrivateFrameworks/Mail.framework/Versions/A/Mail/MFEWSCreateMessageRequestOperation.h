/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSCreateItemRequestOperation.h>
#import <Mail/NSCoding.h>

@class MCMessage, NSData, NSString, NSDictionary, MFEWSGetItemsResponseOperation;

@interface MFEWSCreateMessageRequestOperation : MFEWSCreateItemRequestOperation <NSCoding> {

	unsigned _flags;
	MCMessage* _message;
	NSData* _data;
	NSString* _sender;
	NSString* _existingItemIdString;
	NSDictionary* _recipientsByHeaderKey;
	MFEWSGetItemsResponseOperation* _getItemsResponse;

}

@property (nonatomic,copy) NSString * existingItemIdString;                                    //@synthesize existingItemIdString=_existingItemIdString - In the implementation block
@property (nonatomic,readonly) MCMessage * message;                                            //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSData * data;                                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned flags;                                                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy,readonly) NSString * sender;                                         //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * recipientsByHeaderKey;                      //@synthesize recipientsByHeaderKey=_recipientsByHeaderKey - In the implementation block
@property (nonatomic,readonly) MFEWSGetItemsResponseOperation * getItemsResponse;              //@synthesize getItemsResponse=_getItemsResponse - In the implementation block
-(NSString *)sender;
-(id)prepareRequest;
-(id)initWithFolderIdString:(id)arg1 messageType:(char)arg2 disposition:(long long)arg3 gateway:(id)arg4 errorHandler:(id)arg5 ;
-(MFEWSGetItemsResponseOperation *)getItemsResponse;
-(void)_ewsCreateMessageRequestOperationCommonInitWithMessage:(id)arg1 data:(id)arg2 flags:(unsigned)arg3 existingItemIdString:(id)arg4 sender:(id)arg5 recipientsByHeaderKey:(id)arg6 ;
-(NSDictionary *)recipientsByHeaderKey;
-(id)initWithMessage:(id)arg1 data:(id)arg2 folderIdString:(id)arg3 messageType:(char)arg4 flags:(unsigned)arg5 existingItemIdString:(id)arg6 sender:(id)arg7 recipientsByHeaderKey:(id)arg8 disposition:(long long)arg9 gateway:(id)arg10 errorHandler:(id)arg11 ;
-(NSString *)existingItemIdString;
-(void)setExistingItemIdString:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(MCMessage *)message;
-(unsigned)flags;
@end
