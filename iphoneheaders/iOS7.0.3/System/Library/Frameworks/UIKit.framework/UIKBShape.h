/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding, NSCopying> {

	UIKBGeometry* m_geometry;
	CGRect m_originalFrame;
	CGRect m_frame;
	CGRect m_paddedFrame;
	unsigned m_uid;
	BOOL m_scaled;

}

@property (nonatomic,retain) UIKBGeometry * geometry; 
@property (nonatomic,readonly) CGRect originalFrame; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect paddedFrame; 
@property (nonatomic,readonly) unsigned uid; 
+(id)shape;
+(id)shapeByCombining:(id)arg1 withShape:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isEmpty;
-(id)geometry;
-(CGRect)paddedFrame;
-(void)setPaddedFrame:(CGRect)arg1 ;
-(void)setGeometry:(id)arg1 ;
-(CGRect)originalFrame;
-(unsigned)uid;
-(void)setFrame:(CGRect)arg1 resetOriginalFrame:(BOOL)arg2 ;
-(CGRect)_scaleRect:(CGRect)arg1 inYAxis:(BOOL)arg2 ;
-(id)initWithGeometry:(id)arg1 frame:(CGRect)arg2 paddedFrame:(CGRect)arg3 ;
-(void)makeLikeOther:(id)arg1 ;
-(void)setFrameOnly:(CGRect)arg1 ;
-(void)addRectFrom:(id)arg1 ;
-(void)addRectFrom:(id)arg1 widthFraction:(float)arg2 adjustOriginFactor:(float)arg3 ;
-(void)scaleWidth:(float)arg1 ;
-(void)scaleIfNeeded:(float)arg1 onlyYAxis:(BOOL)arg2 ;
@end
