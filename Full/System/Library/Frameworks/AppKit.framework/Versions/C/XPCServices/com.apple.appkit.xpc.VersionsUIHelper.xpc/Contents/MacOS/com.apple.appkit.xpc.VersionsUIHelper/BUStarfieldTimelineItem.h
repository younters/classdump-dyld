/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:28 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/XPCServices/com.apple.appkit.xpc.VersionsUIHelper.xpc/Contents/MacOS/com.apple.appkit.xpc.VersionsUIHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol BUStarfieldTimelineItem <NSObject>
@optional
-(unsigned long long)timelineItemType;
-(id)timelineItemTitle;
-(id)timelineItemFocusedTitle;
-(char)timelineItemEnabled;
-(char)timelineItemSelectable;
-(char)timelineItemIsDivider;

@required
-(id)timelineItemDate;

@end
