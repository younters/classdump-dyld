/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WhitePages/WPODRecord.h>

@class WPMultiAddress, WPMap, NSString;

@interface WPPerson : WPODRecord {

	WPMultiAddress* _multiAddress;
	WPMap* _cachedMap;
	NSString* _displayedName;

}
+(id)defaultLargeImage;
+(int)personDisplayNameMode;
+(id)personWithODRecord:(id)arg1 session:(id)arg2 ;
+(void)setPersonDisplayNameMode:(int)arg1 ;
+(id)personWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 ;
+(id)personWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3 ;
+(id)peopleWithName:(id)arg1 attributesToBeReturned:(id)arg2 ;
+(id)peopleWithName:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)defaultImage;
-(id)MSNHandles;
-(id)JabberHandles;
-(id)AIMHandles;
-(id)YahooHandles;
-(id)ICQHandles;
-(id)emails;
-(void)setDepartment:(id)arg1 ;
-(id)company;
-(void)setCompany:(id)arg1 ;
-(id)recordType;
-(id)department;
-(id)birthdate;
-(id)map;
-(id)GUID;
-(void)setFirst:(id)arg1 ;
-(id)groups;
-(void)setMap:(id)arg1 ;
-(id)singularRecordCategory;
-(id)pluralRecordCategory;
-(id)initRecordWithODRecord:(id)arg1 session:(id)arg2 ;
-(id)secondaryInfoString;
-(id)displayedStringForPickerTableView:(id)arg1 ;
-(id)displayedStringForPickerTextField:(id)arg1 ;
-(id)reflectedImage;
-(id)printableAttributedString;
-(id)mainPhone;
-(id)workPhones;
-(id)mobilePhones;
-(id)pagerPhones;
-(id)addressLabelForIndex:(unsigned long long)arg1 ;
-(id)homePhones;
-(id)mainEmail;
-(id)blog;
-(void)resetDisplayedName;
-(id)displayedNameAndEmail;
-(id)displayedNameUsingFirstNameAndLastNameOnly:(char)arg1 ;
-(id)FAXPhones;
-(id)mainAddress;
-(id)supervisor;
-(id)supervisorLabel;
-(id)subordinates;
-(id)directReportsLabel;
-(id)mapGUID;
-(id)addPrefix:(id)arg1 toHandles:(id)arg2 ;
-(id)recordPickerDisplayedString;
-(id)displayedNameUsingFirstNameAndLastNameOnly;
-(void)displayedNameModeHasChanged:(id)arg1 ;
-(id)companyAndDepartment;
-(id)mainAIMHandle;
-(id)mainJabberHandle;
-(id)mainMSNHandle;
-(id)mainYahooHandle;
-(id)mainICQHandle;
-(id)mainURL;
-(id)emailContacts;
-(id)workContactPhones;
-(id)homeContactPhones;
-(id)mobileContactPhones;
-(id)FAXContactPhones;
-(id)pagerContactPhones;
-(id)mainMobile;
-(id)addressLabels;
-(void)setLast:(id)arg1 ;
-(void)setBirthdate:(id)arg1 ;
-(void)setBlog:(id)arg1 ;
-(void)setHandles:(id)arg1 forType:(id)arg2 ;
-(void)setSupervisor:(id)arg1 ;
-(void)setSubordinates:(id)arg1 ;
-(id)first;
-(id)last;
-(void)dealloc;
-(id)description;
-(void)reset;
-(id)URLs;
-(void)setJobTitle:(id)arg1 ;
-(id)jobTitle;
-(void)setBadgeImage:(id)arg1 ;
-(id)badgeImage;
-(id)displayedName;
-(void)setAddress:(id)arg1 ;
-(id)addresses;
@end
