/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Frameworks/PackageUIKit.framework/Versions/A/PackageUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageUIKit/PackageUIKit-Structs.h>
#import <AppKit/NSOutlineView.h>

@interface PUKDiskPickerView : NSOutlineView {

	id _outlineViewClientProxy;

}
-(void)_setupOutlineView;
-(id)diskPickerDataSource;
-(void)setDiskPickerDataSource:(id)arg1 ;
-(id)diskPickerDelegate;
-(void)setDiskPickerDelegate:(id)arg1 ;
-(id)selectedDisk;
-(void)setSelectedDisk:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)reloadItem:(id)arg1 reloadChildren:(char)arg2 ;
-(void)setDataSource:(id)arg1 ;
-(id)_accessibilityChildren;
@end
