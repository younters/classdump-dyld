/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:28 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSStoryboard : NSObject {

	id _privateStoryboardData;

}
+(id)storyboardWithName:(id)arg1 bundle:(id)arg2 ;
-(id)name;
-(void)_instantiateMainMenu:(id)arg1 ;
-(char)_hasInitialController;
-(id)instantiateInitialController;
-(id)instantiateControllerWithIdentifier:(id)arg1 ;
-(id)nibForStoryboardNibNamed:(id)arg1 ;
-(id)_bundle;
-(id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 designatedEntryPointIdentifier:(id)arg4 mainMenu:(id)arg5 ;
-(id)nibForControllerWithIdentifier:(id)arg1 ;
-(char)containsNibNamed:(id)arg1 ;
-(id)identifierForStringsFile;
@end
