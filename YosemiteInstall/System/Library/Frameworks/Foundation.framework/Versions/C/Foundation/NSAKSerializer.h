/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSAKSerializer : NSObject {

	id ss;

}
-(unsigned long long)serializePropertyList:(id)arg1 ;
-(unsigned long long)serializeData:(id)arg1 ;
-(unsigned long long)serializeList:(id)arg1 ;
-(unsigned long long)serializeString:(id)arg1 ;
-(unsigned long long)serializeListItemIn:(id)arg1 at:(unsigned long long)arg2 ;
-(unsigned long long)serializeObject:(id)arg1 ;
-(unsigned long long)serializePListKeyIn:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(unsigned long long)serializePListValueIn:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)initForSerializerStream:(id)arg1 ;
-(id)serializerStream;
-(void)dealloc;
@end
