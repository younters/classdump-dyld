/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/timed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TMSourceManagerDelegate;
@class NSMutableDictionary, , NSDictionary;

@interface TMSourceManager : NSObject {

	NSMutableDictionary* _rules;
	NSMutableDictionary* _sources;
	NSMutableDictionary* _availability;
	<TMSourceManagerDelegate>* delegate;

}

@property (assign,nonatomic) <TMSourceManagerDelegate> * delegate; 
@property (nonatomic,retain) NSDictionary * rules;                              //@synthesize rules=_rules - In the implementation block
-(void)setSourceAvailable:(id)arg1 ;
-(void)setSourceUnavailable:(id)arg1 ;
-(BOOL)isSourceAvailable:(id)arg1 ;
-(void)setSourceAvailability:(id)arg1 ;
-(double)unavailableDelayForSource:(id)arg1 ;
-(double)timeoutForSource:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)rules;
-(void)setRules:(id)arg1 ;
@end
