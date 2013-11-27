/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, WDDocument, WDStyle;

@interface WDListDefinition : NSObject <NSCopying> {

	int mType;
	NSMutableArray* mLevels;
	long mListId;
	WDDocument* mDocument;
	WDStyle* mListStyle;
	WDStyle* mListStyleLink;

}
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(int)levelCount;
-(id)levelAt:(int)arg1 ;
-(long)listId;
-(id)addLevel;
-(id)listStyleLink;
-(void)setListStyleLink:(id)arg1 ;
-(void)setListId:(long)arg1 ;
-(id)listStyle;
-(void)setListStyle:(id)arg1 ;
@end
