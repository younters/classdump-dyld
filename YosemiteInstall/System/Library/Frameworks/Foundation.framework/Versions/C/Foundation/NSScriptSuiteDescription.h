/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, NSArray, NSDictionary;

@interface NSScriptSuiteDescription : NSObject {

	SCD_Struct_NS72 _properties;
	NSString* _plistSuiteName;
	char _usesUnnamedArguments;
	char _padding[3];
	NSArray* _unreconciledClassSynonymDescriptions;
	NSArray* _unreconciledClassExtensionDescriptions;
	NSDictionary* _cachedClassDescriptionsByName;
	NSDictionary* _cachedCommandDescriptionsByName;

}
+(id)currentSuiteTerminology;
+(unsigned)currentSuiteAppleEventCode;
+(id)_classDescriptionsFromPropertyListDeclarations:(id)arg1 suiteName:(id)arg2 ;
+(id)_commandDescriptionsFromPropertyListDeclarations:(id)arg1 suiteName:(id)arg2 ;
+(id)_typeDescriptionsFromEnumerationImplDeclarations:(id)arg1 presoDeclarations:(id)arg2 valueTypeDeclarations:(id)arg3 ;
+(id)_classSynonymDescriptionsFromImplDeclarations:(id)arg1 presoDeclarations:(id)arg2 ;
+(id)sortedClassDescriptions:(id)arg1 ;
+(id)suiteDescriptionFromPropertyListDeclaration:(id)arg1 bundle:(id)arg2 ;
-(unsigned)appleEventCode;
-(id)presentableDescription;
-(id)presentableNames;
-(char)usesUnnamedArguments;
-(id)classDescriptions;
-(id)commandDescriptions;
-(id)typeDescriptions;
-(unsigned short)appendSuiteDeclarationsToAETEData:(id)arg1 ;
-(id)firstPresentableName;
-(id)initWithProperties:(const SCD_Struct_NS73*)arg1 suiteName:(id)arg2 usesUnnamedArguments:(char)arg3 classSynonymDescriptions:(id)arg4 ;
-(id)initWithProperties:(const SCD_Struct_NS73*)arg1 classExtensionDescriptions:(id)arg2 ;
-(id)_descriptionWithTabCount:(unsigned long long)arg1 ;
-(void)reconcileSelfToSuiteRegistry:(id)arg1 ;
-(void)reconcileSubdescriptionsToSuiteRegistry:(id)arg1 ;
-(id)bundle;
-(id)classDescriptionsByName;
-(id)commandDescriptionsByName;
-(void)setClassDescription:(id)arg1 ;
-(void)removeClassDescriptions:(id)arg1 ;
-(void)setCommandDescription:(id)arg1 ;
-(void)removeCommandDescriptions:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isHidden;
-(id)name;
@end
