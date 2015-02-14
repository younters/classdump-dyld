/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/NSCoding.h>
#import <ImageKit/NSCopying.h>

@interface IKImageCropPRS : NSObject <NSCoding, NSCopying> {

	CGPoint _position;
	CGSize _scale;
	float _rotation;

}
-(CGSize)scale;
-(CGPoint)transformVectorFromViewSpaceToCropSpace:(CGPoint)arg1 ;
-(void)setDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(void)setPosition:(CGPoint)arg1 ;
-(id)description;
-(CGPoint)position;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(void)setScale:(CGSize)arg1 ;
@end
