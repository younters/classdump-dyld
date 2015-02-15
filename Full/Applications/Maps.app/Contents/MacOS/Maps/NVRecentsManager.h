/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/NVPlacesManager.h>

@class NVSerializableObject;

@interface NVRecentsManager : NVPlacesManager {

	NVSerializableObject* _lastPerformedQuery;

}

@property (nonatomic,retain) NVSerializableObject * lastPerformedQuery;              //@synthesize lastPerformedQuery=_lastPerformedQuery - In the implementation block
+(id)sharedManager;
-(id)syncIdentifier;
-(char)syncShouldUseCustomStore;
-(char)syncInvertedOrdering;
-(char)syncShouldUseItemPositions;
-(id)newSyncedItemForSyncData:(id)arg1 ;
-(id)persistenceURL;
-(id)elementsFromPropertyList:(id)arg1 ;
-(id)propertyListFromCurrentElements;
-(id)_newElementFromSearchRequestStorage:(id)arg1 ;
-(id)_removeFromElements:(id)arg1 passingTests:(/*^block*/id)arg2 ;
-(NVSerializableObject *)lastPerformedQuery;
-(char)isValidElement:(id)arg1 ;
-(void)setLastPerformedQuery:(NVSerializableObject *)arg1 ;
-(id)allElements;
-(id)addElement:(id)arg1 ;
@end
