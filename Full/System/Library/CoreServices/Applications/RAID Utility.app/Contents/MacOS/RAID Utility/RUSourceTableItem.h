/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/RAID Utility.app/Contents/MacOS/RAID Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <RAID Utility/RAID Utility-Structs.h>
@class NSOutlineView, CRDevice;

@interface RUSourceTableItem : NSObject {

	NSOutlineView* _ov;
	CRDevice* _device;

}
-(long long)numberOfChildren;
-(id)childAtIndex:(long long)arg1 ;
-(void)dealloc;
-(id)cell;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)rowHeight;
-(id)objectValue;
-(id)device;
-(id)outlineView;
-(id)children;
-(void)setOutlineView:(id)arg1 ;
-(void)setDevice:(id)arg1 ;
@end

