/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreMap.h>

@class NSXMLDocument, NSXMLElement, NSMutableDictionary;

@interface NSXMLDocumentMap : NSPersistentStoreMap {

	NSXMLDocument* _document;
	NSXMLElement* _oidnode;
	NSMutableDictionary* _theMap;
	NSMutableDictionary* _byEntityName;

}
+(void)_updateDocument:(id)arg1 withMetadata:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(void)_insertNode:(id)arg1 byEntityName:(id)arg2 ;
-(void)_processMetadataNode:(id)arg1 ;
-(void)_processDBInfoNode:(id)arg1 ;
-(void)_processInstanceNode:(id)arg1 ;
-(id)_createDocument;
-(char)_isDocumentXMLStore:(id)arg1 ;
-(void)_processDocument;
-(id)xmlInfoForAttribute:(id)arg1 ;
-(id)retainedXmlInfoForRelationship:(id)arg1 ;
-(id)getXMLAttributeValueFromObject:(id)arg1 forAttribute:(id)arg2 ;
-(void)createAttributeChildOnNode:(id)arg1 forAttribute:(id)arg2 type:(id)arg3 andValue:(id)arg4 ;
-(id)createRelationshipChildOnNode:(id)arg1 forRelationshipDescription:(id)arg2 ;
-(id)getIDRefStringForValue:(id)arg1 ofRelationship:(id)arg2 stringKeys:(id)arg3 objectIDMapping:(id)arg4 objectForError:(id)arg5 ;
-(id)nodeFromManagedObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)_deleteNode:(id)arg1 byEntityName:(id)arg2 ;
-(void)updateXMLNode:(id)arg1 fromObject:(id)arg2 objectIDMapping:(id)arg3 ;
-(void)_updateDocumentMetadata;
-(id)initWithDocument:(id)arg1 forStore:(id)arg2 ;
-(id)_theDictionary;
-(unsigned long long)nextPK64;
-(void)addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2 ;
-(id)handleFetchRequest:(id)arg1 ;
-(char)containsObjectWithID:(id)arg1 ;
-(void)prepareForSave;
-(void)dealloc;
-(id)document;
@end
