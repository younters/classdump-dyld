/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/Versions/A/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMPlatformCore/IMPlatformCore-Structs.h>
#import <IMPlatformCore/NSCopying.h>

@class NSIndexPath, NSString;

@interface IMCollectionViewLayoutAttributes : NSObject <NSCopying> {

	char _hidden;
	int _representedElementCategory;
	NSIndexPath* _indexPath;
	double _alpha;
	NSString* _representedElementKind;
	CGRect _frame;

}

@property (nonatomic,retain) NSIndexPath * indexPath;                        //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) CGRect frame;                                   //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double alpha;                                   //@synthesize alpha=_alpha - In the implementation block
@property (assign,getter=isHidden,nonatomic) char hidden;                    //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) int representedElementCategory;                 //@synthesize representedElementCategory=_representedElementCategory - In the implementation block
@property (nonatomic,retain) NSString * representedElementKind;              //@synthesize representedElementKind=_representedElementKind - In the implementation block
+(id)layoutAttributesForCellWithIndexPath:(id)arg1 ;
+(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
+(id)layoutAttributesForDecorationViewOfKind:(id)arg1 ;
-(int)representedElementCategory;
-(NSString *)representedElementKind;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setRepresentedElementCategory:(int)arg1 ;
-(void)setRepresentedElementKind:(NSString *)arg1 ;
-(id)initWithIndexPath:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(CGRect)frame;
-(void)setHidden:(char)arg1 ;
-(char)isHidden;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setAlpha:(double)arg1 ;
-(double)alpha;
@end
