/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface BKItemBindingDescription : NSObject {

	NSString* _bindObject;
	NSString* _bindKeyPath;
	NSString* _toObject;
	NSString* _toKeyPath;
	NSDictionary* _options;
	char _clearValueOnUnbind;

}
+(id)descriptionWithDictionary:(id)arg1 ;
-(id)bindObject;
-(id)bindKeyPath;
-(id)toKeyPath;
-(char)clearValueOnUnbind;
-(id)toObject;
-(void)dealloc;
-(id)options;
-(id)initWithDictionary:(id)arg1 ;
@end
