/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNVCardPerson, CNVCardLineFactory;
@class NSMutableArray;

@interface CNVCard30CardBuilder : NSObject {

	id<CNVCardPerson> _person;
	NSMutableArray* _lines;
	long long _groupCount;
	unsigned long long _countOfLinesBeforePhoto;
	/*^block*/id _retrofitPhoto;
	char _photoHandled;
	NSMutableArray* _unknownProperties;
	id<CNVCardLineFactory> _lineFactory;

}
+(id)builderWithPerson:(id)arg1 ;
-(void)addLineWithName:(id)arg1 value:(id)arg2 ;
-(void)addNameComponents;
-(void)addFullName;
-(void)addOrganization;
-(void)addPropertyLinesForValues:(id)arg1 generator:(id)arg2 ;
-(void)removeUnknownPropertiesWithTag:(id)arg1 ;
-(void)addLegacyInstantMessagingHandles:(id)arg1 forService:(id)arg2 vCardProperty:(id)arg3 ;
-(void)addInstantMessagingHandles:(id)arg1 ;
-(char)addPhotoReferences;
-(void)preparePhotoLineWithOptions:(id)arg1 ;
-(void)_addAttributesForCropRects:(id)arg1 imageHash:(id)arg2 toLine:(id)arg3 ;
-(void)buildWithSerializer:(id)arg1 ;
-(void)addBeginningOfCard;
-(void)addEndOfCard;
-(void)addNameLines;
-(void)addEmailAddresses;
-(void)addPhoneNumbers;
-(void)addPostalAddresses;
-(void)addSocialProfiles;
-(void)addActivityAlerts;
-(void)addNote;
-(void)addURLs;
-(void)addCalendarURIs;
-(void)addBirthday;
-(void)addAlternateBirthday;
-(void)addOtherDates;
-(void)addRelatedNames;
-(void)addCompanyMarker;
-(void)addNameOrderMarker;
-(void)addCategories;
-(void)addUnknownProperties;
-(void)addCardDAVUID;
-(void)addUID;
-(void)addPhonemeData;
-(void)addInstantMessagingInfo;
-(void)addPhotoWithOptions:(id)arg1 ;
-(id)initWithPerson:(id)arg1 ;
@end

