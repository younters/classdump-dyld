/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ObjectCount : NSObject {

	NSString* _name;
	unsigned long long _count;

}

@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)initWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCount:(unsigned long long)arg1 ;
@end

