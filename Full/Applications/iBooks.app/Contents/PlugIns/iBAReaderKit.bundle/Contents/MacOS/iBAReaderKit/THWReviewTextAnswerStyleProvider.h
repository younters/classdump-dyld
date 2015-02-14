/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/TSWPStyleProvider.h>

@class TSWPListStyle, TSWPParagraphStyle, TSWPStorage, NSString;

@interface THWReviewTextAnswerStyleProvider : NSObject <TSWPStyleProvider> {

	unsigned long long _index;
	TSWPListStyle* _listStyle;
	TSWPParagraphStyle* _listLabelStyle;
	TSWPStorage* _storage;

}

@property (nonatomic,readonly) unsigned long long index;                                //@synthesize index=_index - In the implementation block
@property (nonatomic,retain,readonly) TSWPListStyle * listStyle;                        //@synthesize listStyle=_listStyle - In the implementation block
@property (nonatomic,retain,readonly) TSWPParagraphStyle * listLabelStyle;              //@synthesize listLabelStyle=_listLabelStyle - In the implementation block
@property (nonatomic,retain,readonly) TSWPStorage * storage;                            //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSWPParagraphStyle *)listLabelStyle;
-(id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)initWithIndex:(unsigned long long)arg1 storage:(id)arg2 listLabelStyle:(id)arg3 ;
-(unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1 ;
-(id)listLabelParagraphStyleOverrideAtParIndex:(unsigned long long)arg1 ;
-(id)listStyleAtParIndex:(unsigned long long)arg1 ;
-(unsigned long long)listNumberAtParIndex:(unsigned long long)arg1 numberingData:(SCD_Struct_TH26*)arg2 ;
-(TSWPStorage *)storage;
-(TSWPListStyle *)listStyle;
-(void)dealloc;
-(unsigned long long)index;
@end
