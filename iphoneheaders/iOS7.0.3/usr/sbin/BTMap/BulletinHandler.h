/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTMap
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BTMap/BTMap-Structs.h>
#import <MobileMail/BBObserverDelegate.h>

@protocol BulletinHandlerDelegate;
@class , NSMutableSet, BBObserver;

@interface BulletinHandler : NSObject <BBObserverDelegate> {

	<BulletinHandlerDelegate>* _delegate;
	NSMutableSet* _interestingSections;
	NSMutableSet* _bulletins;
	BBObserver* _observer;

}

@property (assign,nonatomic) <BulletinHandlerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
@end
