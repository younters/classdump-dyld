/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:22:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Filter Articles.action/Contents/MacOS/Filter Articles
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class _AMPredicateEditor, NSPredicate;

@interface Filter_Feed_Entries : AMBundleAction {

	_AMPredicateEditor* predicateEditor;

}

@property (retain) NSPredicate * predicate; 
-(id)evaluationPredicateForUIPredicate:(id)arg1 ;
-(id)evaluationPredicateForUICompoundPredicate:(id)arg1 ;
-(id)evaluationPredicateForUIComparisonPredicate:(id)arg1 ;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)updateParameters;
-(void)parametersUpdated;
-(void)predicateEditorChanged:(id)arg1 ;
-(void)awakeFromNib;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
@end
