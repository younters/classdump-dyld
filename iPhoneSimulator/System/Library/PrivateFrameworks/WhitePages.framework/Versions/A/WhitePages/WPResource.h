/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WhitePages/WhitePages-Structs.h>
#import <WhitePages/WPODRecord.h>

@class WPMap;

@interface WPResource : WPODRecord {

	WPMap* _cachedMap;

}
+(id)defaultLargeImage;
+(id)resourceWithODRecord:(id)arg1 session:(id)arg2 ;
+(id)resourceWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 ;
+(id)resourceWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3 ;
+(id)resourcesWithName:(id)arg1 attributesToBeReturned:(id)arg2 ;
+(id)resourcesWithName:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3 ;
+(id)defaultImage;
-(id)recordType;
-(void)setCity:(id)arg1 ;
-(void)setPostalCode:(id)arg1 ;
-(id)city;
-(id)postalCode;
-(id)map;
-(id)street;
-(void)setMap:(id)arg1 ;
-(id)singularRecordCategory;
-(id)pluralRecordCategory;
-(id)secondaryInfoString;
-(id)reflectedImage;
-(id)printableAttributedString;
-(id)displayedStringForPickerTableView;
-(id)resourceInfoComponent:(id)arg1 ;
-(void)setResourceInfoValue:(id)arg1 forComponent:(id)arg2 ;
-(id)initResourceWithODRecord:(id)arg1 session:(id)arg2 ;
-(id)mainAddress;
-(id)mapGUID;
-(id)resourceLabel;
-(id)resourceDescription;
-(id)resourceInfo;
-(id)calendaringDelegate;
-(char)autoAcceptsInvitation;
-(void)setResourceLabel:(id)arg1 ;
-(void)setCalendaringDelegate:(id)arg1 ;
-(void)setAutoAcceptsInvitation:(char)arg1 ;
-(void)setResourceDescription:(id)arg1 ;
-(void)setCountry:(id)arg1 ;
-(id)country;
-(void)setStreet:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)caseInsensitiveCompare:(id)arg1 ;
-(void)setState:(id)arg1 ;
-(id)state;
-(id)urls;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(void)setBadgeImage:(id)arg1 ;
-(id)badgeImage;
-(id)contact;
-(CGPoint)coordinates;
-(id)addressDictionary;
-(id)address;
@end
