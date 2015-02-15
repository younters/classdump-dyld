/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Ink/Ink-Structs.h>
@class NSString;

@interface InkRecognizerMessageBase : NSObject {

	id _inkRecognizerData;
	NSString* _dataKey;
	void* _explicitTarget;

}
+(int)addPhraseRef:(void*)arg1 toEvent:(OpaqueEventRefRef)arg2 withEventType:(unsigned)arg3 ;
-(id)initWithInkRecognizerData:(id)arg1 andKey:(id)arg2 ;
-(char)postCarbonEvent;
-(int)finishPostingCarbonEvent:(OpaqueEventRefRef)arg1 withEventType:(unsigned)arg2 ;
-(char)postCarbonEventAgainAsPhraseEventWithPhraseRef:(void*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
