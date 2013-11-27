/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol WebDocumentRepresentation <NSObject>
@required
-(void)setDataSource:(id)arg1;
-(id)title;
-(void)finishedLoadingWithDataSource:(id)arg1;
-(void)receivedData:(id)arg1 withDataSource:(id)arg2;
-(void)receivedError:(id)arg1 withDataSource:(id)arg2;
-(BOOL)canProvideDocumentSource;
-(id)documentSource;
@end
