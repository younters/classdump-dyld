/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/BKPlatformTOCNodeProtocol.h>

@class NSArray, NSString, NSImage, THModelPageInfo, THModelLink, NSMutableArray, THDocumentNavigator, TSPData;

@interface THMacTOCNode : NSObject <BKPlatformTOCNodeProtocol> {

	CGImageRef _image;
	int _nodeType;
	int _displayPageNumberFormat;
	THModelPageInfo* _chapterTOCPageInfo;
	NSString* _nodeNumberString;
	NSString* _title;
	unsigned long long _displayPageNumberValue;
	NSString* _displayPageNumber;
	long long _absolutePageIndex;
	THModelLink* _link;
	NSMutableArray* _children;
	NSMutableArray* _pages;
	THDocumentNavigator* _navigator;
	TSPData* _imageData;

}

@property (assign,nonatomic) int nodeType;                                           //@synthesize nodeType=_nodeType - In the implementation block
@property (nonatomic,retain) THModelPageInfo * chapterTOCPageInfo;                   //@synthesize chapterTOCPageInfo=_chapterTOCPageInfo - In the implementation block
@property (nonatomic,copy) NSString * nodeNumberString;                              //@synthesize nodeNumberString=_nodeNumberString - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int displayPageNumberFormat;                            //@synthesize displayPageNumberFormat=_displayPageNumberFormat - In the implementation block
@property (assign,nonatomic) unsigned long long displayPageNumberValue;              //@synthesize displayPageNumberValue=_displayPageNumberValue - In the implementation block
@property (nonatomic,copy) NSString * displayPageNumber;                             //@synthesize displayPageNumber=_displayPageNumber - In the implementation block
@property (nonatomic,readonly) CGImageRef image; 
@property (assign,nonatomic) long long absolutePageIndex;                            //@synthesize absolutePageIndex=_absolutePageIndex - In the implementation block
@property (nonatomic,retain) THModelLink * link;                                     //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;                              //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) NSMutableArray * pages;                                 //@synthesize pages=_pages - In the implementation block
@property (nonatomic,retain) THDocumentNavigator * navigator;                        //@synthesize navigator=_navigator - In the implementation block
@property (nonatomic,retain) TSPData * imageData;                                    //@synthesize imageData=_imageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * nodeChildren; 
@property (nonatomic,readonly) unsigned long long nodeLevel; 
@property (nonatomic,readonly) NSString * nodeTtitle; 
@property (nonatomic,readonly) NSString * nodeSubTitle; 
@property (nonatomic,readonly) NSString * nodePageNumber; 
@property (nonatomic,readonly) NSImage * nodeImage; 
@property (nonatomic,readonly) NSImage * nodeTitleImage; 
@property (nonatomic,readonly) NSImage * nodeSelectedTitleImage; 
+(id)nodeTreeWithDocumentRoot:(id)arg1 navigator:(id)arg2 ;
+(id)nodeForPageIndex:(long long)arg1 inNode:(id)arg2 excludeHeadings:(char)arg3 ;
-(NSArray *)nodeChildren;
-(unsigned long long)nodeLevel;
-(NSString *)nodeTtitle;
-(NSString *)nodeSubTitle;
-(NSImage *)nodeImage;
-(NSImage *)nodeTitleImage;
-(NSString *)nodePageNumber;
-(NSImage *)nodeSelectedTitleImage;
-(void)setPages:(NSMutableArray *)arg1 ;
-(void)setDisplayPageNumber:(NSString *)arg1 ;
-(void)setAbsolutePageIndex:(long long)arg1 ;
-(int)displayPageNumberFormat;
-(THModelPageInfo *)chapterTOCPageInfo;
-(void)setDisplayPageNumberFormat:(int)arg1 ;
-(unsigned long long)displayPageNumberValue;
-(long long)absolutePageIndex;
-(void)setChapterTOCPageInfo:(THModelPageInfo *)arg1 ;
-(THDocumentNavigator *)navigator;
-(void)setNavigator:(THDocumentNavigator *)arg1 ;
-(void)setNodeType:(int)arg1 ;
-(void)setDisplayPageNumberValue:(unsigned long long)arg1 ;
-(NSString *)displayPageNumber;
-(void)setNodeNumberString:(NSString *)arg1 ;
-(id)rootNodeFilteringOutFirstLevelNodesOfType:(int)arg1 ;
-(NSString *)nodeNumberString;
-(void)addPage:(id)arg1 ;
-(THModelLink *)link;
-(void)setLink:(THModelLink *)arg1 ;
-(int)nodeType;
-(id)init;
-(void)dealloc;
-(CGImageRef)image;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSMutableArray *)children;
-(void)addChild:(id)arg1 ;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pages;
-(void)setImageData:(TSPData *)arg1 ;
-(TSPData *)imageData;
@end
