/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzFilters/QuartzFilters-Structs.h>
#import <AppKit/NSOutlineView.h>

@interface QFilterOutlineView : NSOutlineView {

	char changeSelectionAllowed;

}
-(void)didReorderOrResizeNotification:(id)arg1 ;
-(void)replaceHeaderView;
-(void)workaroundReorderResizeProblem;
-(void)removeQFilterCellViews:(id)arg1 ;
-(void)clickAction:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)needsPanelToBecomeKey;
-(void)textDidEndEditing:(id)arg1 ;
-(void)awakeFromNib;
-(void)noteNumberOfRowsChanged;
-(char)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3 ;
-(char)selectionShouldChangeInOutlineView:(id)arg1 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(void)outlineViewItemWillExpand:(id)arg1 ;
-(void)outlineViewItemWillCollapse:(id)arg1 ;
-(void)removeTableColumn:(id)arg1 ;
@end
