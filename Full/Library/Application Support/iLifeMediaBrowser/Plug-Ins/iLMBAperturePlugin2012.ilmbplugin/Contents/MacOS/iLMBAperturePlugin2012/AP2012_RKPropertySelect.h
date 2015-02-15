/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperturePlugin2012.ilmbplugin/Contents/MacOS/iLMBAperturePlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBAperturePlugin2012/AP2012_RKSelect.h>

@class NSString;

@interface AP2012_RKPropertySelect : AP2012_RKSelect {

	NSString* _propertyKeyPath;
	NSString* _propertyKey;
	int _propertyType;

}

@property (nonatomic,retain) NSString * propertyKeyPath; 
@property (nonatomic,retain,readonly) NSString * propertyKey;              //@synthesize propertyKey=_propertyKey - In the implementation block
@property (nonatomic,readonly) int propertyType;                           //@synthesize propertyType=_propertyType - In the implementation block
+(id)selectFromPropertyKeyPath:(id)arg1 where:(id)arg2 ;
+(id)selectFromPropertyKeyPath:(id)arg1 wherePredicate:(id)arg2 ;
+(id)selectFromPropertyKeyPath:(id)arg1 qualifier:(long long)arg2 firstValue:(id)arg3 secondValue:(id)arg4 ;
+(Class)formatterClassForKeyPath:(id)arg1 ;
-(id)queryWithBindingValues:(id)arg1 bindingVariables:(id)arg2 limitedTo:(id)arg3 fromDatabase:(id)arg4 ;
-(void)setPropertyKeyPath:(NSString *)arg1 ;
-(id)propertyKeyRestriction;
-(NSString *)propertyKeyPath;
-(id)stringIdLimitFromVersionIdLimit:(id)arg1 stringIds:(id)arg2 fromDatabase:(id)arg3 ;
-(id)descriptionWithIndent:(long long)arg1 ;
-(NSString *)propertyKey;
-(void)dealloc;
-(int)propertyType;
@end
