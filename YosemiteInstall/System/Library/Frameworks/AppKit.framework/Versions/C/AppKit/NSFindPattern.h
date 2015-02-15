/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>
#import <AppKit/NSCopying.h>

@class NSString;

@interface NSFindPattern : NSObject <NSCoding, NSCopying> {

	NSString* regularExpression;
	NSString* tokenString;
	NSString* displayString;
	NSString* replacementString;
	NSString* uniqueID;
	char allowsBackreferences;
	int groupID;
	int captureGroupID;
	int repeatedPatternID;

}

@property (copy) NSString * regularExpression; 
@property (copy) NSString * tokenString; 
@property (copy) NSString * displayString; 
@property (copy) NSString * replacementString; 
@property (readonly) NSString * uniqueID; 
@property (assign) char allowsBackreferences; 
@property (assign) int groupID; 
@property (assign) int captureGroupID; 
@property (assign) int repeatedPatternID; 
+(id)readableTypesForPasteboard:(id)arg1 ;
+(unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
+(id)placeholderFindPattern;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(NSString *)uniqueID;
-(NSString *)replacementString;
-(char)allowsBackreferences;
-(id)propertyListRepresentation;
-(NSString *)regularExpression;
-(int)repeatedPatternID;
-(void)_setUniqueID:(id)arg1 ;
-(int)groupID;
-(int)captureGroupID;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)tokenString;
-(void)setTokenString:(NSString *)arg1 ;
-(void)setRegularExpression:(NSString *)arg1 ;
-(void)setAllowsBackreferences:(char)arg1 ;
-(void)setGroupID:(int)arg1 ;
-(void)setCaptureGroupID:(int)arg1 ;
-(void)setReplacementString:(NSString *)arg1 ;
-(void)generateNewUniqueID;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)replaceExpression;
-(id)backreferenceExpression;
-(void)setRepeatedPatternID:(int)arg1 ;
@end
