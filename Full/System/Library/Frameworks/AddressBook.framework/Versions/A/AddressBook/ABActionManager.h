/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, ABCardView, ABAddressBook;

@interface ABActionManager : NSObject {

	NSString* _personUniqueId;
	ABCardView* _cardView;
	NSString* _identifier;
	id _transitionProvider;

}

@property (retain) id transitionProvider;                      //@synthesize transitionProvider=_transitionProvider - In the implementation block
@property (retain) ABCardView * cardView;                      //@synthesize cardView=_cardView - In the implementation block
@property (copy) NSString * personUniqueId;                    //@synthesize personUniqueId=_personUniqueId - In the implementation block
@property (retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (readonly) ABAddressBook * addressBook; 
-(ABAddressBook *)addressBook;
-(void)setCardView:(ABCardView *)arg1 ;
-(ABCardView *)cardView;
-(void)setPersonUniqueId:(NSString *)arg1 ;
-(char)hasActionsForProperty:(id)arg1 ;
-(id)transitionProvider;
-(void)performActionForMenuItem:(id)arg1 ;
-(NSString *)personUniqueId;
-(void)setTransitionProvider:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
@end

