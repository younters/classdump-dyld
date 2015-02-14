/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCardViewMultiValueConverter.h>

@protocol ABCardViewMultiValueConverter;
@class NSArray, NSString;

@interface ABCardViewTransformingMultiValueConverter : NSObject <ABCardViewMultiValueConverter> {

	id<ABCardViewMultiValueConverter> _basicConverter;
	NSArray* _multiValueTransformers;

}

@property (retain) id<ABCardViewMultiValueConverter> basicConverter;              //@synthesize basicConverter=_basicConverter - In the implementation block
@property (copy) NSArray * multiValueTransformers;                                //@synthesize multiValueTransformers=_multiValueTransformers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformingConverter;
-(id)valueFromMultiValue:(id)arg1 ;
-(id)multiValueFromValue:(id)arg1 ;
-(id<ABCardViewMultiValueConverter>)basicConverter;
-(void)setBasicConverter:(id<ABCardViewMultiValueConverter>)arg1 ;
-(NSArray *)multiValueTransformers;
-(void)setMultiValueTransformers:(NSArray *)arg1 ;
-(void)dealloc;
@end
