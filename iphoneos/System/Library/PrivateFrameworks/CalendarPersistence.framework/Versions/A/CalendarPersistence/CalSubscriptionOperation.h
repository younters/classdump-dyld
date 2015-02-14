/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/NSURLConnectionDelegate.h>

@class NSURL, NSURLProtectionSpace, NSURLResponse, NSMutableData, ICSDocument, NSError, NSURLConnection, NSString;

@interface CalSubscriptionOperation : NSObject <NSURLConnectionDelegate> {

	NSURL* _subscriptionURL;
	NSURL* _displayURL;
	NSURLProtectionSpace* _protectionSpace;
	NSURLResponse* _response;
	NSMutableData* _buffer;
	ICSDocument* _document;
	char _inProgress;
	id _delegate;
	NSError* _error;
	char _isSynchronous;
	char _calendarIsEventContainer;
	char _calendarIsTaskContainer;
	NSURLConnection* _connection;
	char _noChanges;

}

@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign) char calendarIsEventContainer;                   //@synthesize calendarIsEventContainer=_calendarIsEventContainer - In the implementation block
@property (assign) char calendarIsTaskContainer;                    //@synthesize calendarIsTaskContainer=_calendarIsTaskContainer - In the implementation block
@property (assign) char isSynchronous;                              //@synthesize isSynchronous=_isSynchronous - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canHandleURL:(id)arg1 ;
+(id)scrubSchemeOnSubscriptionURL:(id)arg1 ;
-(id)protectionSpace;
-(char)download;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)calendar;
-(void)setDocument:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)update:(id)arg1 ;
-(id)subscriptionURL;
-(long long)operationProgress;
-(long long)operationTotal;
-(void)abortOperation;
-(void)setIsSynchronous:(char)arg1 ;
-(id)backingCalDAVCalendarInContext:(id)arg1 ;
-(void)addHTTPHeadersToRequest:(id)arg1 ;
-(char)isSynchronous;
-(void)determineContainerTypeForCalendar:(id)arg1 ;
-(id)generateAuthenticationError;
-(void)setCalendarIsEventContainer:(char)arg1 ;
-(void)setCalendarIsTaskContainer:(char)arg1 ;
-(id)_createCalendarHelper:(id)arg1 withAccount:(id)arg2 context:(id)arg3 ;
-(char)calendarIsEventContainer;
-(char)calendarIsTaskContainer;
-(id)displayURL;
-(char)downloadSynchronously;
-(void)downloadAsynchronously;
-(void)postProcess;
-(id)calendarID;
-(id)createLocalSubscriptionCalendarInContext:(id)arg1 ;
-(id)createCalDAVSubscriptionCalendarForAccount:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)response;
@end
