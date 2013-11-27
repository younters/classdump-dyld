/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSString;

@interface TSWPCitationRecord : TSPObject {

	BOOL _hideAuthorNames;
	BOOL _hideYear;
	NSString* _endNoteXML;
	NSString* _pageRange;
	NSString* _prefix;
	NSString* _suffix;
	NSString* _authorsString;
	NSString* _title;
	NSString* _year;
	NSString* _type;

}

@property (nonatomic,copy) NSString * endNoteXML;                 //@synthesize endNoteXML=_endNoteXML - In the implementation block
@property (assign,nonatomic) BOOL hideAuthorNames;                //@synthesize hideAuthorNames=_hideAuthorNames - In the implementation block
@property (assign,nonatomic) BOOL hideYear;                       //@synthesize hideYear=_hideYear - In the implementation block
@property (nonatomic,copy) NSString * pageRange;                  //@synthesize pageRange=_pageRange - In the implementation block
@property (nonatomic,copy) NSString * prefix;                     //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * suffix;                     //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,copy) NSString * authorsString;              //@synthesize authorsString=_authorsString - In the implementation block
@property (nonatomic,copy) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * year;                       //@synthesize year=_year - In the implementation block
@property (nonatomic,copy) NSString * type;                       //@synthesize type=_type - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)p_copyPropertiesToObject:(id)arg1 ;
-(id)endNoteXML;
-(void)setEndNoteXML:(id)arg1 ;
-(BOOL)hideAuthorNames;
-(void)setHideAuthorNames:(BOOL)arg1 ;
-(BOOL)hideYear;
-(void)setHideYear:(BOOL)arg1 ;
-(id)authorsString;
-(void)setAuthorsString:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(id)year;
-(void)setYear:(id)arg1 ;
-(id)pageRange;
-(void)setPageRange:(id)arg1 ;
-(void)setSuffix:(id)arg1 ;
-(id)suffix;
-(id)prefix;
-(void)setPrefix:(id)arg1 ;
@end
