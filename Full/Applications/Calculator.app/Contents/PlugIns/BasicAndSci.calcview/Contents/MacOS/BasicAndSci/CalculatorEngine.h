/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calculator.app/Contents/PlugIns/BasicAndSci.calcview/Contents/MacOS/BasicAndSci
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LCDViewable, PaperTape, SpeechProtocol, CalculatorView;
@class NSMutableString, NSDecimalNumber;

@interface CalculatorEngine : NSObject {

	id<LCDViewable> _frontEnd;
	id<PaperTape> _paperTape;
	id<SpeechProtocol> _speechController;
	char _radMode;
	char _errorState;
	NSMutableString* _inputString;
	NSMutableString* _exponentString;
	NSDecimalNumber* _lastNumber;
	NSDecimalNumber* _memoryNumber;
	id<CalculatorView> _calcView;

}

@property (assign) char radMode; 
@property (readonly) char eeMode; 
@property (assign) id<LCDViewable> frontEnd;                         //@synthesize frontEnd=_frontEnd - In the implementation block
@property (assign) id<PaperTape> paperTape;                          //@synthesize paperTape=_paperTape - In the implementation block
@property (assign) id<SpeechProtocol> speechController;              //@synthesize speechController=_speechController - In the implementation block
@property (assign) id<CalculatorView> calcView;                      //@synthesize calcView=_calcView - In the implementation block
-(char)radMode;
-(void)setCalcView:(id<CalculatorView>)arg1 ;
-(void)userEnteredOperator:(int)arg1 ;
-(void)userEnteredNumber:(id)arg1 ;
-(char)userEnteredDigit:(long long)arg1 ;
-(char)userDeletedDigit;
-(char)userEnteredDecimalSeparator;
-(void)performMemoryOperation:(id)arg1 ;
-(char)userEnteredEEMode;
-(void)setRadMode:(char)arg1 ;
-(void)setFrontEnd:(id<LCDViewable>)arg1 ;
-(char)eeMode;
-(char)userEnteredToken:(id)arg1 ;
-(char)completeEEMode:(int)arg1 ;
-(void)allClear;
-(id<CalculatorView>)calcView;
-(void)handleOperationException:(id)arg1 ;
-(void)test_userEnteredOperator:(id)arg1 ;
-(id<LCDViewable>)frontEnd;
-(id<PaperTape>)paperTape;
-(id<SpeechProtocol>)speechController;
-(id)rpnStack;
-(void)logState;
-(void)setSpeechController:(id<SpeechProtocol>)arg1 ;
-(void)setPaperTape:(id<PaperTape>)arg1 ;
-(void)setPrecision:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)clear;
-(id)displayNumber;
@end
