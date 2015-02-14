/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSRequestOperation.h>

@class NSArray;

@interface MFEWSGetItemDataRequestOperation : MFEWSRequestOperation {

	NSArray* _itemIdTypes;

}

@property (nonatomic,copy,readonly) NSArray * itemIdTypes;              //@synthesize itemIdTypes=_itemIdTypes - In the implementation block
+(Class)classForResponse;
-(id)initWithGateway:(id)arg1 errorHandler:(id)arg2 ;
-(id)activityString;
-(id)prepareRequest;
-(id)initWithItemIdTypes:(id)arg1 dataHandler:(/*^block*/id)arg2 gateway:(id)arg3 errorHandler:(id)arg4 ;
-(NSArray *)itemIdTypes;
@end
