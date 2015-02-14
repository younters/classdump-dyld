/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class THDocumentRoot, NSError, NSException;

@interface THBookOpener : NSOperation {

	THDocumentRoot* mDocumentRoot;
	NSError* mError;
	NSException* mException;

}

@property (nonatomic,retain) THDocumentRoot * documentRoot; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) NSException * exception; 
@property (nonatomic,readonly) char isSuccessful; 
@property (nonatomic,readonly) char wasError; 
+(id)loadingQueue;
-(void)setDocumentRoot:(THDocumentRoot *)arg1 ;
-(char)wasError;
-(id)initWithDocumentRoot:(id)arg1 ;
-(THDocumentRoot *)documentRoot;
-(char)isSuccessful;
-(NSException *)exception;
-(void)setException:(NSException *)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)main;
@end
