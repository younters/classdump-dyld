/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSScriptObjectSpecifier.h>

@class NSString;

@interface NSNameSpecifier : NSScriptObjectSpecifier {

	NSString* _name;

}

@property (copy) NSString * name; 
-(id)initWithContainerClassDescription:(id)arg1 containerSpecifier:(id)arg2 key:(id)arg3 ;
-(unsigned long long)_specifiedIndexOfObjectInContainer:(id)arg1 ;
-(id)_simpleDescription;
-(id)_initFromRecord:(id)arg1 ;
-(char)_putKeyFormAndDataInRecord:(id)arg1 ;
-(id)_specifiedValueInContainer:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithContainerClassDescription:(id)arg1 containerSpecifier:(id)arg2 key:(id)arg3 name:(id)arg4 ;
@end
