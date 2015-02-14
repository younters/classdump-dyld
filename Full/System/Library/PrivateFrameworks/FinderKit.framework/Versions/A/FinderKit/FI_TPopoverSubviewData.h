/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@interface FI_TPopoverSubviewData : NSObject {

	TNSRef<FI_TView *> _subview;
	TNSRef<FI_TLayoutBinder *> _layoutBinder;
	TNSRef<FI_TGradientSeparator *> _separator;
	TNSRef<FI_TLayoutBinder *> _separatorLayoutBinder;

}
-(id)subview;
-(id)layoutBinder;
-(void)removeSeparator;
-(id)initWithSubview:(id)arg1 ;
-(void)addSeparator;
-(void)dealloc;
@end
