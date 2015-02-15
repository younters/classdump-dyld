/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:24:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSMapTable;

@interface IMPlugInManager : NSObject {

	NSArray* _pluginDescriptors;
	NSMapTable* _wrPlugInInstances;

}
+(id)defaultManager;
-(void)scanForPlugInDesciptors;
-(id)pluginDescriptors;
-(id)plugInDescriptorForIdentifier:(id)arg1 ;
-(id)createObjectForPlugInDescriptor:(id)arg1 instanceDescription:(id)arg2 ;
-(id)createObjectForPlugInInstanceDescriptor:(id)arg1 ;
-(id)plugInDescriptorsPassingTest:(/*^block*/id)arg1 ;
-(id)createObjectForIdentifier:(id)arg1 instanceDescription:(id)arg2 ;
-(id)createPlugInInstanceDescriptorForPlugInDescriptor:(id)arg1 instanceDescription:(id)arg2 ;
-(id)existingInstanceForPlugInInstanceDescriptor:(id)arg1 ;
-(id)plugInInstancesPassingTest:(/*^block*/id)arg1 ;
-(void)enumeratePluginInstancesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
@end
