/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABLabelsConstraint.h>

@protocol ABLabelsConstraint <NSObject>
@required
-(id)initialLabelsForProperty:(id)arg1;
-(char)isPropertySupported:(id)arg1;
-(id)availableLabelsForProperty:(id)arg1 activeLabels:(id)arg2;
-(char)customLabelsSupported;
-(char)isLabelSupported:(id)arg1 forProperty:(id)arg2;

@end


@class ABPropertyDefaults, NSString;

@interface ABLabelsConstraint : NSObject <ABLabelsConstraint> {

	ABPropertyDefaults* _defaults;

}

@property (nonatomic,retain) ABPropertyDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)labelsConstraint;
-(id)initialLabelsForProperty:(id)arg1 ;
-(char)isPropertySupported:(id)arg1 ;
-(id)availableLabelsForProperty:(id)arg1 activeLabels:(id)arg2 ;
-(char)customLabelsSupported;
-(char)isSingleValuePropety:(id)arg1 ;
-(char)isLabelSupported:(id)arg1 forProperty:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(ABPropertyDefaults *)defaults;
-(void)setDefaults:(ABPropertyDefaults *)arg1 ;
@end
