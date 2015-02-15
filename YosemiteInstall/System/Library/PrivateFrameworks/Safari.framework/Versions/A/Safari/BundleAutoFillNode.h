/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/WBSFormAutoFillNode.h>

@class NSString;

@interface BundleAutoFillNode : NSObject <WBSFormAutoFillNode> {

	BundleNodeHandle* _node;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillNodeWithBundleNodeHandle:(const BundleNodeHandle*)arg1 ;
-(const BundleNodeHandle*)wkBundleNodeHandle;
-(id)initWithWKBundleNodeHandle:(const BundleNodeHandle*)arg1 ;
-(id)initWithJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(CGRect)elementBounds;
-(char)isHTMLInputElementAutofilled;
-(void)setHTMLInputElementAutofilled:(char)arg1 ;
-(char)isHTMLInputElementUserEdited;
-(char)isHTMLTextAreaElementUserEdited;
-(id)htmlTableCellElementCellAbove;
@end
