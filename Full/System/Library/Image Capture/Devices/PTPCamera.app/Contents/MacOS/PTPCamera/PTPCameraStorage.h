/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Image Capture/Devices/PTPCamera.app/Contents/MacOS/PTPCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PTPCamera/PTPContainer.h>

@class NSMutableArray;

@interface PTPCameraStorage : PTPContainer {

	NSMutableArray* _tempArrayOfAllObjectHandles;
	NSMutableArray* _tempArrayOfAllObjectHandlesToBeIgnored;
	int _estimatedNumOfDownloadableObjects;
	int _numOfDownloadableObjects;
	int _numOfDownloadableObjectsPlusFolders;
	char _hasBeenRemoved;
	char _catalogingDone;

}

@property (assign) int estimatedNumOfDownloadableObjects;                //@synthesize estimatedNumOfDownloadableObjects=_estimatedNumOfDownloadableObjects - In the implementation block
@property (assign) int numOfDownloadableObjects;                         //@synthesize numOfDownloadableObjects=_numOfDownloadableObjects - In the implementation block
@property (assign) int numOfDownloadableObjectsPlusFolders;              //@synthesize numOfDownloadableObjectsPlusFolders=_numOfDownloadableObjectsPlusFolders - In the implementation block
@property (assign) char hasBeenRemoved;                                  //@synthesize hasBeenRemoved=_hasBeenRemoved - In the implementation block
@property (assign) char catalogingDone;                                  //@synthesize catalogingDone=_catalogingDone - In the implementation block
@property (readonly) char locked; 
-(char)catalogingDone;
-(void)setCatalogingDone:(char)arg1 ;
-(void)incrementNumOfDownloadableObjects:(int)arg1 ;
-(void)decrementEstimatedNumOfDownloadableObjects:(int)arg1 ;
-(void)decrementNumOfDownloadableObjects:(int)arg1 ;
-(int)estimatedNumOfDownloadableObjects;
-(int)numOfDownloadableObjects;
-(id)tempArrayOfAllObjectHandles;
-(char)hasBeenRemoved;
-(void)setHasBeenRemoved:(char)arg1 ;
-(void)incrementEstimatedNumOfDownloadableObjects:(int)arg1 ;
-(void)refreshInfo;
-(id)initWithStorageID:(unsigned)arg1 initiator:(id)arg2 ;
-(void)prime;
-(id)tempArrayOfAllObjectHandlesToBeIgnored;
-(void)setEstimatedNumOfDownloadableObjects:(int)arg1 ;
-(void)setNumOfDownloadableObjects:(int)arg1 ;
-(int)numOfDownloadableObjectsPlusFolders;
-(void)setNumOfDownloadableObjectsPlusFolders:(int)arg1 ;
-(char)locked;
-(void)dealloc;
@end
