/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSSet, NSURL;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {

	NSSet* _propertiesToSet;
	char _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSURL * priorOrderedURL;                       //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                             //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (nonatomic,retain) NSSet * propertiesToSet;                       //@synthesize propertiesToSet=_propertiesToSet - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)additionalHeaderValues;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)setPropertiesToSet:(NSSet *)arg1 ;
-(NSSet *)propertiesToSet;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(int)absoluteOrder;
-(id)httpMethod;
-(id)requestBody;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSURL *)priorOrderedURL;
-(id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2 ;
@end
