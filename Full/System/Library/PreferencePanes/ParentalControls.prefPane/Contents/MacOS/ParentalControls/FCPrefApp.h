/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/ParentalControls.prefPane/Contents/MacOS/ParentalControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FamilyControls/FCApp.h>

@class NSString, NSAttributedString;

@interface FCPrefApp : FCApp {

	char _allowed;
	NSString* _container;
	NSAttributedString* _attributedDisplayName;

}
+(id)appWithDictionary:(id)arg1 ;
+(id)appWithPath:(id)arg1 ;
-(void)setAllowed:(char)arg1 usingAppStoreRating:(id)arg2 ;
-(char)allowed;
-(void)setAttributedDisplayName:(id)arg1 ;
-(id)initWithPath:(id)arg1 addingSubApps:(char)arg2 creatingSignature:(char)arg3 detached:(char)arg4 ;
-(id)cacheKey;
-(id)attributedDisplayName;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(id)container;
-(void)setContainer:(id)arg1 ;
@end
