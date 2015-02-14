/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABPerson;

@interface ABUserActivityScore : NSObject {

	unsigned long long _score;
	ABPerson* _person;

}

@property (retain) ABPerson * person;                     //@synthesize person=_person - In the implementation block
@property (assign) unsigned long long score;              //@synthesize score=_score - In the implementation block
+(id)matchWithPerson:(id)arg1 score:(unsigned long long)arg2 ;
-(id)initWithPerson:(id)arg1 score:(unsigned long long)arg2 ;
-(unsigned long long)score;
-(void)setScore:(unsigned long long)arg1 ;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(ABPerson *)person;
-(void)setPerson:(ABPerson *)arg1 ;
@end
