/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSCopying;
@class NSView;

@interface InfiniteSwipeControllerSpanningView : NSObject {

	NSView* _view;
	id<NSCopying> _startObject;
	id<NSCopying> _endObject;
	unsigned long long _startIndex;
	unsigned long long _endIndex;
	double _startInset;
	double _endInset;
	double _position;
	double _size;

}

@property (retain) NSView * view;                              //@synthesize view=_view - In the implementation block
@property (retain) id<NSCopying> startObject;                  //@synthesize startObject=_startObject - In the implementation block
@property (retain) id<NSCopying> endObject;                    //@synthesize endObject=_endObject - In the implementation block
@property (assign) unsigned long long startIndex;              //@synthesize startIndex=_startIndex - In the implementation block
@property (assign) unsigned long long endIndex;                //@synthesize endIndex=_endIndex - In the implementation block
@property (assign) double startInset;                          //@synthesize startInset=_startInset - In the implementation block
@property (assign) double endInset;                            //@synthesize endInset=_endInset - In the implementation block
@property (assign) double position;                            //@synthesize position=_position - In the implementation block
@property (assign) double size;                                //@synthesize size=_size - In the implementation block
-(void)setStartObject:(id<NSCopying>)arg1 ;
-(void)setEndObject:(id<NSCopying>)arg1 ;
-(void)setStartInset:(double)arg1 ;
-(void)setEndInset:(double)arg1 ;
-(id<NSCopying>)startObject;
-(id<NSCopying>)endObject;
-(double)startInset;
-(double)endInset;
-(void)setStartIndex:(unsigned long long)arg1 ;
-(unsigned long long)startIndex;
-(unsigned long long)endIndex;
-(void)setEndIndex:(unsigned long long)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(NSView *)view;
-(double)size;
-(void)setSize:(double)arg1 ;
-(void)setView:(NSView *)arg1 ;
@end
