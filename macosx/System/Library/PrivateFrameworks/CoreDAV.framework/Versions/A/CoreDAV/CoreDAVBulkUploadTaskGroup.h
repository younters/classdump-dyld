/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSURL, NSString, NSMutableDictionary, NSDictionary;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSURL* _folderURL;
	NSString* _lastKnownCTag;
	char _validCTag;
	unsigned long long _multiPutBatchMaxNumResources;
	unsigned long long _multiPutBatchMaxSize;
	NSMutableDictionary* _remainingUUIDsToAddActions;
	NSMutableDictionary* _remainingHREFsToModDeleteActions;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
	NSMutableDictionary* _uuidToErrorItems;
	NSMutableDictionary* _hrefToErrorItems;
	NSMutableDictionary* _uuidToStatus;
	NSMutableDictionary* _hrefToStatus;

}

@property (assign,nonatomic) unsigned long long multiPutBatchMaxNumResources;              //@synthesize multiPutBatchMaxNumResources=_multiPutBatchMaxNumResources - In the implementation block
@property (assign,nonatomic) unsigned long long multiPutBatchMaxSize;                      //@synthesize multiPutBatchMaxSize=_multiPutBatchMaxSize - In the implementation block
@property (nonatomic,readonly) NSURL * folderURL;                                          //@synthesize folderURL=_folderURL - In the implementation block
@property (nonatomic,readonly) char validCTag;                                             //@synthesize validCTag=_validCTag - In the implementation block
@property (nonatomic,retain) NSString * nextCTag;                                          //@synthesize lastKnownCTag=_lastKnownCTag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToHREF;                                  //@synthesize uuidToHREF=_uuidToHREF - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToETag;                                  //@synthesize hrefToETag=_hrefToETag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToStatus;                                //@synthesize uuidToStatus=_uuidToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToStatus;                                //@synthesize hrefToStatus=_hrefToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToErrorItems;                            //@synthesize uuidToErrorItems=_uuidToErrorItems - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToErrorItems;                            //@synthesize hrefToErrorItems=_hrefToErrorItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(NSURL *)folderURL;
-(id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 ;
-(void)setMultiPutBatchMaxNumResources:(unsigned long long)arg1 ;
-(void)setMultiPutBatchMaxSize:(unsigned long long)arg1 ;
-(char)validCTag;
-(NSString *)nextCTag;
-(NSDictionary *)uuidToHREF;
-(NSDictionary *)hrefToETag;
-(NSDictionary *)uuidToStatus;
-(NSDictionary *)hrefToStatus;
-(void)_sendNextBatch;
-(void)setNextCTag:(NSString *)arg1 ;
-(void)syncAway;
-(Class)multiPutTaskClass;
-(NSDictionary *)uuidToErrorItems;
-(NSDictionary *)hrefToErrorItems;
-(unsigned long long)multiPutBatchMaxNumResources;
-(unsigned long long)multiPutBatchMaxSize;
@end
