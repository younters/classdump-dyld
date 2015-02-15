/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMNamedModelObject.h>

@class NSArray;

@interface AVB17221AEMControlBlock : AVB17221AEMNamedModelObject {

	unsigned short numberOfControls;
	unsigned short baseControl;
	unsigned short finalControlIndex;
	NSArray* controls;

}

@property (assign) unsigned short finalControlIndex; 
@property (copy) NSArray * controls; 
@property (assign) unsigned short numberOfControls; 
@property (assign) unsigned short baseControl; 
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
-(void)updateDependentContent;
-(void)renumberDescriptorWithNextIndexes:(id)arg1 ;
-(id)validChildrenDescriptorTypes;
-(void)setNumberOfControls:(unsigned short)arg1 ;
-(void)setBaseControl:(unsigned short)arg1 ;
-(unsigned short)numberOfControls;
-(unsigned short)baseControl;
-(void)setFinalControlIndex:(unsigned short)arg1 ;
-(unsigned short)finalControlIndex;
-(id)plistRepresentation;
-(NSArray *)controls;
-(void)setControls:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
