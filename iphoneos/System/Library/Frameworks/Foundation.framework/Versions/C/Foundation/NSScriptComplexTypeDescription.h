/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSScriptTypeDescription.h>

@class NSArray;

@interface NSScriptComplexTypeDescription : NSScriptTypeDescription {

	unsigned _appleEventCode;
	NSArray* _alternativeTypeDescriptions;

}
-(id)classDescription;
-(unsigned)appleEventCode;
-(id)objcClassName;
-(void)appendObjectClassDeclarationToAETEData:(id)arg1 ;
-(SEL)objcDescriptorCreationMethodSelector;
-(SEL)objcCreationMethodSelector;
-(char)matchesAppleEventCode:(unsigned)arg1 ;
-(id)coercedValue:(id)arg1 ;
-(id)errorExpectedTypeDescriptor;
-(id)alternativeTypeDescriptions;
-(id)_descriptionWithTabCount:(unsigned long long)arg1 ;
-(id)initWithAppleEventCode:(unsigned)arg1 alernativeTypeDescriptions:(id)arg2 ;
-(void)dealloc;
-(id)name;
@end
