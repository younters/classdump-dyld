/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AKIntelligentSketchLogger : NSObject
+(void)initialize;
+(id)sharedInstance;
-(void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2 ;
-(void)openFinderWindowToLogs;
-(char)_loggingIsEnabled;
-(id)_newLogPathWithShapeName:(id)arg1 ;
-(id)_logsPath;
-(id)_fileName:(id)arg1 ;
@end
