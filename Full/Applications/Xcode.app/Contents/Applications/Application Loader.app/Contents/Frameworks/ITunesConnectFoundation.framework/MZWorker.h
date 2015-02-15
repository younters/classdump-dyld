/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/ITunesConnectFoundation.framework/ITunesConnectFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MZWorker <NSObject>
@optional
-(void)seriesCompleted;

@required
-(char)hasErrors;
-(id)infoMessages;
-(char)hasInfoMessages;
-(void)addErrors:(id)arg1;
-(void)addWarning:(id)arg1;
-(void)addWarnings:(id)arg1;
-(void)addInfoMessages:(id)arg1;
-(id)warnings;
-(id)errors;
-(void)addError:(id)arg1;
-(id)statusMessage;
-(void)cancel;
-(void)run;
-(id)errorMessage;
-(double)percentComplete;

@end
