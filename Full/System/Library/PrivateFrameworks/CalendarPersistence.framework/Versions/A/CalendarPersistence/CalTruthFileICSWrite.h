/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalTruthFileMethod.h>

@class NSString, ICSDocument;

@interface CalTruthFileICSWrite : NSObject <CalTruthFileMethod> {

	NSString* _path;
	ICSDocument* _document;

}
+(id)methodWithPath:(id)arg1 document:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)main;
-(id)initWithPath:(id)arg1 document:(id)arg2 ;
@end
