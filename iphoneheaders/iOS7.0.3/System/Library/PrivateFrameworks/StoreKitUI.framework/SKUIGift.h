/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSDate, NSString, SKUIItem, NSArray, SKUIGiftTheme;

@interface SKUIGift : NSObject <NSCopying> {

	int _category;
	NSDate* _deliveryDate;
	int _giftAmount;
	NSString* _giftAmountString;
	SKUIItem* _item;
	NSString* _message;
	NSArray* _recipientAddresses;
	NSString* _senderEmailAddress;
	NSString* _senderName;
	SKUIGiftTheme* _theme;
	NSString* _totalGiftAmountString;

}

@property (nonatomic,readonly) SKUIItem * item;                           //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) int giftCategory;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDate * deliveryDate;                         //@synthesize deliveryDate=_deliveryDate - In the implementation block
@property (assign,nonatomic) int giftAmount;                              //@synthesize giftAmount=_giftAmount - In the implementation block
@property (nonatomic,copy) NSString * giftAmountString;                   //@synthesize giftAmountString=_giftAmountString - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * recipientAddresses;                  //@synthesize recipientAddresses=_recipientAddresses - In the implementation block
@property (nonatomic,copy) NSString * senderEmailAddress;                 //@synthesize senderEmailAddress=_senderEmailAddress - In the implementation block
@property (nonatomic,copy) NSString * senderName;                         //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,copy) NSString * totalGiftAmountString;              //@synthesize totalGiftAmountString=_totalGiftAmountString - In the implementation block
@property (nonatomic,copy) SKUIGiftTheme * theme;                         //@synthesize theme=_theme - In the implementation block
-(id)initWithItem:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)message;
-(id)item;
-(void)setMessage:(id)arg1 ;
-(void)reset;
-(id)theme;
-(void)setTheme:(id)arg1 ;
-(id)senderEmailAddress;
-(void)setSenderEmailAddress:(id)arg1 ;
-(id)deliveryDate;
-(int)giftAmount;
-(id)recipientAddresses;
-(id)senderName;
-(id)HTTPBodyDictionary;
-(void)setDeliveryDate:(id)arg1 ;
-(void)setGiftAmount:(int)arg1 ;
-(id)giftAmountString;
-(void)setGiftAmountString:(id)arg1 ;
-(int)giftCategory;
-(void)setRecipientAddresses:(id)arg1 ;
-(void)setSenderName:(id)arg1 ;
-(id)totalGiftAmountString;
-(void)setTotalGiftAmountString:(id)arg1 ;
-(void).cxx_destruct;
-(id)initWithGiftCategory:(int)arg1 ;
@end
