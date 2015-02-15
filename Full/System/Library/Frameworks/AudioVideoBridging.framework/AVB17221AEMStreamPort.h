/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMPort.h>
#import <AudioVideoBridging/NSCopying.h>

@class NSArray;

@interface AVB17221AEMStreamPort : AVB17221AEMPort <NSCopying> {

	unsigned short numberOfClusters;
	unsigned short baseCluster;
	unsigned short numberOfMaps;
	unsigned short baseMap;
	NSArray* clusters;
	NSArray* maps;
	NSArray* dynamicMappings;

}

@property (assign) unsigned short numberOfClusters; 
@property (assign) unsigned short baseCluster; 
@property (assign) unsigned short numberOfMaps; 
@property (assign) unsigned short baseMap; 
@property (copy) NSArray * clusters; 
@property (copy) NSArray * maps; 
@property (copy) NSArray * dynamicMappings; 
-(char)updateWithDescriptor:(/*function pointer*/void**)arg1 descriptorLength:(unsigned short)arg2 ;
-(unsigned long long)setDescriptor:(/*function pointer*/void**)arg1 ;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2 ;
-(id)xmlKey;
-(char)isExpectedDescriptorType:(unsigned short)arg1 ;
-(id)objectLogName;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(void)setNumberOfClusters:(unsigned short)arg1 ;
-(void)setBaseCluster:(unsigned short)arg1 ;
-(void)setNumberOfMaps:(unsigned short)arg1 ;
-(void)setBaseMap:(unsigned short)arg1 ;
-(unsigned short)numberOfClusters;
-(unsigned short)baseCluster;
-(unsigned short)numberOfMaps;
-(unsigned short)baseMap;
-(void)setMaps:(NSArray *)arg1 ;
-(void)updateDependentContent;
-(void)renumberDescriptorWithNextIndexes:(id)arg1 ;
-(id)validChildrenDescriptorTypes;
-(NSArray *)dynamicMappings;
-(void)setDynamicMappings:(NSArray *)arg1 ;
-(id)plistRepresentation;
-(NSArray *)maps;
-(void)setClusters:(NSArray *)arg1 ;
-(NSArray *)clusters;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
