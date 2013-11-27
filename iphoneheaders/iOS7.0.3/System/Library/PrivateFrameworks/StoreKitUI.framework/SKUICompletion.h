/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUICacheCoding.h>

@class NSString, NSMutableDictionary;

@interface SKUICompletion : NSObject <SKUICacheCoding> {

	NSString* _alternateTitle;
	NSString* _title;
	NSString* _URLString;

}

@property (nonatomic,readonly) NSString * alternateTitle;                              //@synthesize alternateTitle=_alternateTitle - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * URLString;                                   //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(id)title;
-(id)URLString;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)cacheRepresentation;
-(id)initWithCompletionDictionary:(id)arg1 ;
-(void).cxx_destruct;
-(id)alternateTitle;
@end
