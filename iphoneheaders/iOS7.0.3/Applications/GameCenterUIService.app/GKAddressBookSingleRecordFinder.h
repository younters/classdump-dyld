/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BulletinBoard/ABPredicateDelegate.h>

@interface GKAddressBookSingleRecordFinder : NSObject <ABPredicateDelegate> {

	void* _record;

}

@property (assign,nonatomic) void* record;              //@synthesize record=_record - In the implementation block
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(void)setRecord:(void*)arg1 ;
-(void)dealloc;
-(void*)record;
@end
