/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/MZXMLMarshalling.framework/Versions/A/MZXMLMarshalling
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MZXMLMarshalling/MZXMLPersistentRepository.h>

@class NSMutableArray;

@interface MZXMLFileSystemDataRepository : NSObject <MZXMLPersistentRepository> {

	NSMutableArray* _searchPaths;
	NSMutableArray* _searchBundles;

}
+(/*function pointer*/void*)setRepositoryCreateFunction:(/*function pointer*/void*)arg1 ;
-(id)applicationBundle;
-(id)documentNamed:(id)arg1 error:(id*)arg2 ;
-(id)dataForName:(id)arg1 error:(id*)arg2 ;
-(char)containsDocument:(id)arg1 ;
-(char)containsData:(id)arg1 ;
-(void)addPathToSearchPaths:(id)arg1 processName:(id)arg2 ;
-(void)initializeSearchPaths;
-(id)pathForResourceNamed:(id)arg1 ;
-(id)searchPaths;
-(id)pathForResourceInBundlesNamed:(id)arg1 ;
-(id)writeFileToUserOverrideArea:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(id)createUserOverrideArea:(id)arg1 ;
-(id)userOverrideArea;
-(id)writeFile:(id)arg1 toPath:(id)arg2 name:(id)arg3 error:(id*)arg4 ;
-(id)writeDocumentToUserOverrideArea:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(id)writeFileToVersionedUserOverrideArea:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(void)setSearchPaths:(id)arg1 ;
-(id)searchBundles;
-(void)setSearchBundles:(id)arg1 ;
-(id)applicationVersion;
-(id)init;
-(void)dealloc;
-(id)description;
@end
