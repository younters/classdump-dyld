/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:56 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/iTunes.app/Contents/MacOS/iTunes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton;

@interface DateRelativeRowTemplate : NSPredicateEditorRowTemplate {

	NSPopUpButton* _unitsPopup;

}

@property (readonly) NSPopUpButton * unitsPopup;              //@synthesize unitsPopup=_unitsPopup - In the implementation block
-(NSPopUpButton *)unitsPopup;
-(void)dealloc;
-(void)setPredicate:(id)arg1 ;
-(id)templateViews;
-(double)matchForPredicate:(id)arg1 ;
-(id)predicateWithSubpredicates:(id)arg1 ;
@end
