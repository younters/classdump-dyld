/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class EDResources, CHDFormula, OADGraphicProperties;

@interface CHDTrendlineLabel : NSObject {

	EDResources* mResources;
	CHDFormula* mName;
	unsigned mLastCachedNameStringIndex;
	unsigned mContentFormatId;
	bool mGeneratedText;
	bool mAutomaticLabelDeleted;
	OADGraphicProperties* mGraphicProperties;

}
+(id)trendlineLabelWithResources:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)graphicProperties;
-(unsigned)contentFormatId;
-(id)contentFormat;
-(id)lastCachedName;
-(void)setContentFormatId:(unsigned)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setLastCachedName:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setName:(id)arg1 chart:(id)arg2 ;
-(void)setGeneratedText:(bool)arg1 ;
-(void)setAutomaticLabelDeleted:(bool)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(unsigned)stringIndex;
-(void)setStringIndex:(unsigned)arg1 ;
-(bool)isGeneratedText;
-(bool)isAutomaticLabelDeleted;
@end
