/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Network.prefPane/Contents/MacOS/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ANPAccumulator : NSObject {

	long long _deltas[20];
	long long _curIndex;
	long long _maxIndex;
	long long _lastValue;

}
-(long long)nextValue:(long long)arg1 ;
-(void)initValues:(long long)arg1 ;
-(long long)maxDelta;
@end
