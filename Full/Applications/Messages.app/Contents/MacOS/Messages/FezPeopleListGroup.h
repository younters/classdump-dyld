/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Messages/Messages-Structs.h>
@class NSMutableArray, NSDictionary, NSString, FezPeopleListItem, NSRecursiveLock, NSArray;

@interface FezPeopleListGroup : NSObject {

	NSMutableArray* _members;
	NSDictionary* _properties;
	NSString* _name;
	NSString* _localizableName;
	FezPeopleListItem* _item;
	NSRecursiveLock* _lock;
	char _expanded;
	int _maxMembers;
	char _supportsReordering;
	char _supportsMemberReordering;
	char _supportsRename;
	char _supportsAdding;
	char _supportsRemoving;
	char _supportsOfflineMembers;

}

@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (retain,readonly) NSString * displayName; 
@property (setter=setExpanded:) char isExpanded;                    //@synthesize expanded=_expanded - In the implementation block
@property (retain) FezPeopleListItem * peopleListItem;              //@synthesize item=_item - In the implementation block
@property (retain,readonly) NSArray * members; 
@property (retain,readonly) NSArray * visibleMembers; 
@property (readonly) unsigned long long numberOfItems; 
@property (readonly) int numberOfOnlineItems; 
@property (readonly) int actualNumberOfOnlineItems; 
@property (retain) NSDictionary * properties; 
@property (assign) int maxMembers;                                  //@synthesize maxMembers=_maxMembers - In the implementation block
@property (assign) char supportsReordering;                         //@synthesize supportsReordering=_supportsReordering - In the implementation block
@property (assign) char supportsMemberReordering;                   //@synthesize supportsMemberReordering=_supportsMemberReordering - In the implementation block
@property (assign) char supportsRename;                             //@synthesize supportsRename=_supportsRename - In the implementation block
@property (assign) char supportsAdding;                             //@synthesize supportsAdding=_supportsAdding - In the implementation block
@property (assign) char supportsRemoving;                           //@synthesize supportsRemoving=_supportsRemoving - In the implementation block
@property (assign) char supportsOfflineMembers;                     //@synthesize supportsOfflineMembers=_supportsOfflineMembers - In the implementation block
@property (retain) NSString * localizableName;                      //@synthesize localizableName=_localizableName - In the implementation block
@property (retain) NSMutableArray * _members;                       //@synthesize members=_members - In the implementation block
@property (retain) NSRecursiveLock * _lock;                         //@synthesize lock=_lock - In the implementation block
-(FezPeopleListItem *)peopleListItem;
-(char)supportsReordering;
-(char)supportsRemoving;
-(NSArray *)visibleMembers;
-(char)supportsMemberReordering;
-(int)maxMembers;
-(int)numberOfOnlineItems;
-(NSRecursiveLock *)_lock;
-(void)addPeopleListItem:(id)arg1 ;
-(void)removePeopleListItem:(id)arg1 ;
-(char)supportsOfflineMembers;
-(void)setPeopleListItem:(FezPeopleListItem *)arg1 ;
-(void)setSupportsOfflineMembers:(char)arg1 ;
-(SCD_Struct_Fe37)filterForIMHandle:(id)arg1 ;
-(char)shouldContainIMHandle:(id)arg1 ;
-(char)shouldConsumeIMHandle:(id)arg1 ;
-(void)setMaxMembers:(int)arg1 ;
-(void)setSupportsReordering:(char)arg1 ;
-(void)setSupportsMemberReordering:(char)arg1 ;
-(void)setSupportsRename:(char)arg1 ;
-(void)setSupportsAdding:(char)arg1 ;
-(void)setSupportsRemoving:(char)arg1 ;
-(void)setLocalizableName:(NSString *)arg1 ;
-(NSString *)localizableName;
-(int)actualNumberOfOnlineItems;
-(void)set_lock:(NSRecursiveLock *)arg1 ;
-(void)set_members:(NSMutableArray *)arg1 ;
-(char)supportsRename;
-(NSMutableArray *)_members;
-(void)setProperties:(NSDictionary *)arg1 ;
-(char)supportsAdding;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)numberOfItems;
-(void)removeAllItems;
-(NSString *)displayName;
-(NSDictionary *)properties;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
-(NSArray *)members;
@end
