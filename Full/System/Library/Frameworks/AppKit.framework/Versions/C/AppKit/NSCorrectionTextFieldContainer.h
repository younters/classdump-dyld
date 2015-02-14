/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSMutableArray, NSMutableDictionary;

@interface NSCorrectionTextFieldContainer : NSView {

	NSMutableArray* candidateTextFields;
	unsigned long long selectedCandidate;
	NSMutableDictionary* textAttributes;
	long long correctionPanelType;

}

@property (readonly) unsigned long long numberOfCandidates; 
@property (readonly) char hasSelection; 
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityWindowAttribute;
-(char)accessibilityIsWindowAttributeSettable;
-(id)accessibilityTopLevelUIElementAttribute;
-(char)accessibilityIsTopLevelUIElementAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(void)setCandidates:(id)arg1 andCorrectionPanelType:(long long)arg2 ;
-(void)setSelectedCandidate:(unsigned long long)arg1 ;
-(id)correction;
-(char)selectPreviousCandidate;
-(char)selectNextCandidate;
-(char)hasSelection;
-(unsigned long long)numberOfCandidates;
-(void)setTextAttributes:(id)arg1 ;
-(unsigned long long)indexOfCandidateContainingPoint:(CGPoint)arg1 ;
-(id)textFieldAtIndex:(unsigned long long)arg1 ;
@end
