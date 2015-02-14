/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/THMacNotesViewChapter.h>
@class NSString;


@protocol THMacNotesViewChapter <THMacNotesViewDataNode>
@property (nonatomic,copy,readonly) NSString * header; 
@required
-(NSString *)header;

@end


@class NSString, THNavigationUnit, NSArray;

@interface THMacNotesViewChapter : NSObject <THMacNotesViewChapter> {

	NSString* _header;
	THNavigationUnit* _navigationUnit;
	unsigned long long _childCount;
	NSArray* _sections;

}

@property (nonatomic,readonly) char needsRefresh; 
@property (nonatomic,copy) NSString * header;                                   //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) THNavigationUnit * navigationUnit;                 //@synthesize navigationUnit=_navigationUnit - In the implementation block
@property (assign,nonatomic) unsigned long long childCount;                     //@synthesize childCount=_childCount - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long annotationCount; 
-(void)setChildCount:(unsigned long long)arg1 ;
-(THNavigationUnit *)navigationUnit;
-(unsigned long long)annotationCount;
-(void)setNavigationUnit:(THNavigationUnit *)arg1 ;
-(id)p_displayStringWithNavigationModel:(id)arg1 navigationUnit:(id)arg2 ;
-(id)initWithNavigationModel:(id)arg1 navigationUnit:(id)arg2 sections:(id)arg3 ;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(NSString *)header;
-(void)setHeader:(NSString *)arg1 ;
-(void)dealloc;
-(char)needsRefresh;
-(unsigned long long)childCount;
@end
