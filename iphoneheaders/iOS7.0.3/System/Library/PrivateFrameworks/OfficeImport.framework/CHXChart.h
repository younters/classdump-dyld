/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXChart : NSObject
+(id)readFromXmlDocument:(xmlDoc*)arg1 chartStyleId:(int)arg2 state:(id)arg3 ;
+(void)readDefaultTextPropertiesFromXmlNode:(xmlNode*)arg1 chart:(id)arg2 state:(id)arg3 ;
+(void)readChartFromXmlNode:(xmlNode*)arg1 chart:(id)arg2 state:(id)arg3 ;
+(id)readFromXmlDocument:(xmlDoc*)arg1 state:(id)arg2 ;
+(int)chdDisplayBlanksAsEnumFromXmlElement:(xmlNode*)arg1 ;
@end
