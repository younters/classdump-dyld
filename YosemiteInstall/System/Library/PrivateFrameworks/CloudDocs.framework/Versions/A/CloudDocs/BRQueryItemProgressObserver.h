/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudDocs/CloudDocs-Structs.h>
@class BRQueryItem, NSProgress;

@interface BRQueryItemProgressObserver : NSObject {

	BRQueryItem* _item;
	dispatch_queue_sRef _queue;
	id _subscriber;
	NSProgress* _progress;
	char _stopped;
	char _isUpload;
	/*^block*/id _progressHandler;

}

@property (assign,nonatomic) dispatch_queue_sRef queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id progressHandler;                       //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) BRQueryItem * item;                   //@synthesize item=_item - In the implementation block
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)description;
-(dispatch_queue_sRef)queue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BRQueryItem *)item;
-(id)initWithItem:(id)arg1 ;
-(void)setQueue:(dispatch_queue_sRef)arg1 ;
@end

