/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FavoriteButtonMailboxProperties : NSObject {

	char _isContainer;
	char _isPreferredSelection;
	int _type;
	NSString* _persistentIdentifier;
	NSString* _selectedSubMailboxPersistentIdentifier;
	NSString* _displayName;
	NSString* _accountURLString;

}

@property (nonatomic,retain) NSString * persistentIdentifier;                                //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,retain) NSString * selectedSubMailboxPersistentIdentifier;              //@synthesize selectedSubMailboxPersistentIdentifier=_selectedSubMailboxPersistentIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * accountURLString;                                    //@synthesize accountURLString=_accountURLString - In the implementation block
@property (assign,nonatomic) int type;                                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char isContainer;                                               //@synthesize isContainer=_isContainer - In the implementation block
@property (assign,nonatomic) char isPreferredSelection;                                      //@synthesize isPreferredSelection=_isPreferredSelection - In the implementation block
-(id)initWithPersistentIdentifier:(id)arg1 selectedSubMailboxPersistentIdentifier:(id)arg2 displayName:(id)arg3 accountURLString:(id)arg4 type:(int)arg5 isContainer:(char)arg6 isPreferredSelection:(char)arg7 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)selectedSubMailboxPersistentIdentifier;
-(void)setSelectedSubMailboxPersistentIdentifier:(NSString *)arg1 ;
-(void)setAccountURLString:(NSString *)arg1 ;
-(char)isPreferredSelection;
-(void)setIsPreferredSelection:(char)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)accountURLString;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)persistentIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(char)isContainer;
-(void)setIsContainer:(char)arg1 ;
@end
