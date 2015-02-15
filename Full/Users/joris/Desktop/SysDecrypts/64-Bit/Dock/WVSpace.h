/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, _CGSSpace, NSDictionary;

@interface WVSpace : NSObject {

	NSString* _uuid;
	NSString* _name;
	_CGSSpace* _space;

}

@property (nonatomic,readonly) NSString * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) char fullscreen; 
@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char userSpace; 
@property (nonatomic,readonly) char supressesDock; 
@property (nonatomic,readonly) unsigned owningWID; 
@property (nonatomic,readonly) NSString * messageTracerDescription; 
@property (nonatomic,readonly) NSDictionary * persistantValue; 
@property (nonatomic,retain) _CGSSpace * space;                                  //@synthesize space=_space - In the implementation block
@property (nonatomic,readonly) BOOL isDashboard; 
-(char)userSpace;
-(_CGSSpace *)space;
-(void)setSpace:(_CGSSpace *)arg1 ;
-(char)fullscreen;
-(BOOL)isDashboard;
-(id)initWithSpace:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 space:(id)arg2 ;
-(id)_createUUID;
-(id)_createSpace:(id)arg1 ;
-(char)supressesDock;
-(unsigned)owningWID;
-(NSString *)messageTracerDescription;
-(NSDictionary *)persistantValue;
-(NSString *)uuid;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
