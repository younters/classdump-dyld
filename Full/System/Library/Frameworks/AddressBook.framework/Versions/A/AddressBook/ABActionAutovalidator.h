/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABActionAutovalidatorCache;

@interface ABActionAutovalidator : NSObject {

	id _target;
	ABActionAutovalidatorCache* _cache;

}
-(id)initWithTarget:(id)arg1 cache:(id)arg2 ;
-(char)validateAction:(SEL)arg1 withMenuItem:(id)arg2 ;
-(char)isAlwaysValid:(SEL)arg1 ;
-(char)isValidAction:(SEL)arg1 withMenuItem:(id)arg2 ;
-(id)setEntryForAction:(SEL)arg1 ;
-(SEL)selectorForSimpleAction:(SEL)arg1 ;
-(SEL)selectorForMenuAction:(SEL)arg1 ;
-(void)dealloc;
-(id)description;
-(char)validateMenuItem:(id)arg1 ;
-(char)validateAction:(SEL)arg1 ;
-(id)initWithTarget:(id)arg1 ;
@end
