/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libextension.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libextension.dylib/libextension.dylib-Structs.h>
#import <libextension.dylib/NSSecureCoding.h>
#import <libextension.dylib/NSCopying.h>

@protocol _NSItemProviderLoading;
@class NSDictionary, NSMutableDictionary, NSArray;

@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying> {

	/*^block*/id __previewImageHandler;
	NSDictionary* _userInfo;
	id<_NSItemProviderLoading> __loadOperator;
	NSMutableDictionary* __loadHandlers;

}

@property (readonly) CGRect sourceFrame; 
@property (readonly) CGRect containerFrame; 
@property (readonly) CGSize preferredPresentationSize; 
@property (copy) id previewImageHandler; 
@property (copy,readonly) NSArray * registeredTypeIdentifiers; 
@property (copy) NSDictionary * userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) id<_NSItemProviderLoading> _loadOperator;                //@synthesize _loadOperator=__loadOperator - In the implementation block
@property (retain) NSMutableDictionary * _loadHandlers;                     //@synthesize _loadHandlers=__loadHandlers - In the implementation block
+(char)supportsSecureCoding;
-(void)setSourceFrame:(CGRect)arg1 ;
-(void)setContainerFrame:(CGRect)arg1 ;
-(void)setPreferredPresentationSize:(CGSize)arg1 ;
-(id)_itemSourceInfo;
-(CGRect)sourceFrame;
-(CGRect)containerFrame;
-(CGSize)preferredPresentationSize;
-(void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(char)hasItemConformingToTypeIdentifier:(id)arg1 ;
-(void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSArray *)registeredTypeIdentifiers;
-(void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithItem:(id)arg1 typeIdentifier:(id)arg2 ;
-(id<_NSItemProviderLoading>)_loadOperator;
-(void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(char)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)set_loadOperator:(id<_NSItemProviderLoading>)arg1 ;
-(NSMutableDictionary *)_loadHandlers;
-(id)previewImageHandler;
-(void)setPreviewImageHandler:(id)arg1 ;
-(void)_loadItemOfClass:(Class)arg1 withLoadHandler:(/*^block*/id)arg2 options:(id)arg3 coerceForCoding:(char)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)set_loadHandlers:(NSMutableDictionary *)arg1 ;
@end
