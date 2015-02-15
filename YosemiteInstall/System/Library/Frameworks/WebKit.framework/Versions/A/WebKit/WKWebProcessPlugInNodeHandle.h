/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSString;

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleNodeHandle> _nodeHandle;

}

@property (nonatomic,readonly) CGRect elementBounds; 
@property (assign,nonatomic) char HTMLInputElementIsAutoFilled; 
@property (nonatomic,readonly) char HTMLInputElementIsUserEdited; 
@property (nonatomic,readonly) char HTMLTextAreaElementIsUserEdited; 
@property (nonatomic,readonly) WKWebProcessPlugInNodeHandle * HTMLTableCellElementCellAbove; 
@property (readonly) InjectedBundleNodeHandle* _nodeHandle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2 ;
-(CGRect)elementBounds;
-(Object*)_apiObject;
-(id)htmlIFrameElementContentFrame;
-(char)HTMLInputElementIsAutoFilled;
-(void)setHTMLInputElementIsAutoFilled:(char)arg1 ;
-(char)HTMLInputElementIsUserEdited;
-(char)HTMLTextAreaElementIsUserEdited;
-(char)isTextField;
-(WKWebProcessPlugInNodeHandle *)HTMLTableCellElementCellAbove;
-(InjectedBundleNodeHandle*)_nodeHandle;
-(void)dealloc;
@end
