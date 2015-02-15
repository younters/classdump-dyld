/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Downloads/IORegistryExplorer.app/Contents/MacOS/IORegistryExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IORegistryExplorer/IORegistryExplorer-Structs.h>
@class NSMutableArray, NSString, NSMutableAttributedString, RexWindowController, RexRegistryEntry;

@interface RexRegistryOutlineItem : NSObject {

	RexRegistryOutlineItem* directParent;
	NSMutableArray* _allChildren;
	NSString* _name;
	NSMutableAttributedString* displayName;
	struct {
		unsigned childless : 1;
		unsigned onSelectionPath : 1;
		unsigned expanded : 1;
	}  flags;
	int findState;
	RexWindowController* windowController;
	RexRegistryEntry* registryEntry;
	NSString* plane;
	unsigned registryState;

}
-(id)initWithWindowController:(id)arg1 directParent:(id)arg2 plane:(id)arg3 registryEntry:(id)arg4 ;
-(void)rereadChildren;
-(char)isOnSelectionPath;
-(void)setOnSelectionPath:(char)arg1 ;
-(id)entryPath;
-(id)registryPath;
-(id)registryEntry;
-(char)hasSiblingsFollowing;
-(char)hasSiblingFollowingOnSelectionPath;
-(long long)numberOfChildren;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(id)allChildren;
-(id)previousSibling;
-(id)nextSibling;
-(void)dealloc;
-(id)name;
-(id)displayName;
-(id)parent;
-(id)children;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
@end
