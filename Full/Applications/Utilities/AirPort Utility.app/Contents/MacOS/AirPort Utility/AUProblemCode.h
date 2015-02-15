/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPort Utility/AUSubproperty.h>

@class NSString;

@interface AUProblemCode : AUSubproperty {

	char ignored;
	char ignorable;
	char isUnknown;
	NSString* description;
	NSString* localizedProblemCode;
	NSString* descriptiveText;
	id target;
	SEL action;
	char expanded;
	char changing;
	unsigned problemCode;

}

@property (assign,nonatomic) char ignored; 
@property (assign,nonatomic) char ignorable; 
@property (assign,nonatomic) char isUnknown; 
@property (assign,nonatomic) unsigned problemCode; 
@property (nonatomic,retain) NSString * localizedProblemCode; 
@property (nonatomic,retain) NSString * descriptiveText; 
@property (nonatomic,retain) id target; 
@property (assign,nonatomic) SEL action; 
@property (assign,nonatomic) char expanded; 
@property (assign,nonatomic) char changing; 
+(id)keyPathsForValuesAffectingChanging;
-(id)saveData;
-(NSString *)localizedProblemCode;
-(unsigned)problemCode;
-(void)setChanging:(char)arg1 ;
-(char)ignored;
-(void)setProblemCode:(unsigned)arg1 ;
-(void)setIgnored:(char)arg1 ;
-(void)setIgnorable:(char)arg1 ;
-(void)setDescriptiveText:(NSString *)arg1 ;
-(void)setIsUnknown:(char)arg1 ;
-(void)setLocalizedProblemCode:(NSString *)arg1 ;
-(char)ignorable;
-(char)isUnknown;
-(NSString *)descriptiveText;
-(char)changing;
-(id)init;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)target;
-(SEL)action;
-(char)expanded;
-(void)setExpanded:(char)arg1 ;
@end
