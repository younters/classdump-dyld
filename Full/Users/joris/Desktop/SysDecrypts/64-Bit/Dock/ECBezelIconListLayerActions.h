/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ECBezelIconListLayerActions <NSObject>
@required
-(void)bezeIconListLayer:(id)arg1 itemAtIndexSelected:(unsigned long long)arg2;
-(void)bezeIconListLayer:(id)arg1 itemAtIndexSelected:(unsigned long long)arg2 forDrag:(OpaqueCoreDrag*)arg3;
-(void)bezeIconListLayer:(id)arg1 itemAtIndexClicked:(unsigned long long)arg2;
-(BOOL)bezeIconListLayer:(id)arg1 itemDroppedAtIndex:(unsigned long long)arg2 forDrag:(OpaqueCoreDrag*)arg3;
-(CGRect*)bezelIconListLayer:(id)arg1 convertRectToGlobal:(CGRect)arg2;
-(unsigned)windowForBezelIconListLayer:(id)arg1;

@end
