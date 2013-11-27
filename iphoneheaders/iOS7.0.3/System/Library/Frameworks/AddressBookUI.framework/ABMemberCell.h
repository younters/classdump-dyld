/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class ABStyleProvider, ABMemberNameView, ABUIPerson;

@interface ABMemberCell : UITableViewCell {

	ABStyleProvider* _styleProvider;
	BOOL _isMeCard;
	ABMemberNameView* _contactNameView;
	ABUIPerson* _person;

}

@property (nonatomic,readonly) <ABStyleProvider> * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ABUIPerson * person;                              //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) BOOL isMeCard;                                    //@synthesize isMeCard=_isMeCard - In the implementation block
@property (nonatomic,retain) ABMemberNameView * contactNameView;               //@synthesize contactNameView=_contactNameView - In the implementation block
-(id)styleProvider;
-(void)setIsMeCard:(BOOL)arg1 ;
-(id)initWithStyleProvider:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id)contactNameView;
-(void)setContactNameView:(id)arg1 ;
-(BOOL)isMeCard;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(id)_scriptingInfo;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)person;
-(void)setPerson:(id)arg1 ;
@end
