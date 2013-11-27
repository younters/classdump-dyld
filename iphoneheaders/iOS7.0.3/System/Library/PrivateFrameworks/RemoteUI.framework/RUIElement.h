/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <RemoteUI/RemoteUI-Structs.h>
@class NSDictionary;

@interface RUIElement : NSObject {

	NSDictionary* _attributes;

}

@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)sourceURL;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(id)URLAttributeForImageName:(id)arg1 getScale:(float*)arg2 ;
-(BOOL)loadImage;
-(void)imageLoaded:(id)arg1 ;
-(int)_horizontalAlignmentForString:(id)arg1 ;
@end
