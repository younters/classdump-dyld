/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoding.h>
#import <Foundation/NSCopying.h>

@class NSImage, NSString, NSDictionary, NSDate, NSTimeZone, NSDateComponents, NSAttributedString, NSArray, NSUserNotificationAction, NSURL, NSData;

@interface NSUserNotification : NSObject <NSCoding, NSCopying> {

	id _internal;

}

@property (nonatomic,readonly) NSImage * identityImage; 
@property (nonatomic,readonly) NSImage * systemAppImage; 
@property (nonatomic,readonly) NSImage * scaledContentImage; 
@property (copy) NSString * title; 
@property (copy) NSString * subtitle; 
@property (copy) NSString * informativeText; 
@property (copy) NSString * actionButtonTitle; 
@property (copy) NSDictionary * userInfo; 
@property (copy) NSDate * deliveryDate; 
@property (copy) NSTimeZone * deliveryTimeZone; 
@property (copy) NSDateComponents * deliveryRepeatInterval; 
@property (copy,readonly) NSDate * actualDeliveryDate; 
@property (getter=isPresented,readonly) char presented; 
@property (getter=isRemote,readonly) char remote; 
@property (copy) NSString * soundName; 
@property (assign) char hasActionButton; 
@property (readonly) long long activationType; 
@property (copy) NSString * otherButtonTitle; 
@property (copy) NSString * identifier; 
@property (copy) NSImage * contentImage; 
@property (assign) char hasReplyButton; 
@property (copy) NSString * responsePlaceholder; 
@property (copy,readonly) NSAttributedString * response; 
@property (copy) NSArray * additionalActions; 
@property (copy,readonly) NSUserNotificationAction * additionalActivationAction; 
@property (assign) char _clearable; 
@property (assign) unsigned long long _style; 
@property (readonly) NSDate * _nextFireDate; 
@property (readonly) char _snoozed; 
@property (readonly) double _snoozeInterval; 
@property (readonly) double _snoozedDate; 
@property (assign) unsigned long long _badgeCount; 
@property (assign) unsigned long long _displayStyle; 
@property (assign) char _poofsOnCancel; 
@property (copy) NSDateComponents * _deliveryExpiration; 
@property (copy) NSDate * _eventDate; 
@property (assign) char _dismissAfterDuration; 
@property (assign) char _actionButtonIsSnooze; 
@property (copy) NSString * _dateString; 
@property (getter=_isAllDayEvent) char _allDayEvent; 
@property (copy) NSDateComponents * duration; 
@property (copy) NSImage * _identityImage; 
@property (assign) char _identityImageHasBorder; 
@property (assign) unsigned long long _identityImageStyle; 
@property (assign) char _persistent; 
@property (copy) NSArray * _alternateActionButtonTitles; 
@property (readonly) unsigned long long _alternateActionIndex; 
@property (assign) char _alwaysShowAlternateActionMenu; 
@property (assign) char _showsButtons; 
@property (assign) char _lockscreenOnly; 
@property (assign) char _substitutesEmojiInResponse; 
@property (assign) char _hasAttachment; 
@property (copy) NSString * _proxyIdentifier; 
@property (getter=_isRemote,readonly) char _remote; 
@property (copy) NSURL * _imageURL; 
@property (assign) char _ignoresDoNotDisturb; 
@property (retain) id _storageID; 
@property (nonatomic,readonly) char _hasContentImage; 
@property (nonatomic,readonly) NSData * _identityImageData; 
+(id)keyPathsForValuesAffectingIdentityImage;
+(id)keyPathsForValuesAffectingScaledContentImage;
+(void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id*)arg5 returnDateAfter:(id*)arg6 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSImage *)identityImage;
-(void)clearIdentityImage;
-(NSImage *)scaledContentImage;
-(void)clearScaledContentImage;
-(void)setAlternateActionIndex:(unsigned long long)arg1 ;
-(NSImage *)systemAppImage;
-(void)_setActualDeliveryDate:(id)arg1 ;
-(void)_setPresented:(char)arg1 ;
-(NSDate *)_nextFireDate;
-(void)_setRemote:(char)arg1 ;
-(void)_setSnoozed:(char)arg1 ;
-(void)_setSnoozeInterval:(double)arg1 ;
-(void)_setSnoozedDate:(double)arg1 ;
-(void)_setActivationType:(long long)arg1 ;
-(char)_areIdentifiersEqual:(id)arg1 ;
-(void)setContentImage:(NSImage *)arg1 ;
-(char)_hasContentImage;
-(void)_setIdentityImage:(id)arg1 withIdentifier:(id)arg2 ;
-(NSData *)_identityImageData;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
