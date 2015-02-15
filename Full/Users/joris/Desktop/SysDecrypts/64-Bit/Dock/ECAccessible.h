/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSArray;


@protocol ECAccessible <NSObject>
@property (nonatomic,readonly) NSArray * axAttributeNames; 
@property (nonatomic,readonly) NSArray * axActionNames; 
@property (nonatomic,readonly) NSArray * axObservers; 
@required
-(int)axPerformAction:(id)arg1;
-(id)axValueForKey:(id)arg1 error:(int*)arg2;
-(unsigned long long)axAttributeValueCount:(id)arg1 error:(int*)arg2;
-(id)axAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxValues:(unsigned long long)arg3 error:(int*)arg4;
-(BOOL)axIsAttributeSettable:(id)arg1 error:(int*)arg2;
-(int)axSetValue:(id)arg1 forKey:(id)arg2;
-(id)axActionDescription:(id)arg1 error:(int*)arg2;
-(unsigned)axWindow:(int*)arg1;
-(NSArray *)axAttributeNames;
-(NSArray *)axActionNames;
-(NSArray *)axObservers;

@end
