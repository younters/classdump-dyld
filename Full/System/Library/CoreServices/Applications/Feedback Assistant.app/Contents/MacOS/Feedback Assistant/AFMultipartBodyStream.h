/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/Feedback Assistant-Structs.h>
#import <CoreFoundation/NSInputStream.h>
#import <Feedback Assistant/NSCopying.h>
#import <Feedback Assistant/NSStreamDelegate.h>

@class NSError, NSMutableArray, NSEnumerator, AFHTTPBodyPart, NSString;

@interface AFMultipartBodyStream : NSInputStream <NSCopying, NSStreamDelegate> {

	unsigned long long _streamStatus;
	NSError* _streamError;
	unsigned long long _stringEncoding;
	NSMutableArray* _HTTPBodyParts;
	NSEnumerator* _HTTPBodyPartEnumerator;
	AFHTTPBodyPart* _currentHTTPBodyPart;
	unsigned long long _numberOfBytesInPacket;
	double _delay;

}

@property (assign,nonatomic) unsigned long long numberOfBytesInPacket;              //@synthesize numberOfBytesInPacket=_numberOfBytesInPacket - In the implementation block
@property (assign,nonatomic) double delay;                                          //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) unsigned long long contentLength; 
@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (assign,nonatomic) unsigned long long streamStatus;                       //@synthesize streamStatus=_streamStatus - In the implementation block
@property (nonatomic,retain) NSError * streamError;                                 //@synthesize streamError=_streamError - In the implementation block
@property (assign,nonatomic) unsigned long long stringEncoding;                     //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,retain) NSMutableArray * HTTPBodyParts;                        //@synthesize HTTPBodyParts=_HTTPBodyParts - In the implementation block
@property (nonatomic,retain) NSEnumerator * HTTPBodyPartEnumerator;                 //@synthesize HTTPBodyPartEnumerator=_HTTPBodyPartEnumerator - In the implementation block
@property (nonatomic,retain) AFHTTPBodyPart * currentHTTPBodyPart;                  //@synthesize currentHTTPBodyPart=_currentHTTPBodyPart - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStringEncoding:(unsigned long long)arg1 ;
-(void)appendHTTPBodyPart:(id)arg1 ;
-(void)setNumberOfBytesInPacket:(unsigned long long)arg1 ;
-(void)setInitialAndFinalBoundaries;
-(void)setHTTPBodyParts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)HTTPBodyParts;
-(unsigned long long)numberOfBytesInPacket;
-(AFHTTPBodyPart *)currentHTTPBodyPart;
-(NSEnumerator *)HTTPBodyPartEnumerator;
-(void)setCurrentHTTPBodyPart:(AFHTTPBodyPart *)arg1 ;
-(void)setStreamStatus:(unsigned long long)arg1 ;
-(void)setHTTPBodyPartEnumerator:(NSEnumerator *)arg1 ;
-(void)setStreamError:(NSError *)arg1 ;
-(unsigned long long)stringEncoding;
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(void)setDelay:(double)arg1 ;
-(unsigned long long)streamStatus;
-(NSError *)streamError;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(char)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(char)hasBytesAvailable;
-(char)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_AF12*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(unsigned long long)contentLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)close;
-(char)isEmpty;
-(void)open;
-(double)delay;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
@end
