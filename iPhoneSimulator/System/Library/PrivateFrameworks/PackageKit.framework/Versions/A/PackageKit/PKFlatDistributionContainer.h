/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKMutableDistributionContainer.h>

@class NSString;

@interface PKFlatDistributionContainer : PKMutableDistributionContainer {

	NSString* _path;

}
-(id)stringsDictionary;
-(char)setDistributionFromContainer:(id)arg1 ;
-(char)commitReturningError:(id*)arg1 ;
-(id)initWithPath:(id)arg1 forWriting:(char)arg2 error:(id*)arg3 ;
-(id)_resourceDataForKey:(id)arg1 ;
-(char)setResourceData:(id)arg1 forKey:(id)arg2 forLocalization:(id)arg3 ;
-(char)setStringsData:(id)arg1 forLocalization:(id)arg2 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
@end
