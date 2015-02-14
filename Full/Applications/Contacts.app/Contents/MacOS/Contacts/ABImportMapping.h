/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/NSCopying.h>

@class NSString, NSMutableDictionary;

@interface ABImportMapping : NSObject <NSCopying> {

	NSString* _property;
	NSString* _label;
	NSString* _service;
	NSMutableDictionary* _mappings;

}
+(id)ignoreMapping;
+(id)mappingWithProperty:(id)arg1 label:(id)arg2 ;
+(id)mappingWithProperty:(id)arg1 label:(id)arg2 service:(id)arg3 ;
+(id)propertyWithValue:(id)arg1 label:(id)arg2 ;
-(char)isIgnore;
-(char)isAddress;
-(long long)columnForAddressMappingItem:(id)arg1 ;
-(void)setColumn:(long long)arg1 forAddressMappingItem:(id)arg2 postNotification:(char)arg3 ;
-(char)isInstantMessage;
-(char)isSocialProfile;
-(void)setColumn:(long long)arg1 forAddressMappingItem:(id)arg2 ;
-(id)initWithProperty:(id)arg1 label:(id)arg2 service:(id)arg3 addressImportMappings:(id)arg4 ;
-(id)initWithProperty:(id)arg1 label:(id)arg2 ;
-(void)postImportMappingModifiedNotification;
-(void)setColumnsForAddressMappingItemUsingMapping:(id)arg1 ;
-(id)property;
-(char)multiValue;
-(id)service;
-(char)isMultiValue;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)title;
-(void)setLabel:(id)arg1 ;
-(id)label;
@end
