/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:43:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Notes.app/Contents/MacOS/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSOutlineView.h>

@class FolderListTreeController;

@interface FolderListOutlineView : NSOutlineView {

	FolderListTreeController* _treeController;

}

@property (assign,nonatomic,__weak) FolderListTreeController * treeController;              //@synthesize treeController=_treeController - In the implementation block
-(FolderListTreeController *)treeController;
-(void)setTreeController:(FolderListTreeController *)arg1 ;
-(void)dealloc;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(void)keyDown:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)awakeFromNib;
@end
