/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBAReaderKit/iBAReaderKit-Structs.h>
@class THDocumentRoot, NSArray, NSMutableDictionary;

@interface THDocumentNavigationModel : NSObject {

	THDocumentRoot* mDocumentRoot;
	NSArray* mNavigationUnits;
	NSMutableDictionary* mContentNodeGUIDToContentNodeDictionary;

}

@property (assign,nonatomic) THDocumentRoot * documentRoot; 
@property (nonatomic,retain) NSArray * navigationUnits; 
@property (nonatomic,retain,readonly) NSArray * contentNodes; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,retain) NSMutableDictionary * contentNodeGUIDToContentNodeDictionary; 
-(id)parentTitleForNavigationUnit:(id)arg1 ;
-(id)firstNavigationUnit;
-(id)majorSnippetForAbsolutePageIndex:(unsigned long long)arg1 withDocumentRoot:(id)arg2 forPresentationType:(id)arg3 ;
-(unsigned long long)absolutePageIndexForNavigationUnitRelativePageIndex:(unsigned long long)arg1 inNavigationUnit:(id)arg2 forPresentationType:(id)arg3 ;
-(id)titleStringForNavigationUnit:(id)arg1 ;
-(void)setDocumentRoot:(THDocumentRoot *)arg1 ;
-(id)linkForNavigationUnitIndex:(unsigned long long)arg1 ;
-(id)contentNodeForGUID:(id)arg1 ;
-(id)linkForContentNode:(id)arg1 fragment:(id)arg2 ;
-(id)p_lessonNodeForContentNode:(id)arg1 ;
-(id)p_chapterNodeForContentNode:(id)arg1 ;
-(void)setNavigationUnits:(NSArray *)arg1 ;
-(void)p_inferNavigationUnits;
-(NSArray *)navigationUnits;
-(NSArray *)contentNodes;
-(id)navigationUnitContainingContentNode:(id)arg1 ;
-(id)contentNodeForAbsolutePageIndex:(unsigned long long)arg1 ;
-(id)sectionIdentifierForNavigationUnit:(id)arg1 ;
-(THDocumentRoot *)documentRoot;
-(id)navigationUnitFollowingNavigationUnit:(id)arg1 ;
-(id)navigationUnitPrecedingNavigationUnit:(id)arg1 ;
-(id)chapterAndNumberStringForNavigationUnit:(id)arg1 ;
-(id)pageNumberStringForAbsolutePageIndex:(long long)arg1 forPresentationType:(id)arg2 ;
-(id)minorSnippetForAbsolutePageIndex:(unsigned long long)arg1 withDocumentRoot:(id)arg2 forPresentationType:(id)arg3 ;
-(id)initWithDocumentRoot:(id)arg1 navigationUnitsNodes:(id)arg2 ;
-(unsigned long long)absolutePageIndexForContentNodeRelativePageIndex:(unsigned long long)arg1 inContentNode:(id)arg2 forPresentationType:(id)arg3 ;
-(void)setContentNodeGUIDToContentNodeDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)contentNodeGUIDToContentNodeDictionary;
-(THSnippetPair)p_snippetPairForAbsolutePageIndex:(unsigned long long)arg1 withDocumentRoot:(id)arg2 forPresentationType:(id)arg3 ;
-(unsigned long long)navigationUnitRelativePageIndexForAbsolutePageIndex:(unsigned long long)arg1 forPresentationType:(id)arg2 ;
-(unsigned long long)navigationUnitRelativePageIndexForContentNodeRelativePageIndex:(unsigned long long)arg1 inContentNode:(id)arg2 forPresentationType:(id)arg3 ;
-(void)dealloc;
-(unsigned long long)pageCount;
@end
