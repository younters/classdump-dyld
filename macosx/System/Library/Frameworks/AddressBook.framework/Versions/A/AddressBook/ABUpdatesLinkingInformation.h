/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABLinkingInfoDataSource;
@interface ABUpdatesLinkingInformation : NSObject {

	id<ABLinkingInfoDataSource> _adapter;

}
-(void)linkInsertedPeople;
-(void)updatePreferredNameFlags;
-(void)updatePreferredPhotoFlags;
-(void)unlinkLoneRemainingPeople;
-(void)updateLinkingInformation;
-(id)initWithAdapter:(id)arg1 ;
-(void)dealloc;
@end
