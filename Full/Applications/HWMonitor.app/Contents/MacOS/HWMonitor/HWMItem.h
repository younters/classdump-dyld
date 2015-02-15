/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:03 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/MacOS/HWMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class HWMEngine, NSNumber, NSString, NSSet;

@interface HWMItem : NSManagedObject {

	HWMEngine* engine;

}

@property (nonatomic,retain) NSNumber * hidden; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * legend; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSSet * favorites; 
@property (nonatomic,retain) HWMEngine * engine; 
-(void)prepareForDeletion;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(void)setEngine:(HWMEngine *)arg1 ;
-(HWMEngine *)engine;
@end
