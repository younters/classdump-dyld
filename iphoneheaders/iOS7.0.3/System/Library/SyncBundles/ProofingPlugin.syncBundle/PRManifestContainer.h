/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDictionary, NSArray;

@interface PRManifestContainer : NSObject {

	unsigned _containerVersion;
	int _syncType;
	NSDictionary* _metadata;
	NSArray* _manifest;

}

@property (assign,nonatomic) unsigned containerVersion;                   //@synthesize containerVersion=_containerVersion - In the implementation block
@property (assign,nonatomic) int syncType;                                //@synthesize syncType=_syncType - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * manifest;                          //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRep; 
-(void)setContainerVersion:(unsigned)arg1 ;
-(unsigned)containerVersion;
-(id)dictionaryRep;
-(id)dictionaryRepRenamingRootTo:(id)arg1 ;
-(int)syncType;
-(void)setSyncType:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(id)manifest;
-(void)setManifest:(id)arg1 ;
@end
