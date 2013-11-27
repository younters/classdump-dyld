/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface PDHeadersFooters : NSObject {

	BOOL mHasDateTime;
	BOOL mHasNowDateTime;
	BOOL mHasUserDateTime;
	BOOL mHasSlideNumber;
	BOOL mHasHeader;
	BOOL mHasFooter;
	int mDateTimeFormat;
	NSString* mUserDateTime;
	NSString* mHeader;
	NSString* mFooter;

}
-(void)dealloc;
-(BOOL)hasDateTime;
-(void)setHasDateTime:(BOOL)arg1 ;
-(BOOL)hasNowDateTime;
-(void)setHasNowDateTime:(BOOL)arg1 ;
-(BOOL)hasUserDateTime;
-(void)setHasUserDateTime:(BOOL)arg1 ;
-(BOOL)hasSlideNumber;
-(void)setHasSlideNumber:(BOOL)arg1 ;
-(BOOL)hasHeader;
-(void)setHasHeader:(BOOL)arg1 ;
-(BOOL)hasFooter;
-(void)setHasFooter:(BOOL)arg1 ;
-(id)userDateTime;
-(void)setUserDateTime:(id)arg1 ;
-(id)header;
-(void)setHeader:(id)arg1 ;
-(id)footer;
-(void)setFooter:(id)arg1 ;
@end
