/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <Automator/NSCopying.h>

@class NSString, NSBundle, NSArray, NSDictionary, NSMutableArray;

@interface AMApplicationDefinition : NSObject <NSCopying> {

	NSString* _applicationName;
	NSString* _localizedApplicationName;
	NSString* _iconName;
	NSBundle* _bundle;
	NSArray* _definedActions;
	NSDictionary* _scripts;
	NSMutableArray* _elements;
	NSArray* _libraryActions;
	NSArray* _variables;
	NSDictionary* _registryTypes;
	NSDictionary* _definition;
	char _didLoadDefinedActions;
	char _didLoadLibraryActions;
	char _didLoadVariables;

}

@property (readonly) char isTigerDefinition; 
@property (readonly) char isLeopardDefinition; 
@property (retain) NSBundle * bundle;                              //@synthesize bundle=_bundle - In the implementation block
@property (retain) NSDictionary * definition;                      //@synthesize definition=_definition - In the implementation block
@property (retain,readonly) NSString * version; 
@property (retain) NSString * iconName;                            //@synthesize iconName=_iconName - In the implementation block
@property (copy) NSString * applicationName;                       //@synthesize applicationName=_applicationName - In the implementation block
@property (copy) NSString * localizedApplicationName;              //@synthesize localizedApplicationName=_localizedApplicationName - In the implementation block
@property (retain) NSDictionary * registryTypes;                   //@synthesize registryTypes=_registryTypes - In the implementation block
@property (readonly) NSArray * definedActions; 
@property (retain) NSMutableArray * elements;                      //@synthesize elements=_elements - In the implementation block
@property (retain) NSDictionary * scripts;                         //@synthesize scripts=_scripts - In the implementation block
@property (retain) NSArray * variables;                            //@synthesize variables=_variables - In the implementation block
@property (readonly) char isDeprecated; 
-(char)isDeprecated;
-(NSDictionary *)registryTypes;
-(id)initWithDefinitionURL:(id)arg1 ;
-(NSString *)localizedApplicationName;
-(NSArray *)definedActions;
-(void)setDefinition:(NSDictionary *)arg1 ;
-(id)initWithDefinitionDictionary:(id)arg1 bundle:(id)arg2 ;
-(char)initWithLeopardDefinition:(id)arg1 ;
-(char)initWithTigerDefinition:(id)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)setLocalizedApplicationName:(NSString *)arg1 ;
-(void)setIconName:(NSString *)arg1 ;
-(void)setScripts:(NSDictionary *)arg1 ;
-(void)setRegistryTypes:(NSDictionary *)arg1 ;
-(void)setDefinedActions:(NSArray *)arg1 ;
-(void)setElements:(NSMutableArray *)arg1 ;
-(id)allowedIdentifiers;
-(id)allowedApplicationNames;
-(id)disallowedIdentifiers;
-(id)disallowedApplicationNames;
-(id)dictionaryForElementName:(id)arg1 key:(id)arg2 ;
-(id)filterLibraryActions:(id)arg1 ;
-(char)isLeopardDefinition;
-(char)isTigerDefinition;
-(NSString *)iconName;
-(NSDictionary *)scripts;
-(NSMutableArray *)elements;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSBundle *)bundle;
-(void)setVariables:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)version;
-(NSString *)applicationName;
-(NSArray *)variables;
-(NSDictionary *)definition;
@end
