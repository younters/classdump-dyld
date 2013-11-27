/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class IMLockFile, NSString;

@interface BCLockout : NSObject {

	IMLockFile* _lockFile;
	BOOL _isExclusive;
	NSString* _startNotification;
	NSString* _endNotification;

}

@property (nonatomic,retain) NSString * path; 
@property (nonatomic,copy) NSString * startNotification;              //@synthesize startNotification=_startNotification - In the implementation block
@property (nonatomic,copy) NSString * endNotification;                //@synthesize endNotification=_endNotification - In the implementation block
-(BOOL)lock:(BOOL)arg1 ;
-(id)startNotification;
-(void)setStartNotification:(id)arg1 ;
-(void)setEndNotification:(id)arg1 ;
-(id)endNotification;
-(void)dealloc;
-(id)path;
-(void)unlock;
-(void)setPath:(id)arg1 ;
@end
