/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VSRecognitionSessionDelegate <NSObject>
@optional
-(void)recognitionSessionDidBeginAction:(id)arg1;
-(BOOL)recognitionSessionWillBeginAction:(id)arg1;
-(id)recognitionSession:(id)arg1 openURL:(id)arg2;
-(void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2;
-(void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2;
@end
