/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCHSelectionPath.h>

@interface TSCH3DSelectionPath : TSCHSelectionPath {

	Class mSceneObjectClass;
	unsigned mStyleIndex;

}

@property (nonatomic,readonly) Class sceneObjectClass; 
@property (nonatomic,readonly) unsigned styleIndex; 
+(id)selectionPathWithClass:(Class)arg1 styleIndex:(unsigned)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5 ;
+(id)selectionPathWithClass:(Class)arg1 styleIndex:(unsigned)arg2 selectionPath:(id)arg3 ;
-(Class)sceneObjectClass;
-(id)initWithClass:(Class)arg1 styleIndex:(unsigned)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5 ;
-(unsigned)styleIndex;
@end
